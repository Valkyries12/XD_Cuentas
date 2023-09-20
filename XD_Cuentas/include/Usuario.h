#ifndef USUARIO_H
#define USUARIO_H


class Usuario
{
    public:
        //constructores y destructores
        Usuario();
        Usuario(int id, std::string email, std::string password);
        virtual ~Usuario();

        //getters y setters
        int getId() const;
        void setId(int id);
        std::string getEmail() const;
        void setEmail(std::string email);
        std::string getPassword() const;
        void setPassword(std::string password);


    protected:

    private:
        int _id;
        char _email[50];
        char _password[20];

};

#endif // USUARIO_H
