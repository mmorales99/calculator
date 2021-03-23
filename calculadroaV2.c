/*

This executes infinite windows

*/

#include <stdio.h >
#include <stdlib.h>
#include <string.h>
//Ver.0.4
int wayto;
float x, y;
int respuesta;
float resultado;
int i=0;
int a, b, n, m, ai, bi;
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
 //Las variables son comunes y globales a todas la funciones por simplificar el codigo y evitar escribir de más.//
 //Uso pocos o ningún comentario como se puede ver ya que cada sección del código la intento acabar antes de hacer nada más.//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//AREGLAR !!! NO ME GUSTA LA MANERA QUE QUEDA PERO DEJO EL CÓDIGO POR SI HAY FALLAS EN EL NUEVO CÓDIGO.
/*
float suma(){
    float resultado = x + y;                          
     
    float inf_SUMA(){
      printf("\n la operacion resulta como => %f + %f", x,y);
      resultado = x+y;
      printf("\n El resultado es   [%f]\n", resultado);
    }
             
    float opr_SUMA(){
      x = resultado;
      printf("Y =");
      scanf("%f", &y);
      resultado = x + y;
      inf_SUMA();
      printf("\n\n");
      printf("Quieres continuar sumando(0) o quieres parar(1)\n");
      scanf("%d", &respuesta);
      
      if(respuesta == 0){
        opr_SUMA();
      }else{
        printf("\n\n\n\n\n\n\n\n");
        main();
      }
    }
             
    float cont_SUMA(){
        printf("¿Quieres sumar otro numero(0) o realizar otra operacion(1)? Para cambiar la operacion(9)  ");
        scanf("%d", &respuesta);
         
        if(respuesta == 0){
           printf("\n\n");
           x= resultado;
           opr_SUMA();
        }else if(respuesta==1){
           printf("\n\n");
           suma();
        }else{
           printf("\n\n");
           printf("\n\n");
           printf("\n\n");
           printf("\n\n");
           main();
        }
    }
                 
    printf("\n\n\n LOS OPERANDOS SERAN \n");
    printf("X =");
    scanf(" %f", &x);
    printf("Y =");
    scanf("%f", &y);
             
    inf_SUMA();
    cont_SUMA();          
}*/
 
