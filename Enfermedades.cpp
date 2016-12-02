#include "Enfermedades.h"

Enfermedades::Enfermedades(string nombre, string descripcion){
	this->nombre = nombre;
	this->descripcion = descripcion;
}

Enfermedades::~Enfermedades(){
}
	
string Enfermedades::getNombre(){
	return nombre;
}

string Enfermedades::getDescripcion(){
	return descripcion;
}
