#include <iostream>

#include "UsuarioModel.h"
#include "Usuario.h"

using namespace std;

int main()
{
    UsuarioModel usuarioModel(Usuario(1, "nicolas", "asd123"), "usuarios.dat");
    usuarioModel.crearArchivo();
    return 0;
}
