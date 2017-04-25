#include"FonctionCalculatrice.h"

int main()
{
char operation[101];
int i=0,j,operation1[100],nombre=0;

j=0;
    do
    {
        printf("saisir votre operation:\n");
        gets(operation);
    } while(ControleOperation(operation)==0 || OccurrenceMD(operation)==0);

    do
    {
        if(operation[i]!='/' && operation[i]!='*' && operation[i]!='-' && operation[i]!='+' && operation[i]!='%' && operation[i]!=' ' && operation[i]!='\n' )
            nombre=nombre*10+operation[i]-48;

        else
        {
            /*if(operation[i]==' ' && operation[i+1]==' ')*/
            operation1[j]=nombre; nombre=0; j++;
        }
        i++;
    }while(operation[i]);


    for(i=0;i<j+1;i++)
    {
        printf("%d\t",operation1[i]);
    }

}
