#ifndef USUARIOMODEL_H
#define USUARIOMODEL_H

#include "Usuario.h"

class UsuarioModel
{
    public:
        //constructores y destructores
        UsuarioModel();
        UsuarioModel(Usuario usuario, std::string nombreArchivo);
        virtual ~UsuarioModel();

        //getters y setters
        void setUsuario(Usuario usuario);
        Usuario getUsuario() const;
        void setNombreArchivo(std::string nombreArchivo);
        std::string getNombreArchivo() const;

        //metodos
        bool crearArchivo();
        bool registrar(Usuario usuario);
        bool buscar(std::string email);
        bool leer(); //muestra los usuarios del archivo, para probar

    protected:

    private:
        //atributos
        Usuario _usuario;
        //Usuario _usuarios;
        char _nombreArchivo[100];

        //metodos
        //bool crearArchivo();

};

#endif // USUARIOMODEL_H
