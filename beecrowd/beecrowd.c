/*#include<stdio.h>
int main()
{
 double A,n=3.14159,R;
 scanf("%lf",&R);
 A=n*R*R;
 printf("A=%.4lf\n",A);

    return 0;
}
*/


/*#include<stdio.h>
int main(){
 int A,B,SOMA;
 scanf("%d%d",&A,&B);
 SOMA=A+B;
 printf("SOMA = %d\n",SOMA);

 return 0;
}
*/



/*#include<stdio.h>
int main()
{
    float A,B,C;

    scanf("%f%f%f",&A,&B,&C);
    printf("MEDIA = %.1f\n",(A*2+B*3+C*5)/(2+3+5));
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);

    printf("DIFERENCA = %d\n",(A * B - C * D));

    return 0;

}
*/

/*#include<stdio.h>
int main()
{
    int NUMBER ,hours;
    float SALARY,amount;

    scanf("%d%d%f",&NUMBER,&hours,&amount);

    SALARY=hours*amount;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,SALARY);

    return 0;



}
*/
/*
    #include <stdio.h>
    int main()
    {
         int  b;
         double c, res;
         scanf("%d %lf",  &b, &c);
         res = b * c;
         scanf("%d %lf",&b, &c);
         res += b * c;
         printf("VALOR A PAGAR: R$ %.2lf\n", res);
         return 0;
    }
    */

/*
#include<stdio.h>
int main()
{
    int food;
    double vat,total;

    printf("enter price and vat");
    scanf("%d %lf",&food,&vat);
    total=food*vat;//5.30
    printf("\nenter 2nd price and vat");
    scanf("%d %lf",&food,&vat);
    total+=food*vat;//10.20

    printf("%.2lf",total);

    return 0;
}
*/

//beecrowd | 1021
/*#include<stdio.h>

int main(){
double N;
scanf("%lf",&N);

N=N*100;

int integerN=N;

printf("NOTAS:%d\n",integerN);
}
*/

//beecrowd | 1035
/*
#include<stdio.h>

int main()
{
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);

    if(B>C && D>A && (C+D)>(A+B) && C>0 && D>0 && A%2==0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}
*/
//beecrowd | 1036
/*
#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C,cal,R1,R2;

    scanf("%lf %lf %lf",&A,&B,&C);

    cal=(B*B)-(4*A*C);

    if(A==0 || cal<0)
        printf("Impossivel calcular\n");
    else{
        R1=(-B+sqrt(cal))/(2*A);
        R2=(-B-sqrt(cal))/(2*A);

        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }

    return 0;
}
*/

//beecrowd | 1037

#include<stdio.h>

int main()
{
 float n;
 scanf("%f", &n);

 if(n < 0 || n > 100){
  printf("Fora de intervalo\n");
 }else{
  if(n >= 0 && n <= 25){
   printf("Intervalo [0,25]\n");
  }else if(n > 25 && n <= 50){
   printf("Intervalo (25,50]\n");
  }else if(n > 50 && n <= 75){
   printf("Intervalo (50,75]\n");
  }else{
   printf("Intervalo (75,100]\n");
  }
 }

 return 0;
}
