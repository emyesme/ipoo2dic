#include "Medicamentos.h"

Medicamentos::Medicamentos(string nombre, int numeroDosis){
	this->nombre = nombre;
	this->numeroDosis = numeroDosis;
}

Medicamentos::~Medicamentos(){
}
	
string Medicamentos::getNombre(){
	return nombre;
}

int Medicamentos::getNumeroDosis(){
	return numeroDosis;
}
