#include<iostream>
#include<cmath>


using namespace std;
int fact(int n);

int main(){
        char resp ='s';
        int option;
        while(resp=='s'||resp=='S'){
                cout <<"Menu"<<endl;
                cout <<"1-Ejercicio 1"<<endl;
                cout <<"2-Ejercicio 2"<<endl;
                cin>> option;
                switch (option){
                        case 1:{
				//Primer Ejercicio;
				
                       		int numero;
				int n = 0;
				float euler=0;
				
				cout << "Ingrese numero para calcular su factorial: "<<endl;
				cin >> numero;
                                
				for( n; n<=10;n++){
					
					if (n==0){
						euler+=1/1;	
						
					} else{
						euler+= pow(numero,n)/fact(n);
							
					}					
				}

                    		cout<<"Euler es: "<<euler<<endl; 
                        break;
                        }

                        case 2:{
                               //Segundo ejercicio

                        break;

			  }
                }
                cout<<"Desea continuar? S o N"<<endl;
                cin >> resp;

        }

        cout<<"Bye";



return 0;
}

int fact(int n){

 int fact=1;
    for(int i=2; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;

}



					
