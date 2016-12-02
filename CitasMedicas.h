/*Emily Esmeralda Carvajal Camelo
 * nombre archivo: CitasMedicas.h
 * descripcion: citas medicas.h atributo de historia clinica, atributo de paciente.
 * fecha: 02/12/2016
 */
 
 #ifndef CITASMEDICAS_H
 #define CITASMEDICAS_H
 
 #include <string>

 using std::string;
 using namespace std;

 class CitasMedicas{
	 private:
		string dia;
		string descripcion;
	public:
		CitasMedicas(string dia, string descripcion);
		~CitasMedicas();
		
		//metodos
		string getDia();
		string getDescripcion();
};
#endif 

		
