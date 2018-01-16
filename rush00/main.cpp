/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:05:45 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/09 22:36:08 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"
#include <iostream>
#include <ncurses.h>
#include "game.hpp"
#include <unistd.h>
#include <sys/time.h>

inline unsigned long getTime() {
    struct timeval tv;
    gettimeofday(&tv, 0);
    return static_cast<unsigned long>(tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

void run(int& row, int& col, WINDOW* win) {
    Game g(row, col, win);
    unsigned long next = getTime();
    int loops;
    while (g.isRunning()) {
        loops = 0;
        while (getTime() > next && loops < MAX_FS) {
            g.player->processInputs(win);
            wclear(win);
            g.update();
            next += ST;
            ++loops;
        }
        wrefresh(win);
    }
}

bool init_ncurses(int *row, int *col, WINDOW ** win) {
    initscr();
    getmaxyx(stdscr, *row, *col);
    if (*row > ROW_SIZE && *col > COLUMN_SIZE) {
        for (int x = 0; x < *col; x++) {
            mvprintw(0, x , "-");
            mvprintw(*col - 1, x , "-");
        }
        for (int y = 1; y < *row - 1; y++) {
            mvprintw(y, 0, "|");
            mvprintw(y, *col - 1, "|");
        }
        refresh();
        noecho();
        curs_set(FALSE);
        cbreak();
        *row -= 2;
        *col -= 2;
        *win = newwin(*row, *col, 1, 1);
        nodelay(*win, TRUE);
        keypad(*win, TRUE);
        return (true);
    }
    return (false);
}

int main(void) {
    int row;
    int col;
    WINDOW* win;

    if (init_ncurses(&row, &col, &win)) {
        run(row, col, win);
        delwin(win);
    } else {
        printw("Screen size too small.\nPress any button to exit.");
        getch();
    }
    endwin();
}
