
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <dos.h>
#include <unistd.h>



int main()
{
    float a,b,c;
	double n,n2,n3,n4,risultato=0,x1,x2,d;
    int selbase,selavanz,selval,selgeo,tipo,esci=0;
    
    	ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
	
    
    system("cls");
	printf("Sviluppato da Tommaso Patriarca");
    printf("\n-------------------------------");
    printf("\n\n .d8888b.        d8888 888      .d8888b.   .d88888b.  888             d8888 88888888888 8888888b.  8888888 .d8888b.  8888888888");
    printf("\nd88P  Y88b      d88888 888     d88P  Y88b d88P   Y88b 888            d88888     888     888   Y88b   888  d88P  Y88b 888     ");
    printf("\n888    888     d88P888 888     888    888 888     888 888           d88P888     888     888    888   888  888    888 888");
    printf("\n888           d88P 888 888     888        888     888 888          d88P 888     888     888   d88P   888  888        8888888");
    printf("\n888          d88P  888 888     888        888     888 888         d88P  888     888     8888888P     888  888        888");
    printf("\n888    888  d88P   888 888     888    888 888     888 888        d88P   888     888     888 T88b     888  888    888 888");
    printf("\nY88b  d88P d8888888888 888     Y88b  d88P Y88b. .d88P 888       d8888888888     888     888  T88b    888  Y88b  d88P 888        ");
    printf("\n  Y8888P  d88P     888 88888888  Y8888P     Y88888P   88888888 d88P     888     888     888   T88b 8888888  Y8888P   8888888888");

    printf("\n\nMenu':");
    printf("\n|1| Calcolatrice base");
    printf("\n|2| Calcoli avanzati");
    printf("\n|3| Cambio valuta");
    printf("\n|4| Geometria");
    printf("\n\nPer tornare alla pagina iniziale digitare 0\n");
    printf("\n\nSelezione-> ");
    scanf("%d",&tipo);
    
    switch(tipo)
    {
    
	case 1:
    	system("cls");
    printf("\n\nMenu'calcolatrice base:");   /*menù calcolatrice di base*/
    printf("\n\n|1| addizione");
    printf("\n|2| sottrazione");
    printf("\n|3| moltiplicazione");
    printf("\n|4| divisione");
    
    printf("\n\nSelezione: ");
    scanf("%d",&selbase);
    
    switch(selbase)
    {
    system("cls");
    
    case 0:
	return main();
    
    
	case 1:/*addizione*/
    printf("\n|ADDIZIONE|\n");
    printf("\nInserire il primo numero: ");
    scanf("%lf",&risultato);
    
    do
    {
    printf("\ninserisci un altro numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato=risultato+n;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	case 2:
	system("cls");/*sottrazione*/
    printf("\n|SOTTRAZIONE|\n");
	printf("\nInserire il primo numero: ");
    scanf("%lf",&risultato);
    
    do
    {
    printf("\ninserisci un altro numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato=risultato-n;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	case 3:
	system("cls");/*moltiplicazione*/
    printf("\n|MOLTIPLICAZIONE|\n");
	printf("\nInserire il primo numero: ");
    scanf("%lf",&risultato);
    
    do
    {
    printf("\ninserisci un altro numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato=risultato*n;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	case 4:
	system("cls");/*divisione*/
    printf("\n|DIVISIONE|\n");
	printf("\nInserire il primo numero: ");
    scanf("%lf",&risultato);
    
    do
    {
    printf("\ninserisci un altro numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato=risultato/n;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
    
    default:
        system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n												||!!Inserire una sezione valida!!||");
        sleep(2);
    return main();
	}
    break;
    
    
    
    case 2:
	system("cls");/*menù avanzato*/
    printf("\n\nMenu'calcolatrice avanzata:");
    printf("\n\n|1| elevamento alla seconda");
    printf("\n|2| radice quadrata");
    printf("\n|3| elevamento alla N");
    printf("\n|4| radice n^sima");
    printf("\n|5| seno");
    printf("\n|6| coseno");
    printf("\n|7| tangente");
    printf("\n|8| logaritmo");
    printf("\n|9| logaritmo in base 10");
    printf("\n|10| media tra 2 numeri");
    printf("\n|11| media tra n numeri");
    printf("\n|12| calcolo percentuale");
    printf("\n|13| equazioni di 2^grado");
    
     printf("\n\nselezione: ");
    scanf("%d",&selavanz);
    
    switch(selavanz)
    {
    case 0:
	return main();
	
	case 1:
	system("cls");/*eleva alla seconda*/
    printf("\n|ELEVAMENTO ALLA SECONDA|\n");
	do
	{
	printf("\nInserire il numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato=n*n;
    printf("Il risultato e' %lf\n",risultato);
	}
	while (n==0);
    
    break;
    
    
    case 2:
	system("cls");/*radice quadrata*/
    printf("\n|RADICE QUADRATA|\n");
	do
	{
	printf("\nInserire il numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= sqrt(n);
    printf("Il risultato e' %lf\n",risultato);
    }
    while (n==0);
    break;
    
    
    case 3:
	system("cls");/*eleva alla N*/
    printf("\n|ELEVAMENTO ALLA N|\n");
	do
	{
	printf("\nInserire il numero: ");
    scanf("%lf",&n);
    printf("\nInseririsci l'esponente': ");
    scanf("%lf",&n2);
    if(n==0) {return main();}
    risultato=pow(n,n2);
    printf("Il risultato e' %lf\n",risultato);
    }
    while (n==0);
    break;
    
    
    case 4:
	system("cls");/*radice N*/
    printf("\n|RADICE ENNESIMA|\n");
	do
	{
	printf("\nInserire il numero: ");
    scanf("%lf",&n);
    printf("\nInseririsci l'indice della radice': ");
    scanf("%lf",&n2);
    if(n==0) {return main();}
    risultato=pow(n,1/n2);
    printf("Il risultato e' %lf\n",risultato);
    }
    while (n==0);
    break;
    
    
    case 5:
	system("cls");/*seno*/
    printf("\n|SENO|\n");
	do
	{
	printf("\nInserire il numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= sin(n*M_PI/180);
    printf("Il risultato e' %lf\n",risultato);
    }
    while (n==0);
    break;
    
    
    case 6:
	system("cls");/*coseno*/
    printf("\n|COSENO|\n");
	do
	{
	printf("\nInserire il numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= cos(n*M_PI/180);
    printf("Il risultato e' %lf\n",risultato);
    }
    while (n==0);
    break;
    
    
    case 7:
	system("cls");/*tangente*/
    printf("\n|TANGENTE|\n");
	do
	{
	printf("\nInserire il numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= tan(n*M_PI/180);
    printf("Il risultato e' %lf\n",risultato);
    }
    while (n==0);
    break;
    
    case 8:
	system("cls");/*logaritmo*/
    printf("\n|LOGARITMO|\n");
	do
	{
	printf("\nInserire il numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= log(n);
    printf("Il risultato e' %lf\n",risultato);
    }
    while (n==0);
    break;
    
    
    case 9:
	system("cls");/*logaritmo in base 10*/
    printf("\n|LOGARITMO IN BASE 10|\n");
	do
	{
	printf("\nInserire il numero: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= log10(n);
    printf("Il risultato e' %lf\n",risultato);
    }
    while (n==0);
    break;
    
    
    case 10:
    	system("cls");
    printf("\n|MEDIA TRA DUE NUMERI|\n");
	do
	{
	printf("\nInserisci il primo numero: ");
    scanf("%lf",&n);
    printf("\nInserisci il secondo numero': ");
    scanf("%lf",&n2);
    risultato=(n+n2)/2;
    printf("\nLa media e' %lf\n",risultato);
    }
    while (n==0);
    break;
    
    case 13:/*equazione 2 grado*/
    system("cls");	
    
	printf("\ncoefficiente a:\t");
    scanf("%f", &a);
    if(a==0) {return main();}
    printf("coefficiente b:\t");
    scanf("%f", &b);
    if(b==0) {return main();}
    printf("coefficiente c:\t");
    scanf("%f", &c);
    if(c==0) {return main();}
 
    if (a==0) {
	if((b==0)&&(c==0))
	    printf("\nequazione indeterminata");
	else if(b==0)
	    printf("\nequazione impossibile");
	else {
	   printf("l'equazione e' di primo grado\n");
	   x1=-c/b;
	   printf("\n x= %lf", x1);
	}
  }
  else {
	d=b*b-4*a*c; 
	printf("\nil determinante e' %5.3lf ",d);
	if(d>0) {
	    x1=(-b-sqrt(d))/(2*a);
	    x2=(-b+sqrt(d))/(2*a);
	    printf("\nDue soluzioni reali distinte x1= %5.3lf e x2= %5.3lf ",x1,x2);
	  }
	  else if(d==0) {
	    x1=(-b)/(2*a); 
	    printf("\nDue soluzioni reali coincidenti x1 e x2 uguali a %5.3lf ",x1);
	 }
	 else printf("\nNon esistono soluzioni reali\n\n");
  }
system("pause");
return 0;
	
	default:
        system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n												||!!Inserire una sezione valida!!||");
        sleep(2);
    return main();	
	}
    break;
    
    
    
    case 3:
    	system("cls");/*menu cambio valuta*/
    printf("\n\nMenu'cambio valuta:");
    printf("\n\n|1| EUR->DOLLARO STATUNITENSE");
    printf("\n|2| EUR->STERLINA");
    printf("\n|3| EUR->RUPIA");
    printf("\n|4| EUR->RUBLO");
    printf("\n|5| EUR->YUAN");
    printf("\n|6| EUR->FRANCO SVIZZERO");
    
    printf("\n\nselezione: ");
    scanf("%d",&selval);
    
    switch(selval)
    {
    case 0:
	return main();	
    	
    case 1:
	system("cls");/*dollaro*/
    printf("\n|DOLLARO STATUNITENSE|\n");
	do
	{
	printf("\nInserire il valore in euro: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
   risultato= n*0.96;
    printf("Il cambio e' %lf\n",risultato);
	}
	while (esci==0);
    
    break;
    
    
    case 2:
	system("cls");/*sterlina*/
    printf("\n|STERLINA|\n");
	do
	{
	printf("\nInserire il valore in euro: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= n*0.85;
    printf("Il cambio e' %lf\n",risultato);
    }
    while (esci==0);
    break;
    
    
    case 3:
	system("cls");/*rupia*/
    printf("\n|RUPIA|\n");
		do
	{
	printf("\nInserire il valore in euro: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= n*80.55;
    printf("Il cambio e' %lf\n",risultato);
    }
    while (esci==0);
    break;
    
    
    case 4:
	system("cls");/*rublo*/
    printf("\n|RUBLO|\n");
	do
	{
	printf("\nInserire il valore in euro: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= n*67.32;
    printf("Il cambio e' %lf\n",risultato);
    }
    while (esci==0);
    break;
    
    
    case 5:
	system("cls");/*yuan*/
    printf("\n|YUAN|\n");
	do
	{
	printf("\nInserire il valore in euro: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= n*7.06;
    printf("Il cambio e' %lf\n",risultato);
    }
    while (esci==0);
    break;
    
    
    case 6:
	system("cls");/*franco*/
    printf("\n|FRANCO SVIZZERO|\n");
		do
	{
	printf("\nInserire il valore in euro: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato= n*1.04;
    printf("Il cambio e' %lf\n",risultato);
    }
    while (esci==0);
    break;
    
    
    default:
        system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n												||!!Inserire una sezione valida!!||");
        sleep(2);
    return main();
}
break;

 case 4:
	system("cls");/*menù geometria*/
    printf("\n\nMenu'calcoli geometria:");
    printf("\n\n|1| perimetro quadrato");
    printf("\n|2| area quadrato");
    printf("\n|3| perimetro rettangolo");
    printf("\n|4| area rettangolo");
    printf("\n|5| perimetro triangolo");
    printf("\n|6| area triangolo");
    printf("\n|7| perimetro parallelogtamma");
    printf("\n|8| area parallelogramma");
    printf("\n|9| perimetro trapezio");
    printf("\n|10| area trapezio");
    printf("\n|11| perimetro cerchio");
    printf("\n|12| area cerchio");
    
     printf("\n\nselezione: ");
    scanf("%d",&selgeo);
    
    switch(selgeo)
    {
    case 0:
	return main();	
    	
	case 1:
	system("cls");/*perimetro quad*/
    printf("\n|PERIMETRO QUADRATO|\n");
    
    do
    {
    printf("\ninserisci il lato: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato=n*4;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	case 2:
	system("cls");/*area quad*/
    printf("\n|AREA QUADRATO|\n");
    
    do
    {
    printf("\ninserisci il lato: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato=n*n;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	case 3:
	system("cls");/*perimetro rettangolo*/
    printf("\n|PERIMETRO RETTANGOLO|\n");
	
    
    do
    {
    printf("\nInserisci la base: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    printf("\ninserisci l'altezza': ");
    scanf("%lf",&n2);
    if(n2==0) {return main();}
    risultato=(n*2)+(n2*2);
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	
	
	
	case 4:
	system("cls");/*area rettangolo*/
    printf("\n|AREA RETTANGOLO|\n");
	
    
    do
    {
    printf("\nInserisci la base: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    printf("\ninserisci l'altezza': ");
    scanf("%lf",&n2);
    if(n2==0) {return main();}
    risultato=n*n2;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	
	
	case 5:
	system("cls");
    printf("\n|PERIMETRO TRIARGOLO|\n");
	
    
    do
    {
    printf("\nInserisci il primo lato: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    printf("\ninserisci il secondo lato: ");
    scanf("%lf",&n2);
	if(n2==0) {return main();}
    printf("\ninserisci il terzo lato: ");
    scanf("%lf",&n2);
    if(n3==0) {return main();}
    risultato=n+n2+n3;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	case 6:
	system("cls");
    printf("\n|AREA TRIARGOLO|\n");
    
    do
    {
    printf("\nInserisci la base: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    printf("\ninserisci l'altezza': ");
    scanf("%lf",&n2);
    if(n2==0) {return main();}
    risultato=(n*n2)/2;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
    
    case 7:
	system("cls");
    printf("\n|PERIMETRO PARALLELOGRAMMA|\n");
	
    
    do
    {
    printf("\nInserisci la base: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    printf("\ninserisci il lato: ");
    scanf("%lf",&n2);
    if(n2==0) {return main();}
    risultato=(n*2)+(n2*2);
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	
	
	
	case 8:
	system("cls");
    printf("\n|AREA PARALLELOGRAMMA|\n");
	

    do
    {
    printf("\nInserisci la base: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    printf("\ninserisci l'altezza': ");
    scanf("%lf",&n2);
    if(n2==0) {return main();}
    risultato=(n*n2)/2;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	case 9:
	system("cls");
    printf("\n|PERIMETRO TRAPEZIO|\n");
	

    do
    {
    printf("\nInserisci la base maggiore: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    printf("\ninserisci la base minore: ");
    scanf("%lf",&n2);
    if(n2==0) {return main();}
    printf("\nInserisci il primo lato: ");
    scanf("%lf",&n3);
    if(n3==0) {return main();}
    printf("\ninserisci il secondo lato: ");
    scanf("%lf",&n4);
    if(n4==0) {return main();}
    risultato=n+n2+n3+n4;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	case 10:
	system("cls");
    printf("\n|AREA TRAPEZIO|\n");
	

    do
    {
    printf("\nInserisci la base maggiore: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    printf("\ninserisci la base minore: ");
    scanf("%lf",&n2);
    if(n2==0) {return main();}
    printf("\nInserisci l'altezza:" );
    scanf("%lf",&n3);
    if(n3==0) {return main();}
    risultato=((n+n2)*n3)/2;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
    
    
    case 11:
	system("cls");
    printf("\n|PERIMETRO CERCHIO|\n");
	

    do
    {
    printf("\nInserisci il raggio: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato=2*3.14159*n;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
	
	
	 case 12:
	system("cls");
    printf("\n|AREA CERCHIO|\n");
	

    do
    {
    printf("\nInserisci il raggio: ");
    scanf("%lf",&n);
    if(n==0) {return main();}
    risultato=3.14159*n*n;
    printf("\nRisultato: %lf\n",risultato);
	}
	while (esci==0);
    
    
    default:
        system("cls");/*in caso l'utente inserisca un valore errato all'interno del programma*/
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n												||!!Inserire una sezione valida!!||");
        sleep(2);
    return main();
    	
    }
    
    
    default:
        system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n												||!!Inserire una sezione valida!!||");
        sleep(2);
    return main();
}
}

