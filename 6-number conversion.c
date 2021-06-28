#include<stdio.h>
double BinToDec(char b[50])
{
	int i=0,p=0,l;
	double DecimalPart = 0, FractionalPart = 0, power = 1,res;
	l=strlen(b);
	
	while(b[i]!='\0')
	{
		if(b[i]=='.')
		{
			p=i;
		}
		++i;
	}

	// for the Whole part
    for (i = p-1; i>=0; --i)
    {
        DecimalPart += (b[i] - '0') * power;
        power *= 2;
    }
 
	//For the fractional part
    power = 2;
    for (i = p+1; i < l; ++i)
    {
        DecimalPart += (b[i] - '0') / power;
        power *= 2.0;
    }
    
    res=DecimalPart + FractionalPart;
    return res;
}

double DecToOct(int n,float f)
{
	double binaryTotal, binaryFrac = 0.0, fracFractor = 0.1;
	int binaryint=0;
	int rem,temp,i=0;
	
	//For the whole part
    while (n != 0) {
        rem = n % 8;
        binaryint = binaryint + rem *pow(10, i);
        n = n / 8;
        i++;
    }
    
    //For the fractional part
    while (f != 0) 
	{
    	f = f * 8;
        temp = f;
        binaryFrac = binaryFrac + fracFractor * temp;
        if (temp >0)
            f = f - temp;

        fracFractor = fracFractor / 10;
    }
    return binaryint+binaryFrac;
}


double BinToOct(char bin[50])
{
	double decimal,fractional,octal;
	int whole;
	decimal=BinToDec(bin);
	
	//Splitting the fractional part and the whole part
	whole=decimal;
	fractional=decimal-whole;
	
	octal=DecToOct(whole,fractional);
	return octal;	
}

int main()
{
	char bin[50],oct[50];
	printf("Enter a Binary number : ");
	scanf("%s",bin);
	printf("The Corresponding Octal is : %lf ",BinToOct(bin));
	printf("\n\n\n");	
	printf("The Corresponding Decimal is : %lf ",BinToDec(bin));
	printf("\n\n\n");
}

