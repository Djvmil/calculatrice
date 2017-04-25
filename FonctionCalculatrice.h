#include<stdio.h>

int rech_1erPosCar(char nombre[], char car)//"1"Fonction qui permet de rechercher un caratere et retourner sa posision, qui est utiliser dans la fonction ControleOperation
{
    int i,j;
    for(i=0; nombre[i]; i++)
    {
        if(nombre[i]==car)
            return i;
    }
    return -1;
}

int ControleOperation(char chaine[])
{
int i,j;
    if(chaine[0]!='/' && chaine[0]!='*')
        for(i=0;chaine[i];i++)
        {
            if(rech_1erPosCar("0123456789/*-+% ",chaine[i])==-1)
                return 0;
        }
    else
        return 0;
return 1;
}

int OccurrenceMD(char chaine[])
{
int i,j;
    for(i=0;chaine[i];i++)
    {
        if(chaine[i]=='/' && chaine[i+1]=='*' || chaine[i]=='*' && chaine[i+1]=='/')
                return 0;
    }
return 1;
}

int convertVersEntier(char chaine[])//Fonction qui permet de convertir un nombre de type char a un nombre de type int
{
    int i,nombre=0;
    for(i=0; chaine[i]; i++)
    {
        nombre=nombre*10+chaine[i]-48;
    }
    return nombre;
}
