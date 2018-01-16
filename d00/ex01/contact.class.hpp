/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <bmontoya@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 11:34:05 by bmontoya          #+#    #+#             */
/*   Updated: 2017/07/03 23:11:41 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>

class Contact {
 public:
     Contact(void);
     ~Contact(void);
     void setFirstname(std::string firstname);
     void setLastname(std::string lastname);
     void setNickname(std::string nickname);
     void setLogin(std::string login);
     void setPostaladdress(std::string postaladdress);
     void setEmailaddress(std::string emailaddress);
     void setPhonenumber(std::string phonenumber);
     void setBirthday(std::string birthday);
     void setMeal(std::string meal);
     void setUnderwear(std::string underwear);
     void setSecret(std::string secret);
     void display() const;
     std::string getFirstname() const;
     std::string getLastname() const;
     std::string getNickname() const;

 private:
     std::string _first_name;
     std::string _last_name;
     std::string _nickname;
     std::string _login;
     std::string _postal_address;
     std::string _email_address;
     std::string _phone_number;
     std::string _birthday;
     std::string _meal;
     std::string _underwear;
     std::string _secret;
};
#endif
