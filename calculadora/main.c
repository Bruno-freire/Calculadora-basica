#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>
int main(int argc, char *argv[])
{
	char resultado, resultado2;
    int op, c=0, c2=0;
	float x=0, y=0, r=0, resto=0, r2=0, resultadoo;
	setlocale(LC_ALL, "portuguese");
    do
	{
    	system("color 0f");
    	system("cls");
   		printf("----------CALCULADORA----------\t\n Escolha; \n1 para SOMAR	2 para SUBTRAIR 	3 para MULTIPLICAR	4 para DIVIDIR\n  ");
    	scanf(" %d", &op);
    
    	switch(op)
    	{
    	    case 1:
    	    {
    	    	printf("\nSomando...\n\n");
    	    	printf("Digite o primeiro numero: ");
    			scanf(" %f", &x);
    			printf("Digite o segundo numero: ");
    			scanf(" %f", &y);
    	        r=x+y;
    	        	if(fmod(r, 2)==0)
					{
    	        		printf("Resultado %.0f\n", r);
					}
					else
					{
						printf("Resultado %.2f\n", r);
					}
	            break;
	        }
	        case 2:
	        {
	        	printf("\nSubtraindo...\n\n");
	        	printf("Digite o primeiro numero: ");
	    		scanf(" %f", &x);
	    		printf("Digite o segundo numero: ");
	    		scanf(" %f", &y);
	            r=x-y;
	            		if(fmod(r, 2)==0)
					{
	            		printf("Resultado %.0f\n", r);
					}
					else
					{
						printf("Resultado %.2f\n", r);
					}
				break;
	        }
	        case 3:
	        {
	        	printf("\nMultiplicando...\n\n");
	        	printf("Digite o primeiro numero: ");
	    		scanf(" %f", &x);
	    		printf("Digite o segundo numero: ");
	    		scanf(" %f", &y);
	            r=x*y;
	            	if(fmod(r, 2)==0)
					{
	            		printf("Resultado %.0f\n", r);
					}
					else
					{
						printf("Resultado %.2f\n", r);
					}
				break;
	        }
	        case 4:
	        {
	        	printf("\nDividindo...\n\n");
	        	printf("Digite o primeiro numero: ");
	    		scanf(" %f", &x);
	    		printf("Digite o segundo numero: ");
	    		scanf(" %f", &y);
	            r=x/y;
	            	if(fmod(r, 2)==0)
					{
	            		printf("Resultado %.0f\n", r);
					}
					else
					{
						printf("Resultado %.2f\n", r);
					}
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
		if(c==0)
		{
	        printf("voce quer continuar calculando com o resultado anterior? s ou n\n");
	        scanf(" %c", &resultado);
	        system("cls");
	        switch(resultado)
	        {
	        	case 's':
	        	{
	        		int n;
	        		while(n!=0)
					{
						int n=0, op=0;
						printf("----------CALCULADORA----------\t\nValor atual: %.2f Escolha; \n1 para SOMAR	2 para SUBTRAIR 	3 para MULTIPLICAR	4 para DIVIDIR\n  ", r);
	    				scanf(" %d", &op);
	    				switch(op)
	    				{
	        			case 1:
	        			{
		        		printf("\nSomando...\n\n");
	    		    	printf("%.2f+", r);
	   			 		scanf(" %f", &y);
	        		    r=r+y;
	            			if(fmod(r, 2)==0)
							{
	            				printf("Novo resultado %.0f\n", r);
	            				system("pause");
							}
							else
							{
								printf("Novo resultado %.2f\n", r);
								system("pause");
							}
	            			break;
	        			}
	        			case 2:
	        			{
	        				printf("\nSubtraindo...\n\n");
	        				printf("%.2f-", r);
	    					scanf(" %f", &y);
	        			    r=r-y;
	        		   		if(fmod(r, 2)==0)
							{
	          			  		printf("Novo resultado %.0f\n", r);
	            				system("pause");
							}
							else
							{
								printf("Novo resultado %.2f\n", r);
								system("pause");
							}
						break;
	        			}
	        			case 3:
	        			{
	        				printf("\nMultiplicando...\n\n");
	       					printf("%.2f*", r);
	       					scanf(" %f", &y);
	      				    r=r*y;
	        		    	if(fmod(r, 2)==0)
							{
	        		    		printf("Novo resultado %.0f\n", r);
	        		    		system("pause");
							}
							else
							{
								printf("Novo resultado %.2f\n", r);
								system("pause");
							}
						break;
	      				 }
	      				case 4:
	      				{
	       					printf("\nDividindo...\n\n");
	        				printf("%.2f/", r);
	    					scanf(" %f", &y);
	            			r=r/y;
	            			if(fmod(r, 2)==0)
							{
	            				printf("Novo resultado %.0f\n", r);
	            				system("pause");
							}
							else
							{
								printf("Novo resultado %.2f\n", r);
								system("pause");
							}
	         		   	break;
	        			}
	        			default:
	        				{
	        					c2=c2+1;
	        				printf("\nOpção invalida\n");
	        				system("pause");
	        				break;
	        				}
						}
						if(c2==0)
						{
						printf("voce quer continuar calculando com o resultado anterior? s ou n\n");
						scanf(" %c", resultado2);
							switch(resultado2)
							{
								case 's':
								{
									r=resultadoo;
									break;
								}
								case 'n':
								{
									n=n+1;
									break;
								}
							}
							if(r=resultadoo)
							{
								printf("continuando calculo...\n");
								system("pause");
							}	
						}
					}
				break;	
				}
				case 'n':
				{
					printf("Reiniciando a calculadora..\n");
					system("pause");
					break;
				}
			}
			
		}
		
		
	}while(op!=0);
	
return 0;
}
