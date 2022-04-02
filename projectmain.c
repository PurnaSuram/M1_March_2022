#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void recheck();
void Addition(){
    int a,b;
    printf("Enter two numbers to add\n");
    printf("Enter first number : \n");
    scanf ("%d",&a);
    printf("Enter second number : \n");
    scanf ("%d",&b);
    int res=a+b;
    printf ("Result is : %d",res);
}
void Subtraction(){
    int a,b;
    printf("Enter two numbers to subtract\n");
    printf("Enter first number : \n");
    scanf ("%d",&a);
    printf("Enter second number : \n");
    scanf ("%d",&b);
    int res=a-b;
    printf ("Result is : %d",res);
}
void Multiplication(){
    int a,b;
    printf("Enter two numbers to multiply\n");
    printf("Enter first number : \n");
    scanf ("%d",&a);
    printf("Enter second number : \n");
    scanf ("%d",&b);
    int res=a*b;
    printf ("Result is : %d",res);
}
void Division(){
    int a,b;
    printf("Enter two numbers to add\n");
    printf("Enter first number : \n");
    scanf ("%d",&a);
    printf("Enter second number : \n");
    scanf ("%d",&b);
    int res=a/b;
    printf ("Quotient is : %d\n",res);
    int rem=a%b;
    printf("Remainder is : %d",rem);
}
void sine(){
    float angle;
    printf("Enter the value of angle (In terms of degrees ex:- 45 ) : \n");
    scanf("%f",&angle);
    float rad=angle*(3.14159265358979323846/180.0);
    printf("Value is : %f",sin(rad));
}
void cosine(){
    float angle;
    printf("Enter the value of angle (In terms of degrees ex:- 45 ) : \n");
    scanf("%f",&angle);
    float rad=angle*(3.14159265358979323846/180.0);
    printf("Value is : %f",cos(rad));
}
void tangent(){
    float angle;
    printf("Enter the value of angle (In terms of degrees ex:- 45 ) : \n");
    scanf("%f",&angle);
    float rad=angle*(3.14159265358979323846/180.0);
    printf("Value is : %f",tan(rad));
}
void secant(){
    float angle;
    printf("Enter the value of angle (In terms of degrees ex:- 45 ) : \n");
    scanf("%f",&angle);
    float rad=angle*(3.14159265358979323846/180.0);
    printf("Value is : %f",cosh(rad));
}
void cosecant(){
    float angle;
    printf("Enter the value of angle (In terms of degrees ex:- 45 ) : \n");
    scanf("%f",&angle);
    float rad=angle*(3.14159265358979323846/180.0);
    printf("Value is : %f",sinh(rad));
}
void cotangent(){
    float angle;
    printf("Enter the value of angle (In terms of degrees ex:- 45 ) : \n");
    scanf("%f",&angle);
    float rad=angle*(3.14159265358979323846/180.0);
    printf("Value is : %f",tanh(rad));
}

void Dec_to_Bin(){
    int number;
    long long res = 0;
  int reminder, j = 1;
    printf("Enter a Decimal Number : \n");
    scanf("%d",&number);
  while (number!=0) {
    reminder = number % 2;
    number = number/ 2;
    res += reminder * j;
    j *= 10;
  }
  printf("Binary number = %lld",res);
}

