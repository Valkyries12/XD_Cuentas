#ifndef USUARIOVIEW_H
#define USUARIOVIEW_H


class UsuarioView
{
    public:
        //constructores y destructores
        UsuarioView();
        virtual ~UsuarioView();

        //getters y setters
        std::string getMensaje() const;
        void setMensaje(std::string mensaje);

        //metodos

    protected:

    private:
        char _mensaje[100];
};

#endif // USUARIOVIEW_H
