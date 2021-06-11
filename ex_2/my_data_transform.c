#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_data_transform
**
** @param {char*} param_1
**
** @return {string_array*}
**
*/
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_ORDER
#define STRUCT_ORDER
typedef struct s_order
{
    char* gender;
    char* first_name;
    char* last_name;
    char* user_name;
    char* email;
    char* age;
    char* city;
    char* device;
    char* coffee_quantity;
    char* orderAt;
} order;
#endif

int count_char(char* param_1,char character){
    int count = 0;
    while (*param_1 != 0)
    {
        char letter = *param_1;
        if (letter == character){
            count++;
        }
        param_1++;
    }
    return count;
}

void check_group(order** orders,int size){

    for(int i = 0; i< size;i++){
        order* ord = orders[i];
        char* group = malloc(50);
        int age = atoi(ord->age);
        switch (age)
        {
        case 1 ...20:
            group = "1->20";
            ord->age = group;
            break;
        case 21 ...40:
            group = "21->40";
            ord->age = group;
            break;
        case 41 ... 65:
            group = "41->65";
            ord->age = group;
            break;
        case 66 ... 99:
            group = "66->99";
            ord->age = group;
            break;
        default:
            group = "Order At";
            ord->age = group;
            break;
        }
    }
    

}

char* substring(char* param_1,int start,int end){
    char* hour = malloc(3);
    int count = 0;
    for (int i = start; i <= end;i++){
        hour[count] = param_1[i];
        count++;
    }
    hour[count] = 0;
    return hour;
    
}

void check_order_time(order** orders,int size){

    for(int i = 0; i< size;i++){
        char* period = malloc(50);
        order* ord = orders[i];
        int hour = atoi(substring(ord->orderAt,11,12));
        switch (hour)
        {
        case 6 ...11:
            period = "morning";
            ord->orderAt = period;
            break;
        case 12 ...17:
            period = "afternoon";
            ord->orderAt = period;
            break;
        case 18 ... 23:
            period = "evening";
            ord->orderAt = period;
            break;
        default:
            period = "Age";
            ord->orderAt = period;
            break;
        }
    }
    

}

string_array* my_data_transform(char* param_1)
{
  
    int size = count_char(param_1,'\n');
    int line_index = 0;
    order* order_list[size+1];

    while(*param_1 != 0){
        
        order* decoupled_order = malloc(sizeof(order)*sizeof(char*));

        int index = 0;
        while (*param_1 != '\n'){

            char* current_word = (char*)malloc(50);
            char* save_state = current_word;
            while (*param_1 != ',' && *param_1 != '\n' && *param_1 != 0)
            {
                *current_word = *param_1;
                current_word++;
                param_1++;
            }
            *current_word = 0;
            switch (index)
            {
            case 0:
                /* gender */
                decoupled_order->gender = save_state;
                break;
            case 1:
                /* firstname */
                decoupled_order->first_name = save_state;
                break;
            case 2:
                /* lastname */
                decoupled_order->last_name = save_state;
                break;
            case 3:
                /* username */
                decoupled_order->user_name = save_state;
                break;
            case 4:
                /* email */
                decoupled_order->email = save_state;
                break;
            case 5:
                /* age */
                decoupled_order->age = save_state;
                break;
            case 6:
                /* city */
                decoupled_order->city = save_state;
                break;
            case 7:
                /* device */
                decoupled_order->device = save_state;
                break;
            case 8:
                /* coffee */
                decoupled_order->coffee_quantity = save_state;
                break;
            case 9:
                /* orderAt */
                decoupled_order->orderAt = save_state;
                break;
            default:
                break;
            }
            index++;
            current_word++;
            if (*param_1 != '\n'){
                param_1++;
            } else {
                order_list[line_index] = decoupled_order;
                line_index++;
            }
        }
        param_1++;

    }
    order_list[line_index] = 0;
    check_group(order_list,size);
    check_order_time(order_list,size);

    char** converted = (char**)malloc(((size+1) * sizeof(char*)));
    for (int i = 0; i < size; i++){
        order* transformed_order = order_list[i];
        char* word = malloc(200);
        memset(word, 0, 200);
        char* save = word;
        strcat(word,transformed_order->gender);
        //free(transformed_order->gender);
        strcat(word,",");
        strcat(word,transformed_order->first_name);
        //free(transformed_order->first_name);
        strcat(word,",");
        strcat(word,transformed_order->last_name);
        //free(transformed_order->last_name);
        strcat(word,",");
        strcat(word,transformed_order->user_name);
        //free(transformed_order->user_name);
        strcat(word,",");
        strcat(word,transformed_order->email);
        //free(transformed_order->email);
        strcat(word,",");
        strcat(word,transformed_order->age);
        //free(transformed_order->age);
        strcat(word,",");
        strcat(word,transformed_order->city);
        //free(transformed_order->city);
        strcat(word,",");
        strcat(word,transformed_order->device);
        //free(transformed_order->device);
        strcat(word,",");
        strcat(word,transformed_order->coffee_quantity);
        //free(transformed_order->coffee_quantity);
        strcat(word,",");
        strcat(word,transformed_order->orderAt);
        //free(transformed_order->orderAt);
        converted[i] = save;
    }
    converted[size] = 0;

    string_array* str = (string_array*)malloc(sizeof(string_array));
    str->size = size;
    str->array = converted;
    return str;
}







int main(){

    //string_array* lines = my_data_transform("a\nb\n");
    string_array* lines = my_data_transform("Gender,FirstName,LastName,UserName,Email,Age,City,Device,Coffee Quantity,Order At\nMale,Carl,Wilderman,carl,wilderman_carl@yahoo.com,29,Seattle,Safari iPhone,2,2020-03-06 16:37:56\nMale,Marvin,Lind,marvin,marvin_lind@hotmail.com,77,Detroit,Chrome Android,2,2020-03-02 13:55:51\nFemale,Shanelle,Marquardt,shanelle,marquardt.shanelle@hotmail.com,21,Las Vegas,Chrome,1,2020-03-05 17:53:05\nFemale,Lavonne,Romaguera,lavonne,romaguera.lavonne@yahoo.com,81,Seattle,Chrome,2,2020-03-04 10:33:53\nMale,Derick,McLaughlin,derick,mclaughlin.derick@hotmail.com,47,Chicago,Chrome Android,1,2020-03-05 15:19:48\n");
    
    for(int i = 0; i < lines->size;i++){
        printf("%s\n",lines->array[i]);
    }

    //string_array* lines = my_data_transform("c1,c2\nm,n\n");

    return 0;
}