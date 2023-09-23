#include <iostream>
#include "cstring"

#include "UsuarioModel.h"

UsuarioModel::UsuarioModel()
{
    //ctor
}

UsuarioModel::UsuarioModel(Usuario usuario, std::string nombreArchivo)
{
    setUsuario(usuario);
    setNombreArchivo(nombreArchivo);
}

UsuarioModel::~UsuarioModel()
{
    //dtor
}


//getters y setters
void UsuarioModel::setUsuario(Usuario usuario) {
    _usuario = usuario;
}

Usuario UsuarioModel::getUsuario() const {
    return _usuario;
}

void UsuarioModel::setNombreArchivo(std::string nombreArchivo) {
    strcpy(_nombreArchivo, nombreArchivo.c_str());
}

std::string UsuarioModel::getNombreArchivo() const {
    return _nombreArchivo;
}



//metodos
bool UsuarioModel::crearArchivo() {
    FILE* pFile;
    bool estaCreado = false;
    pFile = fopen(_nombreArchivo, "wb");
    if (pFile != nullptr) {
        estaCreado = true;
        fclose(pFile);
    }

    return estaCreado;
}

bool UsuarioModel::registrar(Usuario usuario) {

}

bool UsuarioModel::buscar(std::string email) {

}
