#include<stdio.h>
#include<stdlib.h>//for matrix multiplication ,for exit success

int hcf(int,int);
int fact (int);
int prime (int);
int fab(int);
int pow (int,int);
int binary(int);
void iden_diagonal_matrix();
void grt_and_small_num();
void mul_table_upto_n();
void armstrong();
void lctuc();
void conc(char*,char*);
int compareStrings(char* x, char* y);
int arrayMax(int*,int);
int arrayMin(int*,int);


int binary(int bin){
  int rem=0,dec=0,wt=1;
  while(bin){
    rem=bin%10;
    dec=dec+rem*wt;
    bin=bin/10;
    wt=wt*2;
    }
  return dec;
}
int decimal(int);
int decimal(int num){
    int rem=0,bin=0,place=1;
    while(num){
        rem=num%2;
        bin=bin+rem*place;
        place*=10;
        num=num/2;
    }
    return bin;
}
void year();
void year(int yr){
   int result;
    if(yr%4==0)
    {
      if(yr%100!=0){
         printf("leap year!");
      }
      else{
         if(yr%400==0){
            printf("leap year");
         }
      }}
      else
         printf("not leap year");   

    return(result);
}

void iden_diagonal_matrix(){
  int f=0,i,j,r1,c1,a[10][10];
printf("enter order of matrix:");
scanf("%d %d",&r1,&c1);
if(r1==c1){
printf("enter elements:");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
  for(i=0;i<r1;i++){
   for(j=0;j<c1;j++){
     if(i==j){
      if(a[i][j]==1)
       continue;
      else{
          f=2;
    }
    }
    else{
    if(a[i][j]!=0){
      f=1;
      break;
    }
    else{
      continue;
    }
    }
    
}
}
if(f==0){
  printf("Identity as well as diagonal matrix");}

else if(f==2){
  for(i=0;i<r1;i++){
   for(j=0;j<c1;j++){
      if(a[i][j]!=0){ 
           f=3;
           break;
         }
      else{
           continue;
          }
       }
     }
   if(f==3)
    printf("Not identity matrix but it is diagonal matrix");
   
   
     }
     printf("niether identity nor diagonal matrix, but it's a sqr matrix");
}
else{
  printf("It is not even a square matrix ");
}
}

void grt_and_small_num(){
   int a,b,c,d,e,f,g,h,i,j;
    printf("Enter Four nos:");
    scanf("%d %d %d %d",&a,&b,&c,&h);
    d=(a>b)?a:b;
    e=(h>c)?h:c;
    i=(d>c)?d:e;

    printf("greatest no is:");
    printf("%d\n",i);
    f=(a<b)?a:b;
    g=(h<c)?h:c;
    j=(f<g)?f:g;

    printf("smallest no is:");
    printf("%d",j);
}
void mul_table_upto_n(){  
  int num;
  printf("enter no upto which u need mul table\n");
    scanf("%d",&num);
  for(int i=1;i<=num;i++){
      for(int j=1;j<=10;j++){
          printf("%dx%d =%d\n",i,j,i*j);
      }
      printf("\n");
  }
}
void armstrong(){
     int a,rem,i=1,c,b,d,as,e;
    printf("enter ur number:");
    scanf("%d",&a);
    
    while(i<=a){
        int  p=0;
        e=i;
        while(e){
            e/=10;
            p++;
        }
        as=0;
        b=i;//0//
        d=i;
        while(d){    
            rem=d%10;
            c=pow(rem,p);
            as=as+c;
            d/=10;
        
        }
        if(as==b){
            printf("%d\n",as);
        }
        else{
            printf("");
        }
        i++;
}
}
void lctuc(){
      char ch[10];

    printf("enter ur string:");
    gets(ch);
    for(int i=0;ch[i]!=NULL;i++){

    if(ch[i]>=65 && ch[i]<91)
    ch[i]=ch[i]+32;
    else
    ch[i]=ch[i]-32;
    }

    printf("converted form is %s",ch);
        return 0;
}
void conc(char s1[],char s2[]){
    char *p1,*p2;
    p1=s1;
    while (*p1!='\0')
    {
        p1++;
    }
    p2=s2;
    while (*p2!='\0')
    {
      *p1=*p2;
      p1++;
      p2++;
    
    }
    *p1='\0';
      
    printf("res is:%s",s1); 
    }

