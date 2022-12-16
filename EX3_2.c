#include<stdio.h>
#include<stdlib.h>

int main()
{
 int i,n,temp;
 
 printf("Taille du tableau "); 
 scanf("%d",&n);
 int t[n];
 
 for(i=0;i<n;i++)
 {
 printf("t[%d]= ",i);
 scanf("%d",&t[i]);
 }
 
 i=0;
 while(i<n/2)
 {
 temp = t[i];
 //n-1 parce que le tableau commence par 0
 t[i]=t[n-1-i];
 t[n-1-i]=temp;
 i++;
 }
 
 printf("\nTableau inverse: \n");
 for(i=0;i<n;i++)
 {
 printf("\nt[%d]=%d",i,t[i]);
 }
}