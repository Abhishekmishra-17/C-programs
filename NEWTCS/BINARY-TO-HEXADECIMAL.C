#include<stdio.h>

#include<string.h>
main()
{
 int binaryNum[]=
{
0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111
}
,j=0,i;
 char hexa[20]="";
 unsigned long long int binary,number,temp;
 printf("Enter Binary number\n");
 scanf("%llu",&binary);
 temp=binary;
 while(temp!=0) 
{
 number=temp%10000;
 for(i=0;i<=15;i++) 
{
 if(binaryNum[i]==number) 
{
 if(i<=9) hexa[j]=(i+'0');
 //i+'0' to convert integer to string else hexa[j]=(i+55);
 j++;
 
}
 
}
 temp/=10000;
 
}
 hexa[j]='\0';
 strrev(hexa);
 printf("Octal number for given Binary number %llu is %s\n",binary,hexa);

}
 

Method II: 


#include<stdio.h>

#include<string.h>

#include<math.h>

#include<ctype.h>
int ConvertFromBinarytoOther(unsigned long long int,int);
char *ConvertFromDecimalToHexa(int,int);
int main()
{
 char final[20];
 unsigned long long int binary,decimal;
 printf("Enter Binary Number\n");
 scanf("%llu",&binary);
 decimal=ConvertFromBinarytoOther(binary,2);
//Converting binary to decimal strcpy(final,ConvertFromDecimalToHexa(decimal,16));
//Converting Decimal to Hexa printf("HexaDecimal for given Binary %llu is %s\n",binary,final);
return(0);

}
char *ConvertFromDecimalToHexa(int decimal,int num)
{
 int temp,i,k=0;
 char final[20];
 temp=decimal;
 while(temp!=0) 
{
 i=temp%num;
 if(i>9) 
{
 final[k]=i+55;
 k++;
 
}
 else
{
 final[k]=(i+'0');
//To convert from integer to character add (number+'0') k++;
 
}
 temp=temp/num;
 
}
 final[k]='\0';
 return(strrev(final));

}
int ConvertFromBinarytoOther(unsigned long long int binary,int num)
{
 int i,inc=0,final=0;
 unsigned long long int temp;
 temp=binary;
 while(temp!=0) 
{
 i=temp%10;
 final=final+(i*pow(num,inc));
 temp=temp/10;
 inc++;
 
}
 return(final);

}
 

