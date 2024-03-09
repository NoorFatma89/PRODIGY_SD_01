//Program to convert temperatures between Celsius, Fahrenheit, and Kelvin scales.

#include<iostream>

class Temperature
{
    public:
        float celsiusToKelvin(float);
        float celciusToFehrenheit(float);
        float kelvinToCelsius(float);
        float kelvinToFahrenheit(float);
        float fahrenheitToCelsius(float);
        float fahrenheitToKelvin(float);
};

//Function to convert Temperature from Celsius to Kelvin scale
float Temperature::celsiusToKelvin(float celsiusTemp)
{
    float kelvin=celsiusTemp+273.15;
    return kelvin;
}

//Function to convert Temperature from Celsius to Kelvin scale
float Temperature::celciusToFehrenheit(float celsiusTemp)
{
    float fahrenheit=(celsiusTemp*9.0/5.0)+32;
    return fahrenheit;
}

//Function to convert Temperature from Celsius to Kelvin scale
float Temperature::kelvinToCelsius(float kelvinTemp)
{
    float celsius=kelvinTemp-273.15;
    return celsius;
}

//Function to convert Temperature from Celsius to Kelvin scale
float Temperature::kelvinToFahrenheit(float kelvinTemp)
{
    float fahrenheit=((kelvinTemp-273.15)*9.0/5.0)+32;   
    return fahrenheit;
}

//Function to convert Temperature from Celsius to Kelvin scale
float Temperature::fahrenheitToCelsius(float fahrenheitTemp)
{
    float celsius=(fahrenheitTemp-32)*5.0/9.0;
    return celsius;
}

//Function to convert Temperature from Celsius to Kelvin scale
float Temperature::fahrenheitToKelvin(float fahrenheitTemp)
{
    float kelvin=(fahrenheitTemp-32)*5.0/9.0+273.15;    
    return kelvin;
}

int main()
{
    Temperature T;
    float tem;
    char unit;
    
    //Ask user to enter a original Temperature value
    std::cout<<"\nEnter the Temperature value: ";
    std::cin>>tem;

    //Ask user to enter the Scale of original Temperature
    std::cout<<"Enter the original scale of Measurement. For Celsius, Kelvin, Fehrenheit enter C, K, F respectively : ";
    std::cin>>unit;

    switch (unit)
    {
    case 'C':
    case 'c':
        std::cout<<std::endl;
        std::cout<<"Equalent Kelvin temperature is : "<<T.celsiusToKelvin(tem)<<" K\n";
        std::cout<<"Equalent Fehrenheit temperature is : "<<T.celciusToFehrenheit(tem)<<" F\n";
        break;
    
    case 'K':
    case 'k':
        std::cout<<std::endl;
        std::cout<<"Equalent Celsius temperature is : "<<T.kelvinToCelsius(tem)<<" Degree C\n";
        std::cout<<"Equalent Fehrenheit temperature is : "<<T.kelvinToFahrenheit(tem)<<" F\n";
        break;

    case 'F':
    case 'f':
        std::cout<<std::endl;
        std::cout<<"Equalent Celsius temperature is : "<<T.fahrenheitToCelsius(tem)<<" Degree C\n";
        std::cout<<"Equalent Kelvin temperature is : "<<T.fahrenheitToKelvin(tem)<<" K\n";
        break;
    
    default:
        std::cout<<std::endl;
        std::cout<<"Enter correct Scale of Measurement!";
        break;
    }

    return 0;
}