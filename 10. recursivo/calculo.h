#ifndef CALCULO_H_INCLUDED
#define CALCULO_H_INCLUDED

int factorial(int num)
{
    int result=1;
    for(int i=1; i<=num; i++)
    {

        result=result*i;
    }
    return result;
}

int factorialRecursivo(int num)
{
    if(num<=1)
        return 1;

    return num * factorialRecursivo(num-1);
}

int contador(int num)
{
    if(num<=1)
        return 1;

    cout<<num<<endl;
    return contador(num-1);
}

#endif // CALCULO_H_INCLUDED
