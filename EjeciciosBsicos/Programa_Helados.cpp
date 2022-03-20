#include <iostream>
#include <cmath>
using namespace std;

//declaracion de funciones y procedimientos
void capturarInformacion(float &a,float &b,float &c,float &d,float &e,float &f,float &g,float &h);
double cantidades(string b,char d,double c);
void cuentas(float a1,float a2,float a3,float a4,float a5,float a6,float a7,float a8);
void mostrarInformacion(float cM,float cP,float cG,float cBt,float cA,float cAg,float pA,float pB,float pM,float pP,float pG,float g_n,float g_i,float c_n,float c_g,float g_t,int v_g_t,int v_g_m,int v_g_p,int v_g_g);
int inflacion (float a);
int redondeo_multi10(int a);
int porcentajes(int a, float b);

int main(){
	
	char w;
	float cantMora, cantParchita, cantGelatina;
	float precMora, precParchita, precGelatina,precAzucar, precBolsas;
	do{
		capturarInformacion(cantMora,precMora,cantParchita,precParchita,cantGelatina,precGelatina,precAzucar,precBolsas);
		cout<<"Continuar <<S>> Salir <<N>>: "; cin>>w;
	}while(w=='S' || w=='s');
	system("PAUSE");
	return 0;
}

void capturarInformacion(float &a,float &b,float &c,float &d,float &e,float &f,float &g,float &h){
	cout<<"\n\n\t**********PRONOSTICADOR DE HELADOS**********\n\n\n"<<endl;
	cout<<"Cantidad de Kilogramos en Mora: "; cin>>a;
		
	cout<<"Precio de la Mora por Kilogramo: "; cin>>b; cout<<"  \n"<<endl;
		
	cout<<"Cantidad de Kilogramos en Parchita: "; cin>>c;
		
	cout<<"Precio de la Parchita por Kilogramo: "; cin>>d; cout<<"  \n"<<endl;
		
	cout<<"Cantidad de Kilogramos en Gelatina: "; cin>>e;
		
	cout<<"Precio de la Gelatina por Kilogramo: "; cin>>f; cout<<"  \n"<<endl;
		
	cout<<"Precio del Azucar por Kilogramo: "; cin>>g; cout<<"  \n"<<endl;
		
	cout<<"Precio del Paquete de Bolsas: "; cin>>h; cout<<"  \n\n\n"<<endl;
		
	cuentas(a,b,c,d,e,f,g,h);
}

void cuentas(float a1,float a2,float a3,float a4,float a5,float a6,float a7,float a8){
	float cantAzucar = (cantidades("azucar",'m',a1)+cantidades("azucar",'p',a3)+cantidades("azucar",'g',a5))/1000;
	float cantBolsas_tetas = cantidades("bolsas",'m',a1)+cantidades("bolsas",'p',a3)+cantidades("bolsas",'g',a5);
	float cantAgua = cantidades("agua",'m',a1)+cantidades("agua",'p',a3)+cantidades("agua",'g',a5);
		
	float gastos_normales=(ceil(cantAzucar)*a7)+(ceil(cantBolsas_tetas/100)*a8)+(a1*a2)+(a3*a4)+(a5*a6);
	float gastos_inflacion=(inflacion(a7)*ceil(cantAzucar))+(inflacion(a8)*ceil(cantBolsas_tetas/100))+(inflacion(a2)*a1)+(inflacion(a4)*a3)+(inflacion(a6)*a5);
	float costo_normal= gastos_inflacion/cantBolsas_tetas;
	float costo_ganancia=costo_normal/0.7;
	float ganancia_tetas=costo_ganancia-costo_normal;
		
	int valor_gene_mora= cantidades("bolsas",'m',a1)*redondeo_multi10(ceil(costo_ganancia));
	int valor_gene_parchita= cantidades("bolsas",'p',a3)*redondeo_multi10(ceil(costo_ganancia));
	int valor_gene_gelatina= cantidades("bolsas",'g',a5)*redondeo_multi10(ceil(costo_ganancia));
	int valor_gene_total= valor_gene_mora+valor_gene_parchita+valor_gene_gelatina;

	mostrarInformacion(a1,a3,a5,cantBolsas_tetas,cantAzucar,cantAgua,a7,a8,a2,a4,a6,gastos_normales,gastos_inflacion,costo_normal,costo_ganancia,ganancia_tetas,valor_gene_total,valor_gene_mora,valor_gene_parchita,valor_gene_gelatina);
}

