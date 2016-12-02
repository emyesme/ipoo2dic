#ifndef MEDICAMENTOS_H
#define MEDICAMENTOS_H

#include <string>

using std::string;

class Medicamentos{
	private:
		string nombre;
		int numeroDosis;
	
	public:
		Medicamentos(string nombre, int numeroDosis);
		~Medicamentos();
	
		string getNombre();
		int getNumeroDosis();
	
};


#endif
