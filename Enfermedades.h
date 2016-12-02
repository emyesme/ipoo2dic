#ifndef ENFERMEDADES_H
#define ENFERMEDADES_H

#include <string>

using std::string;

class Enfermedades{
	private:
		string nombre;
		string descripcion;
	
	public:
		Enfermedades(string nombre, string descripcion);
		~Enfermedades();
	
		string getNombre();
		string getDescripcion();
	
};


#endif

