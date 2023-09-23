#include <iostream>

#include "UsuarioController.h"
#include "UsuarioModel.h"
#include "UsuarioView.h"

UsuarioController::UsuarioController()
{
    //ctor
    _modelo = UsuarioModel();
    _vista = UsuarioView();
}

/*UsuarioController::UsuarioController(Usuario usuario, std::string nombreArchivo) {
    UsuarioModel modelo(usuario, nombreArchivo);
    setUsuarioModel(modelo);
    UsuarioView vista();
    setUsuarioView(vista);
}*/

UsuarioController::~UsuarioController()
{
    //dtor
}


//getters y setters
void UsuarioController::setUsuarioModel(UsuarioModel modelo) {
    _modelo = modelo;
}

UsuarioModel UsuarioController::getUsuarioModel() const {
    return _modelo;
}

void UsuarioController::setUsuarioView(UsuarioView vista) {
    _vista = vista;
}

UsuarioView UsuarioController::getUsuarioView() const {
    return _vista;
}


//metodos
void UsuarioController::registrarUsuario(Usuario usuario) {
    bool fueRegistrado = _modelo.registrar(usuario);
    if (fueRegistrado) {
        _vista.setMensaje("Se ha registrado con éxito.");
    } else {
        _vista.setMensaje("Ha ocurrido un error con el registro.");
    }
}

void UsuarioController::buscarUsuarioPorEmail(std::string email) {
    bool fueEncontrado = _modelo.buscar(email);
    if (!fueEncontrado) {
        _vista.setMensaje("El email ingresado es inexistente.");
    }
}
