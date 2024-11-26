#include <stdio.h>
#include <math.h>

int main() {
    int a; 
	int b; 
	int c;
	int dt;
    printf("nhap a : ");
    scanf("%d",&a);
    
    printf("nhap b : ");
    scanf("%d",&b);
    printf("nhap c : ");
    scanf("%d",&c);
    float x1,x2;
    if (a==0){
        if(b!=0){
            x1=-(float)c/(float)b;
            printf("nghiem cua phuong trinh %dx^2 + %dx + %d = 0 la %f\n",a ,b ,c ,x1 );
        }else{
            if(c==0){
                printf("phuong trinh vo so nghiem");
            }else{
                printf("phuong trinh vo nghiem");
            }
        }
    }else if(a!=0){
        dt = b*b-4*a*c;
        if(dt==0){
            x1=-b/2*a;
            printf("phuong trinh co 1 nghiem kep la %f\n",x1);
        }else if(dt >0){
            x1=(-b+sqrt(dt))/2*a;
            x2=(-b-sqrt(dt))/2*a;
            printf("phuong tr?nh co 2 nghiem x1 = %f v? x2 = %f\n", x1 ,x2);
        }else if (dt<0){
            printf("phuong trinh vo nghiem");
        }
    }

    return 0;
}
