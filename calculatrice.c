#include"FonctionCalculatrice.h"

int main()
{
char operation[101];
int i=0,j,operation1[100],nombre=0,div,multi,pos,l;

j=0;
    do
    {
        printf("saisir votre operation:\n");
        gets(operation);
    } while(ControleOperation(operation)==0 || OccurrenceMD(operation)==0);

    do
    {
        if(operation[i]!='/' && operation[i]!='*' && operation[i]!='-' && operation[i]!='+' && operation[i]!=' ' && operation[i]!='\0' )
            nombre=nombre*10+operation[i]-48;

        else
        {

            /*if(operation[i]==' ' && operation[i+1]==' ')*/
            operation1[j]=nombre; nombre=0; j++;
        }
        i++;
    }while(operation[i]);
    operation1[j]=nombre;

        while(Rech_Op(operation,'/')!=-1 || Rech_Op(operation,'*')!=-1)
        {
            if(Rech_Op(operation,'/')!=-1)
            operation1[pos-1]=operation1[pos-1]/operation1[pos];

            if(Rech_Op(operation,'*')!=-1)
            operation1[pos-1]=operation1[pos-1]*operation1[pos];
        }

        while(Rech_Op(operation,'+')!=-1 || Rech_Op(operation,'-')!=-1)
        {
             if(Rech_Op(operation,'+')!=-1)
            operation1[pos-1]=operation1[pos-1]+operation1[pos];

             if(Rech_Op(operation,'-')!=-1)
            operation1[pos-1]=operation1[pos-1]+operation1[pos];
        }

        for(i=0;i<5;i++)
        {
            printf("%d\t",operation1[i]);
        }

}
