// CLASES EN C++

#inlcude <iostream>
#inlcude <iostream>

using namespace std;

class persona{
	private: //atributo
	int edad;
	string nombre;
	public: // metodo
	persona(int,string); //constructor
	void leer();
	void correr();
	
};

// CONSTRUCTOR -> inicializa los atributos

persona::persona(int _edad,string _nombre){
	
	edad= _edad;
	nombre = _nombre;
	
}

void persona::leer(){
	cout<<"soy"<<nombre<<" y estpoy corriendo"<<endl;
}

int main(){
	
	persona p1=	persona(21,"javi");
	
	p1.leer();
	
	system("pause");
	return 0;
}
