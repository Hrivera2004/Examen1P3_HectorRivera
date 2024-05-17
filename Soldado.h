#include <string>
using namespace std;
class Soldado
{
	private:
		int tipo_soldado;
		string Nombre_soldado;
		int danio;
		int velocidad;
		double fuerza;
		double salud = 100;
		string ataque1;
		string ataque2;
	public:
		bool generado = false;
		Soldado();
		~Soldado();
		int atacar();
		void generarSoldadoAleatorio();
		void Listar();
		//getters
		string gettipo();
		int getVelocidad();
		int getdanio();
		double getfuerza();
		double getsalud();
		string getataque1();
		string getataque2();
		//setters


};

