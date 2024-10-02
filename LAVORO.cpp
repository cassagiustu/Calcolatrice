
#include <stdio.h>

//includo libreria per le funzioni matematiche
#include <math.h>



int main()
{
	//dichiarazioni delle variabili
	int opz1, opz2, indice, i;
	float n1, n2, n3, n4, risultato, somma;
	
	//schermata iniziale
	printf("Lavoro di Luca Cassina\n\n\n");
	
	printf("    __   ____  _        __   ___   _       ____  ______  ____   ____   __    ___ \n");
	printf("   /  ] /    || |      /  ] /   \\ | |     /    ||      ||    \\ |    | /  ]  /  _]\n");
	printf("  /  / |  o  || |     /  / |     || |    |  o  ||      ||  D  ) |  | /  /  /  [_ \n");
	printf(" /  /  |     || |___ /  /  |  O  || |___ |     ||_|  |_||    /  |  |/  /  |    _]\n");
	printf("/   \\_ |  _  ||     /   \\_ |     ||     ||  _  |  |  |  |    \\  |  /   \\_ |   [_ \n");
	printf("\\     ||  |  ||     \\     ||     ||     ||  |  |  |  |  |  .  \\ |  \\     ||     |\n");
	printf(" \\____||__|__||_____|\\____| \\___/ |_____||__|__|  |__|  |__|\\_||____\\____||_____|\n\n");


	printf("Opzioni disponibili:\n \t1)somma,\n \t2)sottrazione,\n \t3)moltiplicazione,\n \t4)divisione,\n \t5)media,\n \t6)seno,\n \t7)coseno,\n \t8)potenza,\n \t9)radice,\n \t10)area,\n \t11)perimetro,\n \t12)volume.\n");
	
	//leggo da input l'operazione che vuole eseguire
	printf("Inserisci l'operazione che vuoi eseguire: "); 
	scanf("%d",&opz1);
	
	//eseguo operazioni finche l'utente non decide di uscire
	while(opz1!=0)
	{
		switch(opz1)
		{
			//eseguo la somma
			case 1:
				printf("\nHai selezionato somma\n");
			
				printf("Inserisci il primo addendo:");
				scanf("%f",&n1);
			
				printf("Inserisci il secondo addendo:");
				scanf("%f",&n2);
			
				risultato=n1+n2;
				printf("La soluzione e':%f",risultato);
			break;
			
			//eseguo la sottrazione
			case 2:
				printf("\nHai inserito sottrazione\n");
			
				printf("Inserisci il minuendo:");
				scanf("%f",&n1);
			
				printf("Inserisci il sottraendo:");
				scanf("%f",&n2);
			
				risultato=n1-n2;
				printf("La soluzione e':%f",risultato);
			break;
			
			//eseguo la moltiplicazione
			case 3:
				printf("\nHai inserito moltiplicazione\n");
			
				printf("Inserisci il moltiplicando:");
				scanf("%f",&n1);
			
				printf("Inserisci il moltiplicatore:");
				scanf("%f",&n2);
			
				risultato=n1*n2;
				printf("La soluzione e':%f",risultato);
			break;
			
			//eseguo la divisione
			case 4:
				printf("\nHai inserito divisione\n");
				
				printf("Inserisci il dividendo:");
				scanf("%f",&n1);
				
				printf("Inserisci il divisore:");
				scanf("%f",&n2);
				
				//controllo chec il denominatore sia diverso da 0, altrimenti stampo"L'operazione e'impossibile"
				if(n2==0)
				{
					printf("L'operazione e'impossibile\n");	
				}
				else
				{
					risultato=n1/n2;
					printf("La soluzione e':%f",risultato);
				}
			break;
			
			//eseguo la media
			case 5:
				printf("\nHai inserito media:\n");
				
				printf("Quanti numeri si vogliono inserire? ");
				scanf("%d", &indice);
				
				i=0;
				
				somma=0;
				
				//leggo i dati sommandoli man mano
				while(i<indice)
				{
					printf("Inserisci il numero:");
					scanf("%f", &n1);
					
					somma=somma+n1;
					
					i++;
				}
				
				risultato=somma/indice;
				
				printf("La media e':%f", risultato);
				
			break;
			
			//eseguo il seno
			case 6:
				printf("\nHai inserito seno\n");
			
				printf("Inserisci l'angolo in gradi:");
				scanf("%f",&n1);
				
				//utilizzo la funzione sin trasformando l'angolo in radianti
				risultato=sin(n1*M_PI/180);
				
				printf("La soluzione e':%f", risultato);
			break;
			
			//eseguo il coseno
			case 7:
				printf("\nHai inserito coseno\n");
			
				printf("Inserisci l'angolo in gradi:");
				scanf("%f",&n1);
				
				//utilizzo la funzione sin trasformando l'angolo in radianti
				risultato=cos(n1*M_PI/180);
				
				printf("La soluzione e':%f", risultato);
			break;
			
			//eseguo l'elevamento a potenza
			case 8:
				printf("\nHai inserito elevamento a potenza\n");
		
				printf("Inserisci la base:");
				scanf("%f",&n1);
				
				printf("Inserisci l'esponente:");
				scanf("%f",&n2);
				
				risultato=pow(n1,n2);
				
				printf("Il risultato e':%f", risultato);
			break;
			
			//eseguo l'estrazione di radice
			case 9:
				printf("\nHai inserito estrazione di radice\n");
				
				printf("Inserisci il numero sotto radice:");
				scanf("%f",&n1);
		
				printf("Inserisci l'indice della radice:");
				scanf("%d",&indice);
				
				//controllo che non ci sia indice pari con il radicando minore di 0
				if(indice%2!=0)
				{
					if(n1>=0)
					{
						risultato=pow(n1, 1.0/indice);
		
						printf("Il risultato e':%f", risultato);
					}
					else
					{
						risultato=pow(-n1, 1.0/indice);
		
						printf("Il risultato e':-%f", risultato);
					}
				}
				else
				{
					if(n1>=0&&indice%2==0)
					{
						risultato=pow(n1, 1.0/indice);
		
						printf("Il risultato e':%f", risultato);
					}
					else
					{
						printf("Il numero sotto radice non e'positivo");
					}
				}
			break;
			
			//eseguo l'area
			case 10:
				printf("\nHai selezionato area\n");
				
				//schermata per la scelta delle aree disponibili
				printf("Figure disponibili:\n \t1)quadrato,\n \t2)triangolo,\n \t3)rettangolo,\n \t4)trapezio,\n \t5)cerchio\n");
				
				printf("Inserisci la figura di cui calcolare l'area: ");
				scanf("%d",&opz2);
				
				switch(opz2)
				{
					//eseguo l'area del quadrato
					case 1:
						printf("\nHai selezionato area del quadrato\n");
						
						printf("Inserisci la misura del lato:");
						scanf("%f",&n1);
						
						n2=0;
						n3=0;
												
						risultato=n1*n1;
					break;
					
					//eseguo l'area del triangolo
					case 2:
						printf("\nHai selezionato area del triangolo\n");
						
						printf("Inserisci la misura della base:");
						scanf("%f",&n1);
						
						printf("Inserisci la misura dell'altezza:");
						scanf("%f", &n2);
						
						n3=0;
						
						risultato=n1*n2/2;
					break;
					
					//eseguo l'area del rettangolo
					case 3:
						printf("\nHai selezionato area del rettangolo\n");
						
						printf("Inserisci la misura della base:");
						scanf("%f",&n1);
						
						printf("Inserisci la misura dell'altezza:");
						scanf("%f", &n2);
						
						n3=0;
						
						risultato=n1*n2;
					break;
					
					//eseguo l'area del trapezio
					case 4:
						printf("\nHai selezionato area del trapezio\n");
						
						printf("Inserisci la misura della base maggiore:");
						scanf("%f",&n1);
						
						printf("Inserisci la misura della base minore:");
						scanf("%f", &n2);
						
						printf("Inserisci la misura dell'altezza:");
						scanf("%f", &n3);
						
						risultato=(n1+n2)*n3/2;
					break;
					
					//eseguo l'area del cerchio
					case 5:
						printf("\nHai selezionato area del cerchio\n");
						
						printf("Inserisci la misura del raggio:");
						scanf("%f",&n1);
						
						n2=0;
						n3=0;
						
						risultato=n1*n1*M_PI;
					break;
					
					//stampo un messaggio nel caso l'utente inserisca opzioni non valide
					default:
						printf("Operazione non valida");
					break;	
				}
				
				//stampo il risultato solo dopo che e' stata inserita un'operazione valida
				if(opz2>0&&opz2<6)
				{
					//controllo che i dati inseriti siano validi
					if(n1>=0&&n2>=0&&n3>=0)
					{
						printf("L'area e':%f", risultato);
					}
					else
					{
						printf("Dati inseriti non validi");	
					}
				}
				
			break;
			
			//eseguo il perimetro
			case 11:
				printf("\nHai selezionato perimetro\n");
				
				//schermata per la scelta dei perimetri disponibili
				printf("Figure disponibili:\n \t1)quadrato,\n \t2)triangolo,\n \t3)rettangolo,\n \t4)trapezio,\n \t5)cerchio\n");
				
				printf("Inserisci la figura di cui calcolare il perimetro: ");
				scanf("%d",&opz2);
				
				switch(opz2)
				{
					
					//eseguo il perimetro del quadrato
					case 1:
						printf("\nHai selezionato perimetro del quadrato\n");
						
						printf("Inserisci la misura del lato:");
						scanf("%f",&n1);
						
						n2=0;
						
						risultato=n1*4;
					break;
					
					//eseguo il perimetro del triangolo
					case 2:
						printf("\nHai selezionato perimetro del triangolo\n");
						
						printf("Inserisci la misura del primo lato:");
						scanf("%f",&n1);
						
						risultato=n1;
						
						printf("Inserisci la misura del secondo lato:");
						scanf("%f",&n1);
						
						risultato=risultato+n1;
						
						printf("Inserisci la misura del terzo lato:");
						scanf("%f",&n1);
						
						n2=0;
						n3=0;
						n4=0;
						
						risultato=risultato+n1;
					break;
					
					//eseguo il perimetro del rettangolo
					case 3:
						printf("\nHai selezionato perimetro del rettangolo\n");
						
						printf("Inserisci la misura della base:");
						scanf("%f",&n1);
						
						printf("Inserisci la misura dell'altezza:");
						scanf("%f",&n2);
						
						n3=0;
						n4=0;
						
						risultato=n1*2+n2*2;
					break;
					
					//eseguo il perimetro del trapezio
					case 4:
						printf("\nHai selezionato perimetro del trapezio\n");
						
						printf("Inserisci la misura del primo lato:");
						scanf("%f",&n1);
						
						printf("Inserisci la misura del secondo lato:");
						scanf("%f",&n2);
						
						printf("Inserisci la misura del terzo lato:");
						scanf("%f",&n3);

						printf("Inserisci la misura del quarto lato:");
						scanf("%f",&n4);
						
						risultato=n1+n2+n3+n4;
					break;
					
					//eseguo il perimetro del cerchio
					case 5:
						printf("\nHai selezionato perimetro del cerchio\n");
						
						printf("Inserisci la misura del raggio:");
						scanf("%f",&n1);
						
						n2=0;
						n3=0;
						n4=0;
						
						risultato=2*n1*M_PI;
					break;
					
					//stampo un messaggio nel caso l'utente inserisca opzioni non valide
					default:
						printf("Operazione non valida");
					break;
				}	
				
				
				//stampo il risultato solo dopo che e' stata inserita un'operazione valida
				if(opz2>0&&opz2<6)
				{
					//controllo che i dati inseriti siano validi
					if(n1>=0&&n2>=0&&n3>=0&&n4>=0)
					{
						printf("Il perimetro e':%f", risultato);
					}
					else
					{
						printf("Dati inseriti non validi");	
					}
				}
				
			break;
			
			//eseguo il volume
			case 12:
				printf("\nHai selezionato volume\n");
				
				//schermata per la scelta dei volumi disponibili
				printf("Figure disponibili:\n \t1)cubo,\n \t2)piramide,\n \t3)parallelepipedo,\n \t4)sfera\n");
				
				printf("Inserisci la figura di cui calcolare il volume: ");
				scanf("%d",&opz2);
				
				switch(opz2)
				{
					//eseguo il volume del cubo
					case 1:
						printf("\nHai selezionato volume del cubo\n");
						
						printf("Inserisci la misura del lato:");
						scanf("%f",&n1);
						
						n2=0;
						n3=0;
						
						risultato=pow(n1,3);
					break;
					
					//eseguo il volume della piramide
					case 2:
						printf("\nHai selezionato volume della piramide\n");
						
						printf("Inserisci la misura dell'area della base:");
						scanf("%f",&n1);
						
						printf("Inserisci la misura dell'altezza:");
						scanf("%f",&n2);
						
						n3=0;
						
						risultato=1/3*n1*n2;
					break;
					
					//eseguo il volume del parallelepipedo
					case 3:
						printf("\nHai selezionato volume del parallelepipedo\n");
						
						printf("Inserisci la misura del primo lato:");
						scanf("%f",&n1);
						
						printf("Inserisci la misura del secondo lato:");
						scanf("%f",&n2);
						
						printf("Inserisci la misura del terzo lato:");
						scanf("%f",&n3);
						
						risultato=n1*n2*n3;
					break;
					
					//eseguo il volume della sfera
					case 4:
						printf("\nHai selezionato volume della sfera\n");
						
						printf("Inserisci la misura del raggio:");
						scanf("%f",&n1);
						
						n2=0;
						n3=0;
						
						risultato=4/3*M_PI*pow(n1,3);
					break;
					
					//stampo un messaggio nel caso l'utente inserisca opzioni non valide
					default:
						printf("Operazione non valida");
					break;
				}
				
				//stampo il risultato solo dopo che e' stata inserita un'operazione valida
				if(opz2>0&&opz2<5)
				{
					//controllo che i dati inseriti siano validi
					if(n1>=0&&n2>=0&&n3>=0)
					{
						printf("Il volume e':%f", risultato);
					}
					else
					{
						printf("Dati inseriti non validi");	
					}
				}
				
			break;
			
			//stampo un messaggio nel caso l'utente inserisca opzioni non valide
			default:
				printf("Operazione non valida");
			break;
				
		}
		
		//mostro di nuovo la schermata iniziale
		printf("\n\nOperazione conclusa, scegli un altra operazione:\n");
		
		printf("Opzioni disponibili:\n \t0)esci,\n \t1)somma,\n \t2)sottrazione,\n \t3)moltiplicazione,\n \t4)divisione,\n \t5)media,\n \t6)seno,\n \t7)coseno,\n \t8)potenza,\n \t9)radice,\n \t10)area,\n \t11)perimetro,\n \t12)volume.\n");
		
		printf("Inserisci l'operazione che vuoi eseguire: ");
		scanf("%d",&opz1);		
	
	}
}	

