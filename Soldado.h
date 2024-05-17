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
		Soldado();
		~Soldado();
		int atacar();
		void generarSoldadoAleatorio();
		int getVelocidad();
		int getdanio();
		double getfuerza();

};

