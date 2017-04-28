#include<iostream>
#include<cmath>


using namespace std;
int fact(int n);
bool validacion(float coordenadas);


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
				
				float coordenadas[7];
				float distanciaAB, distanciaBC, distanciaCD, distanciaDA, distanciaDB;
				cout<<"Ingrese coordenada en X del punto a"<<endl;
				cin>>coordenadas[0];
				cout<< "Ingrese coordenadas en Y del punto a"<<endl;
				cin >>coordenadas[1];
				cout<< "Ingrese coordenadas en X del punto b"<<endl;
				cin>> coordenadas[2];
				cout<< "Ingrese coordenadas en Y del punto b"<<endl;
				cin >>coordenadas[3];
				cout<< "Ingrese coordenadas en X del punto c"<<endl;
                                cin >>coordenadas[4];
				cout<< "Ingrese coordenadas en Y del punto c"<<endl;
                                cin >>coordenadas[5];
			        cout<< "Ingrese coordenadas en X del punto d"<<endl;
                                cin >>coordenadas[6];
			        cout<< "Ingrese coordenadas en Y del punto d"<<endl;
                                cin >>coordenadas[7];
				
				if(coordenadas[0]==coordenadas[2]&&coordenadas[2]==coordenadas[4]&&coordenadas[4]==coordenadas[6]||coordenadas[1]==coordenadas[3]&&coordenadas[3]==coordenadas[5]&&coordenadas[5]==coordenadas[7]){				
					cout<<"Tiene las mismas coordenadas en algun punto del eje X o del eje Y. "<<endl;
					cout<<"Debe volver a revisar e introducir bien sus datos, Gracias por su comprension"<<endl;
					
					break;
					
				}
						
				// Distancia entre el punto a y b;
				
				distanciaAB = sqrt (pow(coordenadas[2]-coordenadas[0], 2)+ pow(coordenadas[3]-coordenadas[1],2));
				distanciaBC = sqrt (pow(coordenadas[4]-coordenadas[2], 2)+ pow(coordenadas[5]-coordenadas[3],2));
				distanciaCD = sqrt (pow(coordenadas[6]-coordenadas[4], 2)+ pow(coordenadas[7]-coordenadas[5],2));
				distanciaDA = sqrt (pow(coordenadas[0]-coordenadas[6], 2)+ pow(coordenadas[1]-coordenadas[7],2));
				distanciaDB = sqrt (pow(coordenadas[2]-coordenadas[6], 2)+ pow(coordenadas[3]-coordenadas[7],2));					
				cout<<"Los puntos del trapezoide son:"<<endl;
				cout<<"A"<<"("<<coordenadas[0]<<","<<coordenadas[1]<<")"<<endl;
				cout<<"B"<<"("<<coordenadas[2]<<","<<coordenadas[3]<<")"<<endl;
				cout<<"C"<<"("<<coordenadas[4]<<","<<coordenadas[5]<<")"<<endl;
				cout<<"D"<<"("<<coordenadas[6]<<","<<coordenadas[7]<<")"<<endl;
				
				cout<<"La medida de sus lados es:"<<endl;
				cout<<"Lado 1: "<<distanciaAB<<endl;
				cout<<"Lado 2: "<<distanciaBC<<endl;
				cout<<"Lado 3: "<<distanciaCD<<endl;
				cout<<"Lado 4: "<<distanciaDA<<endl;
				
				cout<<"Las medidas del triangulo 1: "<<endl;
				cout<<"Lado 1: "<<distanciaAB<<endl;
				cout<<"Lado 2: "<<distanciaDB<<endl;
				cout<<"Lado 3: "<<distanciaDA<<endl;
				
				cout<<"Las medidas del triangulo 2: "<<endl;
				cout<<"Lado 1: "<<distanciaDB<<endl;
				cout<<"Lado 2: "<<distanciaBC<<endl;
				cout<<"Lado 3: "<<distanciaCD<<endl;
				
				float Striangulo, Striangulo2, perimetro1, perimetro2;	
				
				// Triangulo 1 semiperimetro
				

				Striangulo=  (distanciaAB+distanciaDB+distanciaDA)/2;
				Striangulo2= (distanciaDB+distanciaBC+distanciaCD)/2;
				perimetro1=  (distanciaAB+distanciaDB+distanciaDA);				
				perimetro2=  (distanciaDB+distanciaDB+distanciaCD);
				
				cout<<"El semiperimetro del triangulo 1 es: "<<Striangulo<<endl;
				cout<<"El perimetro del triangulo 1 es: "<<perimetro1<<endl;
				cout<<"El semiperimetro del triangulo 2 es: "<<Striangulo2<<endl;
				cout<<"El perimetro del triangulo 2 es: "<<perimetro2<<endl;
				

				// alturas primer triangulo
				float Triangulo1H1, Triangulo1H2, Triangulo1H3, Triangulo2H1, Triangulo2H2, Triangulo2H3;
				
				Triangulo1H1= (2/distanciaAB) * sqrt(Striangulo*(Striangulo-distanciaAB)*(Striangulo-distanciaDB)*(Striangulo-distanciaDA));
				Triangulo1H2= (2/distanciaDB) * sqrt(Striangulo*(Striangulo-distanciaAB)*(Striangulo-distanciaDB)*(Striangulo-distanciaDA));
				Triangulo1H3= (2/distanciaDA) * sqrt(Striangulo*(Striangulo-distanciaAB)*(Striangulo-distanciaDB)*(Striangulo-distanciaDA));	
				
				cout<<"Las alturas del triangulo 1 miden:"<<endl;
				cout<<"Altura 1: "<<Triangulo1H1<<endl;
				cout<<"Altura 2: "<<Triangulo1H2<<endl;
				cout<<"Altura 3: "<<Triangulo1H3<<endl;

	     			Triangulo2H1= (2/distanciaDB) * sqrt(Striangulo2*(Striangulo2-distanciaDB)*(Striangulo2-distanciaBC)*(Striangulo2-distanciaCD));
	     			Triangulo2H2= (2/distanciaBC) * sqrt(Striangulo2*(Striangulo2-distanciaBC)*(Striangulo2-distanciaDB)*(Striangulo2-distanciaCD));                Triangulo2H3= (2/distanciaCD) * sqrt(Striangulo2*(Striangulo2-distanciaCD)*(Striangulo2-distanciaDB)*(Striangulo2-distanciaBC)); 				

				cout<<"Las alturas del triangulo 2 miden:"<<endl;											       cout<<"Altura 1: "<<Triangulo2H1<<endl;                               
			        cout<<"Altura 2: "<<Triangulo2H2<<endl;                                
				cout<<"Altura 3: "<<Triangulo2H3<<endl;						
				
				
				
				//AREA;

				
				float Area=0;
								
				Area=(distanciaDB*Triangulo1H2/2)+ (distanciaDB* Triangulo1H2/2); 
				cout<<"El area del trapezoide es: "<<Area<<endl;
				
				
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



					
