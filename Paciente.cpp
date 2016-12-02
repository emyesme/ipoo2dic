/*
 * Autores: Jaime Cuartas 
 * 			Emily Carvajal
 * 			Sebastian Afanador
 * Archivo: Paciente.cpp
 * Descripcion: Implementacion de la clase Paciente
 * Fecha de Creacion: 02 de Diciembre del 2016
 * Fecha de modificacion: 02 de Diciembre del 2016
 * 
 * */
 
 #include "Paciente.h"

Paciente::Paciente(int cedula, string nombre, string sexo, int edad, string nombre2, string descripcion, string dia,string descripcion2, string nombre3, int dosis){
	this->cedula=cedula;
	this->nombre=nombre;
	this->sexo=sexo;
	objHistoria = new Historia(nombre2,descripcion,dia,descripcion2,nombre3,dosis);
}

Paciente::~Paciente(){
	delete objHistoria;
	objHistoria = 0;
}

int Paciente::getCedula(){
	return cedula;
}
string Paciente::getNombre(){
	return nombre;
}
string Paciente::getSexo(){
	return sexo;
}
int Paciente::getEdad(){
	return edad;
}
Historia *Paciente::getObjHistoria(){
	return objHistoria;
}
