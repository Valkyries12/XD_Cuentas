#ifndef USUARIOVIEW_H
#define USUARIOVIEW_H

#include "Usuario.h"


class UsuarioView
{
    public:
        //constructores y destructores
        UsuarioView();
        virtual ~UsuarioView();

        //getters y setters
        std::string getMensaje() const;
        void setMensaje(std::string mensaje);
        Usuario getUsuario() const;
        void setUsuario(Usuario usuario);

        //metodos

    protected:

    private:
        char _mensaje[100];
        Usuario _usuario;
};

#endif // USUARIOVIEW_H
