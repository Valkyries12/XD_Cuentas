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
    bool fueCreado = false;
    pFile = fopen(_nombreArchivo, "wb");
    if (pFile != nullptr) {
        fueCreado = true;
        fclose(pFile);
    }

    return fueCreado;
}


bool UsuarioModel::registrar(Usuario usuario) {
    FILE* pFile;
    bool fueRegistrado = false;
    pFile = fopen(_nombreArchivo, "ab");
    if (pFile != nullptr) {
        fueRegistrado = fwrite(&usuario, sizeof(Usuario), 1, pFile);
        fclose(pFile);
    }

    return fueRegistrado;
}

bool UsuarioModel::leer() {
    Usuario usuario;
    FILE* pFile;
    bool fueLeido = false;
    pFile = fopen(_nombreArchivo, "rb");
    if (pFile != nullptr) {
        while(fread(&usuario, sizeof(Usuario), 1, pFile)== 1) {
            std::cout << usuario.getEmail();
        }
        fueLeido = true;
        fclose(pFile);
    }

    return fueLeido;
}

bool UsuarioModel::buscar(std::string email) {
    Usuario usuario;
    FILE* pFile;
    bool fueEncontrado = false;
    pFile = fopen(_nombreArchivo, "rb");
    if (pFile != nullptr) {
        while(fread(&usuario, sizeof(Usuario), 1, pFile) == 1) {
            if (strcmp(usuario.getEmail().c_str(), email.c_str()) == 0) {
                fueEncontrado = true;
                break;
            }
        }
        fclose(pFile);
    }

    return fueEncontrado;
}
