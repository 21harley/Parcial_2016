#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*
	1. Solicitar al usuario un numero entero positivo P menor o igual que 10^4. 
	Si el numero ingresado no es correcto mostrar un mensaje de error y solicitar nuevamente el numero, 
	hasta que el usuario introduzca un numero valido.                    (5 ptos.)
	------------------------------------------------------------------------------------------------------------
	2. Con el valor P dado por el usuario en el paso anterior, calcular la suma de:  
    P^2 – (P–1)^2 + (P–2)^2 – (P–3)^2 + (P–4)^2 – (P–5)^2 +… – (P – n-1)^2 + (P – n)^2 
    El ultimo termino de la suma es igual a 1 o -1       
    Por ejemplo, si el valor de P es igual a 5 se obtiene: 
    25 – 16 + 9 – 4 + 1 = 15 
   Si el valor de P es igual a 6: 
    36 – 25 + 16 – 9 + 4 – 1 = 21             (10 ptos.) 
	--------------------------------------------------------------------------------------------------------------
	3. Determinar si el numero P es un numero invicto.
	Un numero es invicto cuando al borrar los digitos que no son primos,
	nos queda un numero que si lo es.
	Por ejemplo: 9362 se obtiene 32 que no es primo (no es un numero invicto) 
	1783 se obtiene 73 que si es primo (por lo tanto si es un numero invicto)                  (30 ptos.)
	---------------------------------------------------------------------------------------------------------------
	4. Un numero es “feliz” si al sumar el cuadrado de cada uno de los digitos que lo conforma y repetir este proceso un numero finito de veces la suma converge a 1.
   Para algunos numeros, la cantidad de iteraciones necesarias para que la suma sea 1 puede ser mayor que para otros y a esa cantidad de iteraciones se le conoce como la “distancia de la felicidad”. 
   Por ejemplo, para el caso del numero 1 su “distancia de la felicidad” es 0 ya que 1^2 = 1.   
   No asi para el 23 cuya “distancia de la felicidad” es 3, como se muestra a continuacion: 
   Numero      Proceso    Suma     Iteracion 
    23         22 + 32     13       1
    13         12 + 32     10       2
    10         12 + 02      1       3   
   Distancia de la felicidad  
   Un numero se dice que es “no feliz” cuando está infinitamente lejos de llegar a la felicidad, es decir, se queda atrapado en un ciclo y su suma nunca llega a 1.
   Se puede demostrar que todo numero “no feliz” se queda atrapado en el ciclo 4, 16, 37, 58, 89, 145, 42, 20, 4, 16, 37… y asi para siempre sin llegar al 1.
   Por ejemplo, este es el caso del numero 11, el numero 20 y el numero 89 como se observa en las siguientes secuencias:   
   1^2 + 1^2 = 2^2  =4^2 = 1^2 + 6^2 = 3^2 + 7^2 = 5^2 + 8^2 = 8^2 + 9^2 = 1^2  + 4^2 + 5^2 = 4^2 + 2^2 = 2^2 + 0^2 = 4^2 = . . .  
      11        2     4       16          37          58           89         145                 42          20       4     16...     
   2^2 + 0^2 = 4^2 = 1^2 + 6^2 = 3^2 + 7^2 = 5^2 + 8^2 = 8^2 + 9^2 = 1^2  + 4^2 + 5^2 = 4^2 + 2^2 = 2^2 + 0^2 = 4^2 = . . .    
       20      4         16         37          58          89             145               42        20        4    16...   
   8^2 + 9^2 = 1^2  + 4^2 + 5^2 = 4^2 + 2^2 = 2^2 + 0^2 = 4^2 = 1^2 + 6^2 = 3^2 + 7^2 = 5^2 + 8^2 = 8^2 + 9^2 = 1^2  + 4^2 + 5^2 = 4^2 + 2^2 = 2^2 + 0^2 = 4^2 = . . . 
       89            145             42          20        4        16         37          58           89          145               42           20        4   16 ... 
   Se requiere determinar cuantos numeros no felices hay entre 1 y P.  (30 ptos.) 
   ------------------------------------------------------------------------------------------------------
   5. El usuario podra realizar las operaciones que requiera, sin salir del programa.         (5 ptos.) 
   ------------------------------------------------------------------------------------------------------
	
	*/
	//resp1
	int i=0,numero=0,ban=0;
	printf("Hola ingrese numero positivo menor o igual 10^4 \n");
	do{
		scanf("%i",&numero);
		if(numero>=10000 || numero<=0){
			printf("El numero ingresado no esta en el intervalo,vuelva a ingresar un numero positivo menor o igual 104 \n");
			ban=1;
		}else{
			ban=0;
		}
	}while(ban!=0);
	//-------------------------------------------------------------------------------------------------------------------
	//resp2 
	int total=0,cot=0;
	for(i=0;i<numero+1;i++){
		if(cot%2==0){
			total=total+pow((numero-cot),2);cot++;
		}else{
			total=total-pow((numero-cot),2);cot++;
		}
	}
	printf("Resltado del valor p es %i \n",total);cot=2;
	//----------------------------------------------------------------------------------------------------------------------
	//resp3
    int aux=0,aux1=10;
    aux=numero%10;
	aux1=numero%1000;aux1/=100;  
	aux+=aux1*10;
	if(aux%2==0||aux%3==0||aux%5==0||aux%7==0){
		printf("no es un numero invicto %i \n",aux);
	}else{
		printf("si es un numero invicto %i \n",aux);
	}
	//------------------------------------------------------------------------------------------------------------------------
	//resp4
	
	return 0;
}
