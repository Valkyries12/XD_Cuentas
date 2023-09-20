#include <iostream>
#include "cstring"
#include "UsuarioView.h"

UsuarioView::UsuarioView()
{
    //ctor
}

UsuarioView::~UsuarioView()
{
    //dtor
}


//getters y setters
std::string UsuarioView::getMensaje() const {
    return _mensaje;
}

void UsuarioView::setMensaje(std::string mensaje) {
    strcpy(_mensaje, mensaje);
}
