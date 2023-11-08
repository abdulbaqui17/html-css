#include<stdio.h>
#include<windows.h>
void main(){
    int h,m,s;
    int d=1000;//we add a delay of 1000 milliseconds and we will use it in the function sleep
    printf("set time:00:00:00\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60){
        printf("ERROR!\n");
        exit(0);
    }
    while (1)//infinite loop
    {
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if (h>12)
        {
            h=1;
        }
        printf("\n Clock :");
        printf("%02d:%02d:%02d",h,m,s);
        Sleep(d);
        system("cls");
    }
    
}