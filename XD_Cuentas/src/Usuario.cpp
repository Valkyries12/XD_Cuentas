#include <iostream>
#include "cstring"
#include "Usuario.h"

Usuario::Usuario()
{
    //ctor
}

Usuario::Usuario(int id, std::string email, std::string password)
{
    setId(id);
    setEmail(email);
    setPassword(password);
}

Usuario::~Usuario()
{
    //dtor
}


//getters y setters
int Usuario::getId() const {
    return _id;
}

void Usuario::setId(int id) {
    _id = id;
}

std::string Usuario::getEmail() const {
    return _email;
}

void Usuario::setEmail(std::string email) {
    strcpy(_email, email.c_str());
}

std::string Usuario::getPassword() const {
    return _password;
}

void Usuario::setPassword(std::string password) {
    strcpy(_password, password.c_str());
}
