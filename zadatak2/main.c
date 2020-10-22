#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    int brGost;
    char imePice[100];
    float apetit;
}zeljeno;

typedef struct
{
    float brPar;
    unsigned int brCelih;
    char imePice[100];
}porudzbina;

int main()
{
    FILE *f1,*f2;
    f1=fopen("zeljeno.txt","r");
    f2=fopen("porudzbina.txt","w+");
    zeljeno z[100];
    int i=0,n;
    char c;
    while(1)
    {
        fscanf(f1,"%d",&z[i].brGost);
        fseek(f1,1,SEEK_CUR);
        fscanf(f1,"%s",z[i].imePice);
        fseek(f1,1,SEEK_CUR);
        fscanf(f1,"%f",&z[i].apetit);
        c=getc(f1);
        i++;
        n=i;
        if(c==EOF)
        {
            break;
        }
    }
    porudzbina p[100];
    float tmp;
    for(i=0;i<n;i++)
    {
        p[i].brPar=z[i].apetit*z[i].brGost;
        tmp=p[i].brPar/8;
        tmp=ceil(tmp);
        p[i].brCelih=tmp;
        strcpy(p[i].imePice, z[i].imePice);
    }
    for(i=0;i<n;i++)
    {
        fprintf(f2,"%.1f ",p[i].brPar);
        fprintf(f2,"%u ",p[i].brCelih);
        fprintf(f2,"%s\n",p[i].imePice);
    }
    return 0;
}
