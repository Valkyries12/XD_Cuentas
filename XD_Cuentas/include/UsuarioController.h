#ifndef USUARIOCONTROLLER_H
#define USUARIOCONTROLLER_H

#include "Usuario.h"
#include "UsuarioView.h"
#include "UsuarioModel.h"


class UsuarioController
{
    public:
        //constructores y destructores
        UsuarioController();
        UsuarioController(Usuario usuario, std::string nombreArchivo);
        virtual ~UsuarioController();

        //getters y setters
        void setUsuarioModel(UsuarioModel modelo);
        UsuarioModel getUsuarioModel() const;
        void setUsuarioView(UsuarioView vista);
        UsuarioView getUsuarioView() const;

        //metodos
        void registrarUsuario(Usuario usuario);
        void buscarUsuarioPorEmail(std::string email);

    protected:

    private:
        //metodos
        UsuarioModel _modelo;
        UsuarioView _vista;
};

#endif // USUARIOCONTROLLER_H