void mostrarInformacion(float cM,float cP,float cG,float cBt,float cA,float cAg,float pA,float pB,float pM,float pP,float pG,float g_n,float g_i,float c_n,float c_g,float g_t,int v_g_t,int v_g_m,int v_g_p,int v_g_g){
	
	cout<<"\t\t\t\t\t\tGASTOS EN CADA SABOR:\n\n"<<endl;
		
	cout<<"\t\t\t\t\t\t\t***MORA***"<<endl;
	cout<<"Cantidad de Agua en(Lts):\tCantidad de Azucar en (grs):\tCantidad de Jugo en (Lts):\tCantidad de Bolsas y Tetas:"<<endl;
	cout<<"\t"<< cantidades("agua",'m',cM)<<"\t\t\t\t\t"<<cantidades("azucar",'m',cM)<<"\t\t\t"<<cantidades("jugo",'m',cM)<<"\t\t\t\t"<<cantidades("bolsas",'m',cM)<<"\n\n"<<endl;
	
	cout<<"\t\t\t\t\t\t\t***PARCHITA***"<<endl;
	cout<<"Cantidad de Agua en(Lts):\tCantidad de Azucar en (grs):\tCantidad de Jugo en (Lts):\tCantidad de Bolsas y Tetas:"<<endl;
	cout<<"\t"<<cantidades("agua",'p',cP)<<"\t\t\t\t\t"<<cantidades("azucar",'p',cP)<<"\t\t\t"<<cantidades("jugo",'p',cP)<<"\t\t\t\t"<<cantidades("bolsas",'p',cP)<<"\n\n"<<endl;
		
	cout<<"\t\t\t\t\t\t\t***GELATINA***"<<endl;
	cout<<"Cantidad de Agua en(Lts):\tCantidad de Azucar en (grs):\tCantidad de Jugo en (Lts):\tCantidad de Bolsas y Tetas:"<<endl;
	cout<<"\t"<<cantidades("agua",'g',cG)<<"\t\t\t\t\t"<<cantidades("azucar",'g',cG)<<"\t\t\t"<<cantidades("jugo",'g',cG)<<"\t\t\t\t"<<cantidades("bolsas",'g',cG)<<"\n\n"<<endl;
	cout<<"\n"<<endl;
		
	cout<<"\t\t\tCANTIDADES EN TOTAL DE LOS GASTOS:\n"<<endl;
		
	cout<<"\tCantidad Total de Tetas =\t"<<cBt<<" Tetas"<<endl;
	cout<<"\tCantidad Total de Azucar =\t"<<cA<<" Kg"<<endl;
	cout<<"\tCantidad Total de Agua =\t"<<cAg<<" Lts"<<endl;
	cout<<"\n\n\n"<<endl;
		
	cout<<"\t\t\t\t\t\tINFORMACION BASICA:\n"<<endl;
		
	cout<<"\tMateriales:\tCantidad:\tPrecio por Cada kg o Pqt:\tPrecio con Inflacion al 25%:\n"<<endl;
	cout<<"\tAzucar:\t\t"<<ceil(cA)<<" Kg\t\t\t"<<pA<<" Bsf\t\t\t"<<inflacion(pA)<<" BsF"<<endl;
	cout<<"\tBolsas:\t\t"<<ceil(cBt/100)<<" Pqt\t\t\t"<<pB<<" Bsf\t\t\t"<<inflacion(pB)<<" BsF"<<endl;
	cout<<"\tMora:\t\t"<<cM<<" Kg\t\t\t"<<pM<<" Bsf\t\t\t"<<inflacion(pM)<<" BsF"<<endl;
	cout<<"\tParchita:\t"<<cP<<" Kg\t\t\t"<<pP<<" Bsf\t\t\t"<<inflacion(pP)<<" BsF"<<endl;
	cout<<"\tGelatina:\t"<<cG<<" Kg\t\t\t"<<pG<<" Bsf\t\t\t"<<inflacion(pG)<<" BsF"<<endl;
	cout<<"\n\n\n"<<endl;
		
	cout<<"\t\t\tTABLA ADMINISTRATIVA:\n"<<endl;
		
	cout<<"\tGastos Normales:\t\t"<<g_n<<" BsF"<<endl;
	cout<<"\tGastos con la Inflacion:\t"<<g_i<<" BsF"<<endl;
	cout<<"\tCantidad de Tetas:\t\t"<<cBt<<" Tetas"<<endl;
	cout<<"\tCosto Normal:\t\t\t"<<c_n<<" BsF"<<endl;
	cout<<"\tCosto con Ganancias:\t\t"<<c_g<<" BsF"<<endl;
	cout<<"\tGanacias por Tetas:\t\t"<<g_t<<" BsF"<<endl;
	cout<<"\tGanacias 30%:\t\t\t"<<porcentajes(v_g_t, 0.3)<<" BsF"<<endl;
	cout<<"\tAhorrar 8%:\t\t\t"<<porcentajes(v_g_t, 0.08)<<" BsF"<<endl;
	cout<<"\tInvertir 60%:\t\t\t"<<porcentajes(v_g_t, 0.6)<<" BsF"<<endl;
	cout<<"\tGastos Extras 2%:\t\t"<<porcentajes(v_g_t, 0.02)<<" BsF"<<endl;
	cout<<"\tGanancias de Ana:\t\t"<<porcentajes(porcentajes(v_g_t, 0.3), 0.4)<<" BsF"<<endl;
	cout<<"\tGanancias de Wilson:\t\t"<<porcentajes(porcentajes(v_g_t, 0.3), 0.6)<<" BsF"<<endl;
	cout<<"\n\n\n"<<endl;
	
	cout<<"\t\t\tTABLA DE VALORES PARA LA VENTA:\n"<<endl;
	
	cout<<"\tSabores:\tCantidad:\tValor c/u:\tValor General:\n"<<endl;
	cout<<"\tMora:\t\t"<<cantidades("bolsas",'m',cM)<<" Tetas\t"<<redondeo_multi10(ceil(c_g))<<" BsF\t\t"<<v_g_m<<" BsF"<<endl;
	cout<<"\tParchita:\t"<<cantidades("bolsas",'p',cP)<<" Tetas\t"<<redondeo_multi10(ceil(c_g))<<" BsF\t\t"<<v_g_p<<" BsF"<<endl;
	cout<<"\tGelatina:\t"<<cantidades("bolsas",'g',cG)<<" Tetas\t"<<redondeo_multi10(ceil(c_g))<<" BsF\t\t"<<v_g_g<<" BsF\n"<<endl;
	cout<<"\tTotal Tetas:\t"<<cBt<<" Tetas\tTotal Dinero:\t"<<v_g_t<<" BsF"<<endl;
	cout<<"\n\n\n"<<endl;
}

double cantidades(string b,char d,double c){
	if(b=="agua"){
		if (d=='m'){
			return c*5.30;
		}else if(d=='p'){
			return c*5.00;
		}else{
			return c*(5.80*2);
		}
	}else if(b=="azucar"){
		if (d=='m'){
			return c*1000;
		}else if(d=='p'){
			return c*800;
		}else{
			return c*1500;
		}
	}else if(b=="jugo"){
		if (d=='m'){
			return c*5.655;
		}else if(d=='p'){
			return c*5.400;
		}else{
			return c*12.000;
		}
	}else{
		if (d=='m'){
			return c*61;
		}else if(d=='p'){
			return c*57;
		}else{
			return c*126;
		}
	}
}

int inflacion(float a){
	return (a*0.25)+a;
}


int redondeo_multi10(int a){
	while ((a%10)!=0){
		a+=1;
	}
	return a;
}


int porcentajes(int a, float b){
	return a*b;
}