void Dec_to_Oct(){
    int output = 0, j = 1;
    int input;
    printf("Enter a Decimal Number : \n");
    scanf("%d",&input);
    while (input != 0){
        output += (input % 8) * j;
        input = input/8;
        j *= 10;
    }

    printf("Octal value =  %d",output);
}
void Dec_to_Hex(){
    int input;
    printf("Enter a Decimal Number : \n");
    scanf("%d",&input);
    char res[100];
    int j=0,k=0;
    while (input!=0) {
        int temp=0;
        temp=input%16;
        if (temp < 10) {
            res[j]=temp+48;
            j++;
        }
        else {
            res[j]=temp+55;
            j++;
        }
        input=input/16;
    }
    printf("Hexa Decimal value : ");
    for (k=j-1;k>=0;k--)
        printf("%c",res[k]);
}
void Bin_to_Dec(){
    long long input;
    int output = 0, j = 0, reminder;
    printf("Enter value in Binary : \n");
    scanf("%lld",&input);
    while (input!=0) {
    reminder = input % 10;
    input /= 10;
    output += reminder * pow(2, j);
    ++j;
  }
  printf("Decimal value =  %d",output);
}
void Bin_to_Oct(){
    long long binary;
    printf("Enter value in Binary : \n");
    scanf("%lld",&binary);
    int octal=0,decimal=0,i=0;
    while(binary!=0) {
        decimal+=(binary%10)*pow(2, i);
        ++i;
        binary=binary/10;}
    i=1;
    while(decimal!=0){
        octal+=(decimal%8)*i;
        decimal=decimal/8;
        i*=10;}
    printf(" Octal value = %d",octal);
}
void Bin_to_Hex(){
    long int binary,hexadecimal=0,i=1,rem;
   printf("Enter value in Binary: ");
   scanf("%ld", &binary);
   while (binary!= 0){
      rem = binary % 10;
      hexadecimal=hexadecimal+rem*i;
      i=i*2;
      binary=binary/10;
   }
   printf("Hexadecimal value: %lX", hexadecimal);
}
void Oct_to_Dec(){
    int decimal=0,i=0;
    int octal;
    printf("Enter number to be converted : \n");
    scanf("%d",&octal);
    while(octal!= 0){
        decimal+= (octal%10)*pow(8,i);
        ++i;
        octal/=10;
    }
    i = 1;
    printf("Decimal nmber = %d",decimal);
}
void Oct_to_Bin(){
    int octal;
    printf("Enter value in Octal : \n");
    scanf("%d",&octal);
    int decimal=0,i = 0;
    long long binary = 0;
    while (octal!=0) {
        decimal+=(octal%10)*pow(8, i);
        ++i;
        octal=octal/10;
    }
    i = 1;
    while (decimal!= 0) {
        binary+=(decimal% 2)*i;
        decimal=decimal/2;
        i=i*10;
    }
    printf("Binary number = %lld",binary);
}
void Oct_to_Hex(){
 int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long octal, tempOctal, binary, place;
    char hex[65] = "";
    int rem;
    place = 1;
    binary = 0;
    printf("Enter value in Octal : ");
    scanf("%lld", &octal);
    tempOctal = octal;
    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;

        place *= 1000;
    }
    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }
    int len = strlen(hex); 
    int left = 0,i; 
    int right = len - 1; 
    for (i = left; i <right; i++)  
    {  
        char temp = hex[i];  
        hex[i] = hex[right];  
        hex[right] = temp;  
        right--;  
    }  
    printf("Hexadecimal number: %s", hex);
}
void Hex_to_Dec(){
    char hexi[17];
    long long decimalval, placed;
    int i=0, value, leng;
    decimalval=0;
    placed = 1;
    printf("Enter value in Hexa Decimal: ");
    scanf("%s",hexi);
    leng=strlen(hexi);
    leng--;
    for(i=0; hexi[i]!='\0'; i++)
    {
        if(hexi[i]>='0' && hexi[i]<='9')
        {
            value=hexi[i] - 48;
        }
        else if(hexi[i]>='a'&&hexi[i]<='f')
        {
            value=hexi[i]-97+10;
        }
        else if(hexi[i]>='A'&&hexi[i]<='F')
        {
            value=hexi[i]-65+10;
        }

        decimalval+= value*pow(16,leng);
        leng--;
    }
    printf("Decimal number = %lld", decimalval);
}
void Hex_to_Bin(){
    char hexNum[100];
	long int count=0;
	printf("Enter value in Hexa Decimal : ");
	scanf("%s",hexNum);
	printf("\nBinary Number is : ");
	while(hexNum[count])
	{
		switch(hexNum[count])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid Entry, Please Try Again  %c",hexNum[count]);
		}
		count++;
	}
}
void Hex_to_Oct(){
    char hex[17];
    long long octal, bin, place;
    int i = 0, rem, val;
    printf("Enter value in Hexa Decimal : ");
    scanf("%s",hex);
    octal = 0ll;
    bin = 0ll;
    place = 0ll;
    for(i=0; hex[i]!='\0'; i++)
    {
        bin = bin * place;

        switch(hex[i])
        {
            case '0':
                bin += 0;
                break;
            case '1':
                bin += 1;
                break;
            case '2':
                bin += 10;
                break;
            case '3':
                bin += 11;
                break;
            case '4':
                bin += 100;
                break;
            case '5':
                bin += 101;
                break;
            case '6':
                bin += 110;
                break;
            case '7':
                bin += 111;
                break;
            case '8':
                bin += 1000;
                break;
            case '9':
                bin += 1001;
                break;
            case 'a':
            case 'A':
                bin += 1010;
                break;
            case 'b':
            case 'B':
                bin += 1011;
                break;
            case 'c':
            case 'C':
                bin += 1100;
                break;
            case 'd':
            case 'D':
                bin += 1101;
                break;
            case 'e':
            case 'E':
                bin += 1110;
                break;
            case 'f':
            case 'F':
                bin += 1111;
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
        place = 10000;
    }
    place = 1;
    while(bin > 0)
    {
        rem = bin % 1000;

        switch(rem)
        {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            case 10:
                val = 2;
                break;
            case 11:
                val = 3;
                break;
            case 100:
                val = 4;
                break;
            case 101:
                val = 5;
                break;
            case 110:
                val = 6;
                break;
            case 111:
                val = 7;
                break;
        }

        octal = (val * place) + octal;
        bin /= 1000;

        place *= 10;
    }
    printf("Octal number = %lld", octal);
}

void calculator(){
    int requirement;
    int subRequirement;
    int subRequirement2;
    printf("1. Arithmetic \t 2.Trigonometry \t 3.Conversions \t 4.Exit \n");
    scanf("%d", &requirement);
    if(requirement==1){
            printf("1.Addition \t 2.Subtraction \t 3.Multiplication \t 4.Division\n");
            scanf("%d",&subRequirement);
            switch(subRequirement){
                case(1):
                    Addition();
                    recheck();
                    break;
                
                case (2):
                    Subtraction();
                    recheck();
                    break;
                
                case(3):
                    Multiplication();
                    recheck();
                    break;
                
                case (4):
                    Division();
                    recheck();
                    break;
            }
        
    }
    else if(requirement==2){
            printf(" Select your subRequirement \n 1.sin \t 2.cos \t 3.tan \t 4.cosec \t 5.sec \t 6.cot \n");
            scanf("%d",&subRequirement);
            switch(subRequirement){
                case(1):
                    sine();
                    recheck();
                    break;
                
                case(2):
                    cosine();
                    recheck();
                    break;
                
                case(3):
                    tangent();
                    recheck();
                    break;
                
                case (4):
                    cosecant();
                    recheck();
                    break;
                
                case (5):
                    secant();
                    recheck();
                    break;
                
                case(6):
                    cotangent();
                    recheck();
                    break;
            }
    }
    else if(requirement==3){
        printf("Select the type of value you have to enter : \n");
        printf("1.Decimal \t 2.Binary \t 3.Octal \t 4.HexaDecimal \n");
        scanf("%d",&subRequirement);
        if(subRequirement==1){
            printf("Select the type you want the number to be converted\n");
            printf("1.Binary \t 2.Octal \t 3.HexaDecimal \n");
            scanf("%d",&subRequirement2);
            if(subRequirement2==1){
                Dec_to_Bin();
                recheck();
            }
            else if(subRequirement2==2){
                Dec_to_Oct();
                recheck();
            }
            else if(subRequirement2==3){
                Dec_to_Hex();
                recheck();
            }
            else{
                printf("Please enter valid input [1-3]");
            }
        }
        if(subRequirement==2){
            printf("Select the type you want the number to be converted\n");
            printf("1.Decimal \t 2.Octal \t 3.HexaDecimal \n");
            scanf("%d",&subRequirement2);
            if(subRequirement2==1){
                Bin_to_Dec();
                recheck();
            }
            else if(subRequirement2==2){
                Bin_to_Oct();
                recheck();
            }
            else if(subRequirement2==3){
                Bin_to_Hex();
                recheck();
            }
            else{
                printf("Please enter valid input [1-3]");
            }
        }
        if(subRequirement==3){
            printf("Select the type you want the number to be converted\n");
            printf("1.Decimal \t 2.Binary \t 3.HexaDecimal \n");
            scanf("%d",&subRequirement2);
            if(subRequirement2==1){
                Oct_to_Dec();
                recheck();
            }
            else if(subRequirement2==2){
                Oct_to_Bin();
                recheck();
            }
            else if(subRequirement2==3){
                Oct_to_Hex();
                recheck();
            }
            else{
                printf("Please enter valid input [1-3]");
            }
        }
        if(subRequirement==4){
            printf("Select the type you want the number to be converted\n");
            printf("1.Decimal \t 2.Binary \t 3.Octal \n");
            scanf("%d",&subRequirement2);
            if(subRequirement2==1){
                Hex_to_Dec();
                recheck();
            }
            else if(subRequirement2==2){
                Hex_to_Bin();
                recheck();
            }
            else if(subRequirement2==3){
                Hex_to_Oct();
                recheck();
            }
            else{
                printf("Please enter valid input [1-3]");
            }
        }
    }
    else if(requirement==4){
        exit(0);
    }
    else{
        printf("Please enter valid input [1-4]");
    }
}

void recheck(){
    printf("\n");
    printf("What are your next steps \n");
    printf("1.Go back to calculator \t 2.Exit \n");
    int n;
    scanf("%d",&n);
    if(n==1){
        calculator();
    }
    else{
        printf("Exiting the program....\n");
        exit(0);
    }
}

int main() {
    calculator();
	return 0;
}