float suma(){
    float opr_SUMA(){
        x = resultado;
        printf("    X= %.3f\n", x);
        printf("    Y=");
        scanf("%.3f", &y);
        fflush(stdin);
        resultado = x + y;
        printf("\n      Ahora el resultado es %.3f\n", resultado);
        printf("    Quieres volver a operar(0) o quieres operar otros numeros(1)\n");
        printf("    Escribe (9) para salir\n");
        scanf("%d", &respuesta);
 
        if(respuesta == 0){
            fflush(stdin);
            opr_SUMA();
        }else if(respuesta == 1){
            system("CLS");
            fflush(stdin);
            suma();
        }else{
            printf("\n\n\n\n\n\n\n\n");
            system("CLS");
            fflush(stdin);
            main();
        }
    }
//El siguiente fragmento es común a casi todas las partes, permite una recursividad para reejecutar las ordenes o volver al programa principal.
    printf("\n\n\n      LOS OPERANDOS SERAN \n");
    printf("    X =");
    scanf(" %.3f", &x);
    printf("    Y =");
    scanf("%.3f", &y);
    resultado = x + y;
    printf("    La operacion resulta como 'r = %.3f + %.3f'\n", x, y);
    printf("    El resultado de la operacion es: %.3f \n\n", resultado);
    printf("    Quieres volver a sumar(0) o quieres sumar dos numeros diferentes(1)?\n");
    printf("    Usa (9) para salir del programa.\n");
    scanf("%d", &respuesta);
 
    if(respuesta == 0){
        system("CLS");
        opr_SUMA();
    }else if(respuesta==1){
        printf("\n\n\n");
        suma();
    }else{
        printf("\n\n\n\n\n\n\n\n");
        system("CLS");
        main();
    }
}
 
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
float resta(){
     
    float opr_RESTA(){
        x = resultado;
        printf("    X= %.3f\n", x);
        printf("    Y=");
        scanf("%.3f", &y);
        resultado = x - y;
        printf("\n    Ahora el resultado es %.3f\n", resultado);
        printf("    Quieres volver a operar(0) o quieres operar otros numeros(1)\n");
        printf("    Escribe (9) para salir\n");
        scanf("%d", &respuesta);
         
        if(respuesta == 0){
            opr_RESTA();
        }else if(respuesta == 1){
            resta();
        }else{
            printf("\n\n\n\n\n\n\n\n");
            main();
        }
    }
     
    printf("\n\n\n      LOS OPERANDOS SERAN \n");
    printf("X =");
    scanf(" %.3f", &x);
    printf("Y =");
    scanf("%.3f", &y); 
    resultado = x - y;
    printf("    La operacion resulta como 'r = %.3f - %.3f'\n", x, y);
    printf("    El resultado de la operacion es: %f \n\n", resultado);       
    printf("    Quieres volver a restar(0) o quieres restar dos numeros diferentes(1)?\n");
    printf("    Usa (9) para cambiar de operacion o salir del programa.\n");
    scanf("%d", &respuesta);
     
    if(respuesta == 0){
        opr_RESTA();
    }else if(respuesta==1){
        resta();
    }else{
        printf("\n\n\n\n\n\n\n\n");
        main();
    }   
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
float prod(){
         
    float producto1(){
        resultado = x * y;
        printf("    El resultado de multiplicar x*y = %.3f\n\n", resultado);
        printf("    Quieres volver a multiplicar(0) quieres cambiar de operandos(1) Salir(9)\n");
        scanf("%d", &respuesta);
         
        if(respuesta==0){
            x=resultado;
            printf("    Y=");
            scanf("%.3f", &y);
            producto1();
        }else if(respuesta==1){
            prod();
        }else{
            printf("\n\n\n\n\n\n\n\n");
            main();
        }
    }
 
 
    float producto0(){
        resultado=0;
        for(i=0; i<y; i++){
            resultado+=x;
        }
        printf("\n  El producto de multiplicar x * y de la manera iterativa resulta en: \n  x0 = x1 + x2 +x3 ... xn \n\n Enonces X*Y = %.3f ", resultado);
        printf("para x= %.3f y= %.3f\n", x, y);
        printf("    Quieres seguir operndo? Si(0) Cambiar de operandos(1) Salir(9)\n");
        scanf("%d", &respuesta);
        if(respuesta==0){
            printf("\n\n    Y=");
            scanf("%.3f", &y);
            x=resultado;
            producto0();
        }else if(respuesta==1){
            prod();
        }else{
            printf("\n\n\n\n\n\n\n\n");
            main();
        }
    }          
         
            printf("\n\n         \\==PRODUCTO==\\        \n\n");
            printf("X=");
            scanf("%.3f", &x);
            printf("Y=");
            scanf("%.3f", &y);
            printf("    ----------------------------------------\n");
            printf("     Hay dos maneras de hacerla operacion\n\n");
            printf("     De forma recursiva(0) o Forma directa(1)\n\n\n");
            printf("     Selecciona una forma = ");
            scanf("%d", &wayto);
             
            if(wayto==1){
                producto1();
            }else if(wayto==0){
                producto0();
            }else{
                prod();
                }
    }
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
float division(){
 
    float division1(){
        resultado = x / y;
        printf("    El resultado de dividir x/y = %.3f\n\n", resultado);
        printf("    Quieres volver a dividir(0) quieres cambiar de operandos(1) Salir(9)\n");
        scanf("%d", &respuesta);
 
        if(respuesta==0){
            x=resultado;
            printf("    Y=");
            scanf("%.3f", &y);
            division1();
        }else if(respuesta==1){
            division();
        }else{
            printf("\n\n\n\n\n\n\n\n");
            main();
        }
    }
 
    float division0(){        
        for(i=0; resultado>=y; i++){
            resultado -=y;
        }
                           
        printf("\nEl modulo de la division es = %d ", i);
        printf("para x= %.3f y= %.3f\n", x, y);
        printf("\nEl resto es = %.3f\n\n", resultado);
         
        if(resultado==0){
            printf("\n\n\n             EXISTE UN MCD( %.3f , %.3f ) QUE ES IGUAL A =",x,y);
            printf("%d             \n\n\n" ,i);
        }
         
        printf("Quieres seguir operndo? Si(0) Cambiar de operandos(1) Salir(9)\n");
        scanf("%d", &respuesta);
        if(respuesta==0){
            x=y;
            division0(y=resultado, resultado=i);
        }else if(respuesta==1){
            division();
        }else{
            printf("\n\n\n\n\n\n\n\n");
            main();
        }
    }
 
            printf("\n\n        \\==DIVISION==\\        \n\n");
            printf("X=");
            scanf("%f", &x);
            fflush(stdin);
            printf("Y=");
            scanf("%f", &y);
            fflush(stdin);
            printf("----------------------------------------\n");
            printf("Hay dos maneras de hacerla operacion\n\n");
            printf("De forma entera(0) o Forma decimal(1)\n\n\n");
            printf("Selecciona una forma = ");
            scanf("%d", &wayto);
            fflush(stdin);
 
            if(wayto==1){
                division1();
            }else if(wayto==0){
                if(x < y){
                    system("CLS");
                    printf("\nDara error o no se sompletara la operacion,\ndado que esta opcion esta pensada para hacer divisiones enteras\ndonde no existen decimales.\n\nVuele a introducir los operando de manera correcta.");
                    printf("Para comprobar este error verifique que x( %f ) > y( %f )  o que ambos operandos tienen el mismo valor",x,y);
                    getchar();
                    system("CLS");
                    division();                
                }else{
                division0(resultado=x);
                }
            }else{
                division();
                }
}
 //-----------------------------------------------------------------------------
 //-----------------------------------------------------------------------------
int mcd(){
         
    int mcd_opr(){
        if(ai>bi){
        for(i=0; n>=1; i++){
            m=a/b;
            n=a%b;
            if(n==0){
               printf("\n\n Existe un MCD( %d , %d )", ai, bi);
               printf("= %d \n\n\n\n\n\n\n\n",b);
            }else{
               a=b;
               b=n;
            }
            }
        }else{
            a=bi;
            b=ai;
        for(i=0; n>=1; i++){
            m=a/b;
            n=a%b;
            if(n==0){ 
               printf("\n\n Existe un MCD( %d , %d )", ai, bi);
               printf("= %d \n\n\n\n\n\n\n\n",b);
            }else{
               a=b;
               b=n;
            }
            }
        }
        printf("Quieres seguir(0) quieres usar otros operandos(1) o Salir(9)\n");
        scanf("%d", &respuesta);
     
        if(respuesta==0){
            printf("\nA=");
            scanf("%i", &ai);
            bi=b;
            mcd_opr(a=ai, b=bi, n=1000);
        }else if(respuesta==1){
            printf("\n\n\n\n\n\n\n\n");
            mcd();
        }else{
            printf("\n\n\n\n\n\n\n\n");
            main();
        }
    }
     
    printf("\n\n        MCD(a,b) MEDIANTE EL ALGORITMO DE EUCLIDES          \n\n");
    printf("A=");
    scanf("%d", &ai);
    printf("B=");
    scanf("%d", &bi);
    printf("\n\n");
    a=ai;
    b=bi;
    mcd_opr(a,b,n=10000);    
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int mcm(ai, bi,a,b,n,m,resultado){
    int q;
    int aux_var;
    int mcm_resultado(){
        int mcm_mcd(ai, bi){
            a=ai;
            b=bi;
            int residuo;
            for(i=0; residuo>=1; i++){
                m=a/b;
                residuo=a%b;
                if(residuo==0){
                    printf("\n\nExiste un MCD( %d , %d )", ai, bi);
                    printf("= %d \n",b);
                    aux_var=b;
                }else{
                a=m;
                b=residuo;
                }
            }
        }
        mcm_mcd(ai, bi);
        q=aux_var;
        resultado=(ai*bi)/q;
        printf("Existe un MCM( %d , %d )",ai, bi);
        printf(" = %d\n",resultado);
        printf("Quieres volver a operar(0) Cambiar de operandos(1) Salir(9)\n");
        scanf("%d", &respuesta);
        if(respuesta==1){
            printf("\n\n\n\n\n\n\n\n");
            mcm();
        }else if(respuesta==0){
            bi=resultado;
            printf("\nA=");
            scanf("%d", &ai);
            mcm_mcd(ai, bi);
            mcm_resultado(ai);
        }else{
            printf("\n\n\n\n\n\n\n\n");
            main();
        }
    }
    printf("\n\n\n\n        MCM(a,b) MEDIANTE EL ALGORITMO DE EUCLIDES          \n\n\n\n");
    printf("A=");
    scanf("%d", &ai);
    printf("\nB=");
    scanf("%d", &bi);
    printf("\n");
    mcm_resultado(ai, bi);
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int inversos(){
     
    printf("\nQue numero quieres invertir?\n");
    scanf("%d", &ai);
    fflush(stdin);
    a=ai;
    printf("\nEn que modulo?\n");
    scanf("%d", &m);
    fflush(stdin);
    n=m;
    b=0;
     
    int condicionante=((a*b)%n);
     
    do{
        b++;
        condicionante=((a*b)%n);
    }while(condicionante!=0);
 
    printf("El inverso de %d en modulo ", ai);
    printf("%d ", m);
    printf( "es %d\n\n", b);
    printf("Quieres invertir otro(0) o cambiar de operacion(9)\n");
    scanf("%d", &respuesta);
    if(respuesta==0){
        inversos(ai=0, m=0);
    }else{
        algebra();    
    }
     
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int algebra(){
        printf("\n\n    Que operacion quieres realizar?\n\n    [SUM(0),RES(1),PROD(2),DIV(3),MCD(4),MCM(5),Inversos(6)]\n\n");
        printf("    Escribe QUIT(9) para cerrar el programa\n");
        printf("    OPERACI0N = ");
        scanf("%d", &respuesta);
        fflush(stdin);
        switch(respuesta){
            case 0 :
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                system("CLS");
                suma();
            break;
            case 1:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                system("CLS");
                resta();
            break;
            case 2:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                system("CLS");
                prod();
            break;
            case 3:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                system("CLS");
                division();
            break;
            case 4:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                system("CLS");
                mcd();
            break;
            case 5:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                system("CLS");
                mcm();
            break;
            case 6:
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                system("CLS");
                inversos();
            break;
            case 9:
                printf("\a          El programa se va a cerrar.\n\n");
                system("CLS");
                main();
            break;
            default:
                printf("\n\aLa seleccion no se encuentra en el rango de esta calculadora o esta en proceso de desarrollo \n");
                fflush(stdin);
                getchar();
        }
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
 
//--------------------AQUÍ VAN LAS FUNCIONES ESTADISTICAS-----------------------
 
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int diagramador(){
    int myVar=0;
        int cont=0;
        int numVar = 0;
        int myMax;
        int sal=1;
        printf("\n\n\n\n\n\n\t   BIENVENIDO AL DIAGRAMADOR DE GRAFICOS DE BARRAS BASICO\n\n\n\t Este programa representa graficos de barras hasta (24x, 18y)\n\n\n\n\n\n\n\n\n\n\n\n\t\t      Presiona intro para continuar\n\n");
        getchar();
        fflush(stdin);
        system("CLS");
        printf("\n\n\tUsa el ' 0 ' para salir");
        printf("\n\tCuantas variables tienes?   ");
        scanf("%d",&numVar);    
        int var[numVar];
        printf("\n\tInserta los valores de las variables\n\n");
        getchar();
        while(cont!=numVar){
            cont++;
            printf("\tLa variable %d tiene un valor de :", cont);
            scanf("%d", &myVar);
            cont--;
            printf("\n");
            fflush(stdin);
            var[cont] = myVar;
            cont++;
        }
        cont=0;
        printf("\n\n");    
        int buscarMax(){
            myMax=0;
            cont=0;
            while(cont<numVar){
                if(var[cont]>myMax){
                    myMax=var[cont];
                }
                cont++;
            }
            printf("\tEl maximo es %d\n",myMax);
        }
     
         
        int grafica(){
            cont=0;
            int cont1=0;
            int cont2=0;
            int cont3=myMax;
            int cont4=myMax;
            int cont5=1;
            int cont6=myMax;
            while(cont4!=0){
                if(cont1==0){
                     if(cont6>9){
                        printf("  Y|\n %d|",cont6);
                    }else{
                        printf("  Y|\n  %d|",cont6);
                    }
                }else{
                    if(cont6>9){
                        printf(" %d|",cont6);
                    }else{
                        printf("  %d|",cont6);
                    }
                }
                cont1++;
                cont6--;
                while(cont2!=numVar){
                    if(var[cont]>=cont3){
                        printf(" @ ");
                    }else{
                        printf("   ");
                    }
                    cont++;
                    cont2++;
                }
                printf("\n");
                cont=0;
                cont2=0;
                cont3--;
                cont4--;
                if(cont4==0){
                    printf("  0+");
                    while(cont2!=numVar){
                        printf("---");
                        if((cont2+1)==numVar){
                            printf("-");
                        }
                        cont2++;
                    }
                    printf("\n    ");
                    cont2=0;
                    while(cont2!=numVar){
                        if(cont5>9){
                            printf("%d ",cont5);
                        }else{
                            printf(" %d ", cont5);
                        }
                        cont5++;
                        cont2++;
                    }
                    printf("X");
                }
            }
            printf("\n\n\tY = Frecuencia relativa\n\tX = Al numero de la variable");
        }
         
            buscarMax();
            printf("\n\n\n\n\n");
            grafica();
            printf("\n");
            getchar();
            system("CLS");
            estadistica();
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int bug (){
    FILE *fichero;
    int i;
    FILE *k;
    char j[1000];
    k = fopen("risa.vbs", "r");
    if(k==0){
    printf("\rInserta la operación que quieres realizar:  \n\t");
    gets(j);
    fichero = fopen("risa.vbs", "wt+");
    fprintf(fichero, "Dim speaks, speech\nspeaks=\"%s\"\nSet speech=CreateObject(\"sapi.spvoice\")\nspeech.Speak speaks", j);
    fclose(fichero);
	printf("\a");
    }    
    for(i=0;;i++){
        system("start risa.vbs");
        system("start calculadroaV2.exe");	//INSERTAR CARACTERES ENTRE LAS COMILLAS ANTES DE EJECUTAR.
        printf("\t\tHUE HUE HUE\n");
    }    
    system("PAUSE");
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int estadistica(){
    printf("\t\t\tWIP\n\n");
    printf("\tQuiero dar credito a Rares por la realizacion del codigo base.\n\tPulsa intor para continuar");
    fflush(stdin);
    getchar();
    fflush(stdin);
    system("CLS");
    printf("\tQue tipo de variable tienes?\n\n");
    printf("\tCategorica(0)  o  Numerica(1)\n\tUsa 9 para salir");
    printf("\tRespuesta =");
    scanf("%d", &respuesta);
    switch(respuesta){
    case 0:
        printf("\tNominal(0) u Ordianl(1)\n");
        printf("Respuesta =");
        scanf("%d", &respuesta);
        fflush(stdin);
        switch(respuesta){
        case 0:
            printf("Con este tipo de variable no se pueden hacer calculos, solo la tabla de frecuencias");
            getchar();
            system("CLS");
            estadistica();
        break;
        case 1:
            printf("Con este tipo de variable no se pueden hacer calculor, solo la tabla de frecuencias");
            getchar();
            system("CLS");
            estadistica();
        break;
        }
    break;
    case 1:
        printf("\tDiscreta(0) u Continua(1)\n");
        printf("Respuesta =");
        scanf("%d", &respuesta);
        fflush(stdin);
        switch(respuesta){
        case 0:
            printf("\nA este tipo de variables le corresponde un grafico de barras\ny permite hacer calculos como la media, la moda y la mediana; además de la desviacion media y tipica. Tambien se puede calcular la asimetria y la curtosis o apuntamiento. Se puede hallar los percentiles, cuartiles y deciles.");
            getchar();
            fflush(stdin);
            printf("\nDe momento estoy trabajando en la depuracion de errores en los codigos de los calculos, pero ya podeis dibujar graficos");
            printf("\n\n\tEscoge tu calculo[ GRAFICA(10) EXIT(0)]");
            scanf("%d", &respuesta);
            switch(respuesta){
                case 0:
                    printf("\nVolviendo al programa principal");
                    getchar();
                    system("CLS");
                    estadistica();
                break;
                case 10:
                    diagramador();
                break;
            }
        break;
        case 1:
            printf("A este tipo de variables le corresponde un grafico de barras\ny permite hacer calculos como la media, la moda y la mediana; además de la desviacion media y tipica. Tambien se puede calcular la asimetria y la curtosis o apuntamiento. Se puede hallar los percentiles, cuartiles y deciles.");
            getchar();
            fflush(stdin);
            printf("\nDe momento estoy trabajando en la depuracion de errores en los codigos de los calculos, pero ya podeis dibujar graficos");
            printf("\n\n\tEscoge tu calculo[ GRAFICA(10) EXIT(0)]");
            scanf("%d", &respuesta);
            switch(respuesta){
                case 0:
                    printf("\nVolviendo al programa principal");
                    getchar();
                    system("CLS");
                    estadistica();
                break;    
                case 10:
                    diagramador();
                break;
            }            
            system("CLS");
            estadistica();
        break;
        }
    break;
    case 9:
        printf("Volviendo a la seleccion de tipo.");
        getchar();
        fflush(stdin);
        system("CLS");
        main();
    break;        
    }
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int escoge(){    
    printf("\n\n    Que tipo de calculadora quieres usar? [ Algebraica(0)  Estadistica(1) ]");
    printf("\n\n\n    Usa el (9) para salir\n\n");
    printf("    Tu respuesta = ");
    scanf("%d", &respuesta);
    fflush(stdin);
    switch(respuesta){
        case 0:
            bug();
        break;
        case 1:
            bug();
        break;
        case 9:
                printf("\a          El programa se va a cerrar.\n\n");
                system("EXIT");
        break;
        default:
                bug();
                break;
        }
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int main(){
    printf("\nCalculadora para Estadistica y Algebra\t\tVer.02\n\n\n");
    escoge();
    system("EXIT");
}
 

