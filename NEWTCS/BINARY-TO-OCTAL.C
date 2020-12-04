#include<stdio.h>
main()
{
 int octalNum[]=
{
0,1,10,11,100,101,110,111
}
;
 long int binary,i,number,temp,octal=0,j=1;
 printf("Enter Binary number\n");
 scanf("%ld",&binary);
 temp=binary;
 while(temp!=0) 
{
 number=temp%1000;
 for(i=0;i<=7;i++) 
{
 if(octalNum[i]==number) 
{
 octal=octal+(i*j);
 
}
 
}
 j*=10;
 temp/=1000;
 
}
 printf("Octal number for given Binary number %ld is %ld\n",binary,octal);

}
 

Method II: 


#include<stdio.h>

#include<math.h>
int ConvertFromBinarytoOther(int);
int ConvertFromDecimalToOther(int);
int main()
{
 int final,num,binary,decimal;
 printf("Enter Binary Number\n");
 scanf("%d",&binary);
 decimal=ConvertFromBinarytoOther(binary);
//Converting binary to decimal final=ConvertFromDecimalToOther(decimal);
//Converting decimal to octal //So binary to Octal printf("Octal number of Binary number %d is %d\n",binary,final);
return(0);

}
int ConvertFromDecimalToOther(int decimal)
{
 int temp,i,j=1,final=0;
 temp=decimal;
 while(temp!=0) 
{
 i=temp%8;
 final=final+(i*j);
 temp=temp/8;
 j=j*10;
 
}
 return(final);

}
int ConvertFromBinarytoOther(int binary)
{
 int final=0,i,inc=0,temp;
 temp=binary;
 while(temp!=0) 
{
 i=temp%10;
 final=final+(i*pow(2,inc));
 temp=temp/10;
 inc++;
 
}
 return(final);

}
 

