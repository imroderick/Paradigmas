#include <iostream>
using namespace std;

class CuentaObjeto {
private:
	static int objetosCreados;
	static int objetosDestruidos;
public:
	CuentaObjeto();
	CuentaObjeto(CuentaObjeto &co);
	CuentaObjeto metodo(CuentaObjeto objeto);
	static void mostrarResumen();
	~CuentaObjeto();
};

CuentaObjeto::CuentaObjeto(){
    objetosCreados++;
}

CuentaObjeto::CuentaObjeto(CuentaObjeto &co){
    objetosCreados++;
}

CuentaObjeto CuentaObjeto::metodo(CuentaObjeto objeto){
    return objeto;
}

void CuentaObjeto::mostrarResumen(){
    cout << "Objetos creados: " << objetosCreados << endl; 
    cout << "Objetos destruidos: " << objetosDestruidos << endl; 
}

CuentaObjeto::~CuentaObjeto(){
    objetosDestruidos++;    
}

int CuentaObjeto::objetosCreados = 0;
int CuentaObjeto::objetosDestruidos = 0;