int compareStrings(char* x, char* y)
{

    int flag = 0;
    // Iterate a loop till the end
    // of both the strings
    while (*x != '\0' || *y != '\0') {

        if (*x == *y) {

            x++;
            y++;

        }
        // If two characters are not same

        // print the difference and exit

        else if ((*x == '\0' && *y != '\0')

                 || (*x != '\0' && *y == '\0')

                 || *x != *y) {

            flag = 1;
            break;

        }
         
    }
       return flag;
}

    int arrayMax(int arr[],int size){
    int max;

    max=arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
    }

    int arrayMin(int arr[],int size){
    int min;

    min=arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
    }
void butt(){
  printf("BUTTERFLY \n");
    for(int i=0;i<5;i++){
      for(int j=0;j<=(i-1);j++){
       printf("*");}
     
     for(int j=i;j<=5;j++){
        printf(" ");}
      
    for(int j=i;j<=3;j++){
        printf(" ");}
     
   for(int j=0;j<=(i-1);j++){
     printf("*");}
    printf("\n");
    }
  
    
     for(int i=0;i<5;i++){
      for(int j=i;j<5;j++){
     printf("*");}
    
    
    for(int j=0;j<i;j++){
        printf(" ");}
      
    for(int j=0;j<(i);j++){
        printf(" ");}
     
   for(int j=i;j<5;j++){
     printf("*");}
    printf("\n");
    }
    return 0;
}

void patt_digits(){
  int num,k=1,t=1,num1,num2;
    printf("enter no of rows\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i);}
        printf("\n");
    }

    printf("enter no of rows\n");
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k++);}
        printf("\n");}

    printf("enter no of rows\n");
    scanf("%d",&num2);
    for(int i=1;i<=num2;i++){
        for(int s=i;s<num2;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",t++);}
        printf("\n");}

    //FLOYD TRIANGLE//
    int n,p,q;
    printf("enter no of rows");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            if(i%2==0){
                p=1;q=0;
            }
            else{
                 p=0;q=1;
            }
            for(int j=1;j<=i;j++){
                if(j%2==0){
                    printf("%d ",p);}
                else{
                    printf("%d ",q);
                }
            }
            printf("\n");
        }
}
void diamond(){
  int n;
    char any;
    printf("enter no .of rows\n");
    scanf("%d",&n);
    printf("enter the type of character");
    scanf(" %c",&any);
    if(n%2==0){
    for(int i=1;i<=n/2;i++){
    for(int j=i;j<=n/2;j++){
    printf(" ");}
    for(int j=1;j<=i;j++){
    printf("%c",any);}
    for(int j=1;j<i;j++){
    printf("%c",any);
    }
    printf("\n");
    }
    for(int i=1;i<=n/2;i++){
    for(int j=1;j<=i;j++){
    printf(" ");}
    for(int j=i;j<n/2;j++){
    printf("%c",any);}
    for(int j=i;j<=n/2;j++){
    printf("%c",any);
    }
    printf("\n");
    }
    }
    else{

    for(int i=1;i<=(n/2)+1;i++){
    for(int j=i;j<=n/2;j++){
    printf(" ");}
    for(int j=1;j<=i;j++){
    printf("%c",any);}
    for(int j=1;j<i;j++){
    printf("%c",any);
    }
    printf("\n");
    }
    for(int i=1;i<=(n/2);i++){
    for(int j=1;j<=i;j++){
    printf(" ");}
    for(int j=i;j<n/2;j++){
    printf("%c",any);
    }
    for(int j=i;j<=n/2;j++){
    printf("%c",any);
    }
    printf("\n");
    }
    }
    }
