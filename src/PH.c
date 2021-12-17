#include <stdio.h>
#include <math.h>


int main()
{
	float Te;
	float Temin = 273.15;
	float Temax = 373.15;
	float Dimin;
	float Dimax;
	float S = 5.670373e-8;
	float D;
	float T;
	float R;
	float A;


	
	
	printf("Donner la Temperature de l'etoile (Kelvin)\n");
	scanf("%f",&T);
	printf("Donnez le Rayon de l'etoile (Km)\n");
	scanf("%f",&R);
	printf("Donnez la Distance Planete-Etoile (Km)\n");
	scanf("%f",&D);
	printf("Donnez Albedo (0 si non)(en pourcent)\n");
	scanf("%f",&A);

	Dimax = sqrt((S * pow(T,4))/(pow(Temin,4)*(4*S)))*R;
	Dimin = sqrt((S * pow(T,4))/(pow(Temax,4)*(4*S)))*R;
	

	Te = S * pow(T,4);
	
	Te = Te * pow(R/D , 2.0);
	printf("constante solaire : %f\n",Te);
	Te = pow((Te*(1-A))/(4*S), 0.25);//ajout de *(1-A)


	printf("la planète doit ce trouver entre %1.7e km et %1.7e km\n",Dimin,Dimax);
	printf("Temperature d'equilibre : %.3f Kelvin soit %.3f Celsius",Te ,Te - 273.15);


	if (Temax > Te & Te> Temin)
	{
		printf(" La planete peut contenir de l'eau à l'etat liquide\n");
	}
	else
	{
		printf(" La planete ne peut contenir de l'eau a l'etat liquide\n" ); 
	}
	printf("appuyer sur n importe quelle touche pour terminer\n");
	scanf("%f",&T);
	
	
	return 0;
	
	

}