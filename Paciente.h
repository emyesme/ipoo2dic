/*
 * Autores: Jaime Cuartas 
 * 			Emily Carvajal
 * 			Sebastian Afanador
 * Archivo: Paciente.h
 * Descripcion: Definicion de la clase Paciente
 * Fecha de Creacion: 02 de Diciembre del 2016
 * Fecha de modificacion: 02 de Diciembre del 2016
 * 
 * */

#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include "Historia.h"

using std::string;

class Paciente{
	private:
	int cedula;
	string nombre;
	string sexo;
	int edad;
	Historia *objHistoria;
	
	public:
	Paciente(int cedula, string nombre, string sexo, int edad, string nombre2, string descripcion, string dia,string descripcion2, string nombre3, int dosis);
	~Paciente();
	
	int getCedula();
	string getNombre();
	string getSexo();
	int getEdad();
	Historia *getObjHistoria();
	
};

#endif
