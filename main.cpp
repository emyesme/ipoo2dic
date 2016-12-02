/*main.cpp 
 *ingresar los datos a la historia y
 *dar nombre del archivo que los contendra */
 
 #include "Paciente.h"
 #include <fstream>
 #include <iostream>
 
 int main(int argc, char *argv[]){
	 int cedula, edad,dosisM;
	 string nombre, sexo,  nombreE, descripE, diaCM, descripCM, nombreM, archivo;
	 cout << "Ingrese los datos del paciente:\n Ingrese la cedula\t";
	 cin >> cedula;
	 cout << "Ingrese el nombre\t";
	 cin >> nombre;
	 cout << "Ingrese la edad\t";
	 cin >> edad;
	 cout << "Ingrese el sexo";
	 cin >> sexo;
	 cout << "Datos de la Historia Clinica\n Ingrese enfermedad diagnosticada\t";
	 cin >> nombreE;
	 cout << "Ingrese descripcion de la enfermedad\t";
	 cin >> descripE;
	 cout << "Datos de Cita Medica\n Ingrese el dia\t";
	 cin >> diaCM;
	 cout << "Ingrese descripcion de la cita medica\t";
	 cin >> descripCM;
	 cout << "Datos de los Medicamentos\n Ingrese nombre\t";
	 cin >> nombreM;
	 cout << "Ingrese dosis de medicamento\t";
	 cin >> dosisM;
	 Paciente *objPaciente =  new Paciente(cedula, nombre,sexo, edad, nombreE, descripE, diaCM, descripCM, nombreM, dosisM);
	 
	 cout << "Ingrese el nombre del archivo para guardar los datos\t";
	 ofstream archivo(archivo);
	 archivo << objPaciente->getCedula() << "\t";
	 archivo << objPaciente->getNombre() << "\t";
	 archivo << objPaciente->getSexo() << "\t";
	 archivo << objPaciente->getEdad() << "\t";
	 
	 archivo.close();
	 
 }
