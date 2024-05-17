#include <string>
using namespace std;
class Soldado
{
	private:
		int tipo_soldado=0;
		string Nombre_soldado="";
		int danio=0;
		int velocidad=0;
		double fuerza=0;
		double salud = 100;
		string ataque1="";
		string ataque2="";
	public:
		bool generado = false;
		Soldado();
		~Soldado();
		void atacar(Soldado* Soldado, int* ganador);
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
		//mutador
		double recibirAtaque(double ataque);

};

