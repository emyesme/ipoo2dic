#include "Historia.h"

Historia::Historia(string nombreEnfermedades, string descripcionEnfermedades, string diaCitas, string descripcionCitas,	string nombreMedicamentos, int numeroDosisMedicamentos){
	
	objEnfermedades = new Enfermedades(nombreEnfermedades, descripcionEnfermedades);
	objCitasMedicas = new CitasMedicas(diaCitas, descripcionCitas);
	objMedicamentos = new Medicamentos(nombreMedicamentos, numeroDosisMedicamentos);
}

Historia::~Historia(){
	delete objEnfermedades;
	objEnfermedades = 0;
	delete objCitasMedicas;
	objCitasMedicas = 0;
	delete objMedicamentos;
	objMedicamentos = 0;
}

string Historia::getNombreEnfermedades(){
	return objEnfermedades->getNombre();
}
string Historia::getDescripcionEnfermedades(){
	return objEnfermedades->getDescripcion();
}
		
string Historia::getDiaCitas(){
	return objCitasMedicas->getDia();
}
string Historia::getDescripcionCitas(){
	return objCitasMedicas->getDescripcion();
}
		
string Historia::getNombreMedicamentos(){
	return objMedicamentos->getNombre();
}
int Historia::getDosisMedicamentos(){
	return objMedicamentos->getNumeroDosis();
}