void transpose(){
    int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
  }

  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++) {
      printf("%d  ", a[i][j]);
      if (j == c - 1)
      printf("\n");
    }

  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++) {
      transpose[j][i] = a[i][j];
    
    }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; i++)
    for (int j = 0; j < r; j++) {
      printf("%d  ", transpose[i][j]);
      if (j == r - 1)
      printf("\n");
    }
  return 0;
}

int mul(int,int,int,int);

int mul(int r1,int c1,int r2,int c2){


int **mat1, **mat2,**res,i,j;
if(c1!=r2){
    printf("Invalid Order of matrix");
    exit(EXIT_SUCCESS);
}

mat1= (int**) malloc(r1*sizeof(int*));

for(i=0;i<c1;i++)
    mat1[i]=(int*)malloc(c1*sizeof(int));

mat2= (int**) malloc(r2*sizeof(int*));

for(i=0;i<c2;i++)
    mat2[i]=(int*)malloc(c2*sizeof(int));

res=(int**)malloc(r1*sizeof(int*));

for(i=0;i<c2;i++)
    res[i]=(int*)malloc(c2*sizeof(int));

printf("enter element of 1st matrix:\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&mat1[i][j]);
printf("enter element of 2nd matrix:\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&mat2[i][j]);


printf("\n Entered Matrix 1: \n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++)
        printf("%d ",mat1[i][j]);
    printf("\n");
}

printf("\n Entered Matrix 2: \n");
for(i=0;i<r2;i++){
    for(j=0;j<c2;j++)
        printf("%d ",mat2[i][j]);
    printf("\n");
}       

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
                res[i][j]=0;
                for(int k=0;k<c1;k++)
                    res[i][j] += mat1[i][k] * mat2[k][j];

        }
        printf("\n");
    }


   printf("\nThe Multiplication of two matrix is\n");
   for(i=0;i<r1;i++){
       printf("\n");
       for(j=0;j<c2;j++)
            printf("%d\t",res[i][j]);   
   }
    printf("\n");



return 0;
}

