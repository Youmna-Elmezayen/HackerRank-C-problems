// main is given as starter code

int  sum (int count,...) 
{
    int sum = 0;
    va_list countPtr;
    va_start(countPtr, count);
    
    for (int i = 0; i < count; i++)
    {
        sum += va_arg(countPtr, int);
    }
    
    va_end(countPtr);
    return sum;
}

int min(int count,...) 
{
    int min = MAX_ELEMENT;
    va_list countPtr;
    va_start(countPtr, count);
    
    for (int i = 0; i < count; i++)
    {
        int current = va_arg(countPtr, int);
        if (current < min)
        {
            min = current;
        }
    }
    
    va_end(countPtr);
    return min;
}

int max(int count,...) 
{
    int max = MIN_ELEMENT;
    va_list countPtr;
    va_start(countPtr, count);
    
    for (int i = 0; i < count; i++)
    {
        int current = va_arg(countPtr, int);
        if (current > max)
        {
            max = current;
        }
    }
    
    va_end(countPtr);
    return max;
}
