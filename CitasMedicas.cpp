/*Emily Esmeralda Carvajal Camelo
 * nombre archivo: CitasMedicas.cpp
 * descripcion: citas medicas atributo de historia clinica, atributo de paciente.
 * fecha: 02/12/2016
 */
 
 #include "CitasMedicas.h"
 
 CitasMedicas::CitasMedicas(string dia, string descripcion){
	this->dia = dia;
	this->descripcion = descripcion;
 }
 
 CitasMedicas::~CitasMedicas(){
 
 }
 
 string CitasMedicas::getDia(){
	return dia;
 }
 
 string CitasMedicas::getDescripcion(){
	return descripcion;
 }
