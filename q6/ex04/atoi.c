int my_atoi(char* param_1)
{
    int i, result = 0;
    while(param_1[i] != '0')
    {
        if(param_1[i] - '0' >= 0 && param_1[i] - '0' <= 9)
        {
            result = result * 10 +  param_1[i] - '0';

        }
        return result;
    }
    return 0;
}

int main () {
    int m = my_atoi("123");
    return 0;
}