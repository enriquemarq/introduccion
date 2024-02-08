int intEdad;
int intCantidadProductos;


double dblAltura;
float fltPrecio;


char chInicial;
char chTipoSangre;


bool boolActivo;
bool boolValidacion;


std::string strNombre;
std::string strMensaje;


int *ptrEdad;
double *ptrAltura;


int arrEnteros[10];
char arrCaracteres[20];


enum TipoVehiculo { Auto, Moto, Camion };
TipoVehiculo tipoTransporte;


struct Persona {
    std::string nombre;
    int edad;
};
Persona persona1;


class Animal {
public:
    std::string nombre;
    int edad;
};
Animal perro;