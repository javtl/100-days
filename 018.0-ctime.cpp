#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
int main(int argc, char){
    time_t now = time(0);
    vector<string> dia_semana;
    dia_semana.push_back("domingo");
    dia_semana.push_back("lunes");
    dia_semana.push_back("martes");
    dia_semana.push_back("miercoles");
    dia_semana.push_back("jueves");
    dia_semana.push_back("viernes");
    dia_semana.push_back("sabado");

    vector<string> mes;
    mes.push_back("enero");
    mes.push_back("febrero");
    mes.push_back("marzo");
    mes.push_back("abril");
    mes.push_back("mayo");
    mes.push_back("junio");
    mes.push_back("julio");
    mes.push_back("agosto");
    mes.push_back("septiembre");
    mes.push_back("octubre");
    mes.push_back("noviembre");
    mes.push_back("diciembre");

    int year = 1900 + time->tm_year;

    // objeto de una estructura tm con fecha/hora local
   tm * time =localtime(&now);
    /*
        cout<<"dia de la semana: "<<dia_semana[time->tm_wday]<<endl;

        cout<<"mes del año"<< mes[time->tm_mon]<<endl;
    */

            cout<<"hoy"<<dia_semana[time->tm_wday]<<" , ";
            cout<<time->tm_mday<<" de "<< mes[time->tm_mon]<<" del "<<year<<endl;
                
          system("pause");
    return 0;
}