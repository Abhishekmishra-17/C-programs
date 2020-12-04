#include<stdio.h>

#include<string.h>

#include<stdlib.h>
main()
{
 char *octalNum[]=
{
"000","001","010","011","100","101","110","111"
}
;
 int i=0,number,j=1;
 long long int octal,temp;
 char binary[20][6];
 printf("Enter Octal number\n");
 scanf("%lld",&octal);
 temp=octal;
 while(temp!=0) 
{
 number=temp%10;
 if(number>=0 && number<=7) 
{
 strcpy(binary[i],octalNum[number]);
 temp/=10;
 i++;
 
}
 else 
{
 printf("Invalid Octal Number\n");
 exit(0);
 
}
 
}
 printf("Binary number for given Octal number %lld is\n",octal);
 for(j=i-1;j>=0;j--) printf("%s",binary[j]);
 printf("\n");

}
 

Method II:Limited number of digits Maximum only 4 


#include<stdio.h>

#include<math.h>
int ConvertFromDecimalToOther(int,int);
int ConvertFromOctaltoDecimal(int);
int main()
{
 int binary,decimal,octal;
 printf("Enter Octal Number\n");
 scanf("%d",&octal);
 decimal=ConvertFromOctaltoDecimal(octal);
 binary=ConvertFromDecimalToOther(decimal,2);
 printf("Binary Number for given Octal Number %d is %d\n",octal,binary);
 return(0);

}
int ConvertFromDecimalToOther(int decimal,int num)
{
 int temp,final=0,i,j=1;
 temp=decimal;
 while(temp!=0) 
{
 i=temp%num;
 final=final+(i*j);
 temp=temp/num;
 j=j*10;
 
}
 return(final);

}
int ConvertFromOctaltoDecimal(int octal)
{
 int dec=0,temp,i,inc=0;
 temp=octal;
 while(temp!=0) 
{
 i=temp%10;
 dec=dec+(i*pow(8,inc));
 temp=temp/10;
 inc++;
 
}
 return(dec);

}
 

