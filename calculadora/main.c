#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>
int main(int argc, char *argv[])
{
	char resultado, resultado3;
    int op=0, c=0, c2=0, n=0;
	float x=0, y=0, r=0, resto=0, r2=0, resultado2=0;
	setlocale(LC_ALL, "portuguese");
    do
	{
    	system("color 0f");
    	system("cls");
   		printf("----------CALCULADORA----------\t\n Escolha; \n1 para SOMAR	2 para SUBTRAIR 	3 para MULTIPLICAR	4 para DIVIDIR   5 para Encerrar.  \n");
    	scanf(" %d", &op);
		    
    	switch(op)
    	{
    	    case 1:
    	    {	
    	    	c=0;
    	    	printf("\nSomando...\n\n");
    	    	printf("Digite o primeiro numero: ");
    			scanf(" %f", &x);
    			printf("Digite o segundo numero: ");
    			scanf(" %f", &y);
    	        r=x+y;
    	        	if(fmod(r, 2)==0)
					{
    	        		printf("\nResultado %.0f\n", r);
					}
					else
					{
						printf("\nResultado %.2f\n", r);
					}
	            break;
	        }
	        case 2:
	        {
	        	c=0;
	        	printf("\nSubtraindo...\n\n");
	        	printf("Digite o primeiro numero: ");
	    		scanf(" %f", &x);
	    		printf("Digite o segundo numero: ");
	    		scanf(" %f", &y);
	            r=x-y;
	            		if(fmod(r, 2)==0)
					{
	            		printf("\nResultado %.0f\n", r);
					}
					else
					{
						printf("\nResultado %.2f\n", r);
					}
				break;
	        }
	        case 3:
	        {
	        	c=0;
	        	printf("\nMultiplicando...\n\n");
	        	printf("Digite o primeiro numero: ");
	    		scanf(" %f", &x);
	    		printf("Digite o segundo numero: ");
	    		scanf(" %f", &y);
	            r=x*y;
	            	if(fmod(r, 2)==0)
					{
	            		printf("\nResultado %.0f\n", r);
					}
					else
					{
						printf("\nResultado %.2f\n", r);
					}
				break;
	        }
	        case 4:
	        {
	        	c=0;
	        	printf("\nDividindo...\n\n");
	        	printf("Digite o primeiro numero: ");
	    		scanf(" %f", &x);
	    		printf("Digite o segundo numero: ");
	    		scanf(" %f", &y);
	    		if(y == 0)
	            	{
	            		printf("\nNão é possivel dividir por 0.\n\n");
	            		c=c+1;
	            		system("pause");
	            		break;
					}
	            r=x/y;
	            	if(fmod(r, 2)==0)
					{
	            		printf("\nResultado %.0f\n", r);
					}
					else
					{
						printf("\nResultado %.2f\n", r);
					}
	            break;
	        }
	        case 5:
	        {
	        	printf("encerrando a calculadora\n");
	        	c=c+1;
	        	break;
			}	
	        default:
	       	{
	       		c=c+1;
	        	printf("\nOpção invalida\n");
	        	system("pause");
	        	break;
	        }
		}
		resultado2=resultado2+r;
		if(c==0)
		{
	        printf("\nvoce quer continuar calculando com o resultado anterior? s ou n\n");
	        scanf(" %c", &resultado);
	        system("cls");
	        switch(resultado)
	        {
	        	case 's':
	        	{
	        		while(n!=1)
					{
						c2=0;
						system("cls");
						int op2;
						printf("----------CALCULADORA----------\t\nValor atual: %.2f Escolha; \n1 para SOMAR	2 para SUBTRAIR 	3 para MULTIPLICAR	4 para DIVIDIR  5 para Encerrar\n", resultado2);
	    				scanf(" %d", &op2);
	    				switch(op2)
	    				{
	        			case 1:
	        			{
		        			printf("\nSomando...\n\n");
	    		    		printf("%.2f+", resultado2);
	   			 			scanf(" %f", &y);
	        		    	resultado2=resultado2+y;
	            			if(fmod(resultado2, 2)==0)
							{
	            				printf("\nNovo resultado %.0f\n", resultado2);
							}
							else
							{
								printf("\nNovo resultado %.2f\n", resultado2);
							}
	            			break;
	        			}
	        			case 2:
	        			{
	        				printf("\nSubtraindo...\n\n");
	        				printf("%.2f-", resultado2);
	    					scanf(" %f", &y);
	        			    resultado2=resultado2-y;
	        		   		if(fmod(resultado2, 2)==0)
							{
	          			  		printf("\nNovo resultado %.0f\n", resultado2);
							}
							else
							{
								printf("\nNovo resultado %.2f\n", resultado2);
							}
						break;
	        			}
	        			case 3:
	        			{
	        				printf("\nMultiplicando...\n\n");
	       					printf("%.2f*", resultado2);
	       					scanf(" %f", &y);
	      				    resultado2=resultado2*y;
	        		    	if(fmod(resultado2, 2)==0)
							{
	        		    		printf("\nNovo resultado %.0f\n", resultado2);
							}
							else
							{
								printf("\nNovo resultado %.2f\n", resultado2);
							}
						break;
	      				 }
	      				case 4:
	      				{
	       					printf("\nDividindo...\n\n");
	        				printf("%.2f/", resultado2);
	    					scanf(" %f", &y);
	    					if(y == 0)
	            			{
	            				printf("\nNão é possivel dividir por 0.\n\n");
	            				c2=c2+1;
	            				system("pause");
	            				break;
	            			}
	            			resultado2=resultado2/y;
	            			if(fmod(resultado2, 2)==0)
							{
	            				printf("\nNovo resultado %.0f\n", resultado2);
							}
							else
							{
								printf("\nNovo resultado %.2f\n", resultado2);
							}
	         		   	break;
	         		   	case 5:
	        			{
	        				c2=c2+1;
	        				printf("encerrando a calculadora\n");
	        				op=5;
	        				n++;
	        				break;
						}		
	        			}
	        			default:
	        				{
	        					c2=c2+1;
	        				printf("\nOpção invalida\n");
	        				system("pause");
	        				system("cls");
	        				break;
	        				}
						}
						if(c2==0)
						{
							printf("\nvoce quer continuar calculando com o resultado anterior? s ou n\n");
							scanf(" %c", &resultado3);
							switch(resultado3)
							{
								case 's':
								{
									system("cls");
									break;
								}
								case 'n':
								{
									system("cls");
									n++;
									break;
								}
							}
						}
					}
				break;	
				}
				case 'n':
				{
					printf("Reiniciando a calculadora..\n");
					system("pause");
					system("cls");
					break;
				}
			}
		}
	}while(op!=5);
	
return 0;
}
