//clases C++

#inlcude <iostream>
#inlcude <stdlib.h>

using namespace std;
class Persona{//atributos de la persona
	
	private:
	int edad;
	string nombre;
	public:
		
		void leer();
		void correr();  
};

Persona::Persona(int _edad, string _nombre){
	
	edad= _edad;
	nombre = _nombre;
}

void:: Persona::leer(){
	cout<<"soy"<<nombre<<"y estoy leyendo"<<endl;
	
}
void Persona::correr(){
	cout<<"soy"<<nombre<<"y estoy corriendo y tengo"<<edad<<"años"<<endl;
}
int main(){
	Persona p1 = Persona(20,"javier");
	p1.leer();
	p1.correr();
	
	system("pause");
	return 0;
}



