#ifndef HISTORIA_H
#define HISTORIA_H

#include "Medicamentos.h"
#include "Enfermedades.h"
#include "CitasMedicas.h"

#include <string>

using std::string;

class Historia{
	private:
		Enfermedades * objEnfermedades;
		CitasMedicas * objCitasMedicas;
		Medicamentos * objMedicamentos;
	
	public:
		Historia(string nombreEnfermedades, string descripcionEnfermedades,
				string diaCitas, string descripcionCitas,
				string nombreMedicamentos, int numeroDosisMedicamentos);
		~Historia();
		
		string getNombreEnfermedades();
		string getDescripcionEnfermedades();
		
		string getDiaCitas();
		string getDescripcionCitas();
		
		string getNombreMedicamentos();
		int getDosisMedicamentos();

};

#endif