int main()
{
int choose;
float a,b,result;
int n1,n2,bin,yr;
int num;
int size,arr[100];
int r1,c1,r2,c2;
char str[20];
char s1[10],s2[10];
char s3[10],s4[10];
char ch='y';
while (ch!='n')
{ 
printf("choose operation:\n'1' For addition\n'2' For subtraction\n'3' For multiplication\n'4' For division\n'5' For hcf\n'6'To find factorial\n'7' To check if number is prime\n'8' For fibonacci series\n'9' To find nth power of a given number\n'10' To check if given string is palindrome\n'11' To convert binary to decimal\n'12' To convert decimal to binary\n'13' To check if given year is leap year\n'14' To check if given matrix is identity,diagonal or square matrix\n'15' To check greatest and smallest between 4 numbers\n'16' To find multiplication table upto 'n'  numbers\n'17' For printing armstrong numbers upto nth number\n'18' To convert Lcase of ur alphabet to uppercae and Ucase to lcase\n'19'For concatenate two strings\n'20'For comparing two strings\n'21' For finding greatest and smallest number in a array\n'22' For printing butterfly pattern\n'23'For entering into pattern of digits\n'24'For Diamond pattern\n'25' For finding transpose of matrix\n'26'For multiplying two matrix\n");
scanf(" %d",&choose);
switch(choose){
case 1:
  printf("enter two numbers:");
  scanf("%f%f",&a,&b);
  result=a+b;
  printf("%f",result);
  break;
case 2:
printf("enter two numbers:");
scanf("%f%f",&a,&b);
 result=a-b;
 printf("%f",result);
 break;
case 3:
printf("enter two numbers:");
scanf("%f%f",&a,&b);
 result=a*b;
 printf("%f",result);
 break;
case 4:
printf("enter two numbers:");
scanf("%f%f",&a,&b);
 result=a/b;
 printf("%f",result);
 break;
case 5:

  printf("enter two numbers:");
  scanf("%d%d",&n1,&n2);
  if(n1>n2){
    result=hcf(n1,n2);
  }
  else{
    result=hcf(n2,n1);
    printf("%d",result);
  }
  break;
case 6:
  printf("Enter ur number");
  scanf("%d",&num);
  result= fact(num); 
  printf("factorial of %d is %d",num,result);
break;
case 7:
  printf("Enter ur number");
  scanf("%d",&num);
  int res=prime(num);
    if(res==0)
      printf("\n%d IS A PRIME NUMBER",num);
    else
      printf("\n%d IS NOT A PRIME NUMBER",num);
break;
case 8:
  printf("Enter upto which term you want fabonacci series:");
  scanf("%d",&num);
  result=fab(num); 
break;
case 9:
  printf("enter ur nos");
  scanf("%d %d",&n1,&n2);
  num=pow(n1,n2);
  printf("%d",num);
break;
case 10:
  printf("enter a string or integer to check it is palindrome or not:\n");
  scanf("%s",str);
  result=pal(str);
  if (result==1)
    printf("not palindrome");
  else
    printf("palindrome");
break;
case 11:
  printf("enter your binary number:");
  scanf("%d",&bin);  
  printf("decimal equivalent is:%d",binary(bin));
break;
case 12:
  printf("enter your decimal number:" );
  scanf("%d",&num);
  printf("binary equivalent is:%d",decimal(num));
break;
case 13:
  printf("enter your year:");
  scanf("%d",&yr);
  year(yr);
break; 
case 14:
  iden_diagonal_matrix();
  break;
case 15:
  grt_and_small_num();
  break;
case 16:
  mul_table_upto_n();
  break;
case 17:
  armstrong();
  break;
case 18:
  lctuc();
  break;
case 19:
  
  printf("enter strings to concatenate\n");
  printf("enter 1st:");
  gets(s1);
  printf("enter 2nd:");
  gets(s2);
  conc(s1,s2);
case 20:
  
  printf("enter strings to compare\n");
  printf("enter 1st:");
  gets(s3);
  printf("enter 2nd:");
  gets(s4);
  res=compareStrings(s3,s4);

  if(res==0){
      printf("\n eql strings");
  }
  else{
      printf("\n non eql strings");
  }
  break;
case 21:
printf("enter size of array:");
    scanf("%d",&size); 
    for(int i=0;i<size;i++){
        printf("enter your numbers:");
        scanf("%d",&arr[i]);
    }
    printf("biggest element is:%d",arrayMax(arr,size));
    printf("smallest element is:%d",arrayMin(arr,size));
break;
case 22:
    butt();
break;
case 23:
   patt_digits();
   break;
case 24:
    diamond();
    break;
case 25:
  transpose();
  break;
case 26:
   
printf("\nEnter the Order of the First matrix...\n");
scanf("%d %d",&r1,&c1);
printf("\nEnter the Order of the Second matrix...\n");
scanf("%d %d",&r2,&c2);
mul(r1,c1,r2,c2);
  break;
  } 
printf("\nPress 'y' to do again or press'n' to exit:");  
scanf(" %c",&ch);
}


}
//HCF BY RECURSION
int hcf(a,b){
  int rem=a%b;
  if(rem==0){
    return b;
  }
  else{
    a=b;
    b=rem;
    return hcf(a,b);
}}

//FACTORIAL BY RECURSION CODE
int fact(n){
  
   int i;
   if(n==0)
     return 1;
   else
     return n*fact(n-1);
}
//PRIME NUMBER CHECK
int prime(num){
	for(int i=2;i<=num/2;i++)
	{
		if(num%i!=0)
			continue;
		else
			return 1;
	}}
int fab(int term){
  int i=1,x=1,f,series=0,y;
  while(i<=term){

    printf("%d\n",series);
    y=x+series;
    x=series;
    series=y;

    i++;
}
return(f);

}
int pow(int n,int p)
{
  if (p==0)
    return 1;
  else
    return n*pow(n,p-1);
}
int pal(char *str){
    int i=0,j=0,flag=0;
    while(str[j]!='\0'){
      j++;
     }
    j--;
    while(str[i]!='\0'){
      if(str[i]!=str[j]){
      return 1 ;
      }
    i++;
    j--;
   } 
  return 0;
 }


