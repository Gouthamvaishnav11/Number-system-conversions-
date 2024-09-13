// write  a program to number system conversion project
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// declaration of function
//void design();
void dec_to_bin();
void bin_to_dec();
void dec_to_oct();
void oct_to_dec();
void bin_to_hex();
void hex_to_bin();
// defination of function

// Defination of decimal to binary
    void dec_to_bin(){
    int n,ar[50],i=0,r;
    printf("\nEnter the decimal number :");
    scanf("%d",&n);
    while(n!=0){
      r=n%2;
      n=n/2;
      ar[i]=r;
      i++;
     }
    i--;
    printf("\nBinary number is:");
    while(i>=0){
     printf("%d",ar[i]);
      i--;
      
    }
    printf("\n");
  }
  // defination of binary to decimal
  void bin_to_dec(){
    int n,dn=0,base=1,rem;
    printf("\nEnter the binary number :");
    scanf("%d",&n);
    while(n!=0){
      rem=n%10;
      dn=dn+rem*base;
      base=base*2;
      n=n/10;
   }
    printf("\nDecimal number is:%d\n",dn);
  }
  // Defination  decimal to octal
void dec_to_oct(){
  int n,ar[50],i=0,r;
  printf("\n Enter a decimal number :");
  scanf("%d",&n);
  while(n!=0){
    r=n%8;
    n=n/8;
    ar[i]=r;
    i++;
  }
  i--;
  printf("\n Octal number is:");
  while(i>=0){
    printf("%d",ar[i]);
    i--;
     }
  printf("\n");
}
// Defination of octal to decimal
void oct_to_dec(){
  int n,dn=0,base=1,rem;
  printf("\n Enter a octal nimber:");
  scanf("%d",&n);
  while(n!=0){
    rem=n%10;
    dn=dn+rem*base;
    base=base*8;
    n=n/10;
  
    }
  printf("\n Decimal number is:%d\n",dn);
  
  
}
//Defination of binary to hexadecimal
void bin_to_hex(){
  int n,ar[50],i=0,r;
  printf("\n Enter a binary number:");
  scanf("%d",&n);
  while(n!=0){
    r=n%16;
    n=n/16;
    ar[i]=r;
    i++;
   }
  i--;
  printf("\n Hexadecimal number is:");
  while(i>=0){
    switch(ar[i]){
      case 10:
      printf("A");
      break;
      case 11:
      printf("B");
      break;
      case 12:
      printf("C");
      break;
      case 13:
      printf("D");
      break;
      case 14:
      printf("E");
      break;
      case 15:
      printf("F");
      break;
      default:
      printf("%d",ar[i]);
  }
    i--;
}
  printf("\n");
}
//  Defination of hexadecimal to binary
void hex_to_bin(){
  char n[100];
  int i,len,ar[100],j=0,r;
  printf("\n Enter a hexdecimal number:");
  scanf("%s",n);
  len=strlen(n);
  for(i=len-1;i>=0;i--){
    switch(n[i]){
      case 'A':
      ar[j]=10;
      break;
      case 'B':
      ar[j]=11;
      break;
      case 'C':
      ar[j]=12;
      break;
      case'D':
      ar[j]=13;
      break;
      case 'E':
      ar[j]=14;
      break;
      case 'F':
      ar[j]=15;
      break;
      default:
      ar[j]=n[i]-48;
      j++;
     } 
  }
  for(i=0;i<j;i++){
    r=ar[i]*pow(16,i);
    printf("%d",r);
    }
  printf("\n");
}

int main(){
  int choice;
  char *result;
  
  while(1){
    printf("\n1.Binary to decimal\n");
    printf("\n2.Decimal to  Binary\n");
    printf("\n3.decimal to  Octal\n ");
    printf("\n4.Octal to Decimal\n");
    printf("\n5.Binary to Hexadecimal\n");
    printf("\n6.Hexadecimal to Binary\n");
    printf("\n7.Exit\n");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    
    switch(choice){
      case 1:
      dec_to_bin();
       break;
       case 2:
      bin_to_dec();
      printf(""); 
      break;
      case 3:
      dec_to_oct();
      break;
      case 4:
      oct_to_dec();
      break;
      case 5:
      bin_to_hex();
      break;
      case 6:
      hex_to_bin();
      break;
      case 7:
      exit(0);
      break;
      default:
      printf("\n GOOD BYE\n");
      
      
    }
    
  }
  
}
