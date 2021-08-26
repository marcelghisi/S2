#include "stdio.h"
 #include "stdlib.h"
 #include "stdarg.h"
 #include "string.h"
 #include <math.h>
 #include <unistd.h>
 #include <limits.h>
 #include <stdint.h>
 int my_printf(char *format_string, ...);
 
 int my_putchar(char c){
    return write(1,&c,1);
  }
 
 char hex_digit(int v) {
     if (v >= 0 && v < 10)
         return '0' + v;
     else
         return 'a' + v - 10;
 }
 
 void print_address(void* p0) {
     int i;
     uintptr_t p = (uintptr_t)p0;
 
     my_putchar('0'); my_putchar('x');
     for(i = (sizeof(p) << 3) - 4; i>=0; i -= 4) {
         my_putchar(hex_digit((p >> i) & 0xf));
     }
 }
 
  char* convert_unsignedint(unsigned int num, int base) 
 { 
     static char possible_in_base[]= "0123456789ABCDEF";
     static char buffer[50]; 
     char *ptr; 
 
     ptr = &buffer[49]; 
     *ptr = '\0'; 
 
     do 
     { 
         *--ptr = possible_in_base[num%base]; 
         num /= base; 
     }while(num != 0); 
 
     return(ptr); 
 }
 
 char* convert_unsignedlong(unsigned long num, int base) 
 { 
     static char possible_in_base[]= "0123456789ABCDEF";
     static char buffer[50]; 
     char *ptr; 
 
     ptr = &buffer[49]; 
     *ptr = '\0'; 
 
     do 
     { 
         *--ptr = possible_in_base[num%base]; 
         num /= base; 
     }while(num != 0); 
 
     return(ptr); 
 }
 char* my_itoa(int num, char* buffer, int base) {
     int curr = 0;
  
     if (num == 0) {
         buffer[curr++] = '0';
         buffer[curr] = '\0';
         return buffer;
     }
  
     int num_digits = 0;
  
     if (num < 0) {
         if (base == 10) {
             num_digits ++;
             buffer[curr] = '-';
             curr ++;
             num *= -1;
         }
         else
             return NULL;
     }
  
     num_digits += (int)floor(log(num) / log(base)) + 1;
  
     while (curr < num_digits) {
         int base_val = (int) pow(base, num_digits-1-curr);
  
         int num_val = num / base_val;
  
         char value = num_val + '0';
         buffer[curr] = value;
  
         curr ++;
         num -= base_val * num_val;
     }
     buffer[curr] = '\0';
     return buffer;
 }
 
 int  my_printf(char *format_string, ...)
 {
    int  character_count = 0;
    unsigned int  print_integer;
    unsigned long print_long;
    char integer_string[10];
    char *p_print_string;
    va_list args_list;
 
    va_start(args_list, format_string);
    
    while(*format_string)
    {
        if(*format_string == '%')
        {
            format_string++;
            switch(*format_string)
            {
               case 's': ;
                       int count = 0;  
                       for (char* letter = va_arg(args_list, char *); *letter; letter++){
                         count++;  
                         my_putchar(*letter);
                       }
                       format_string++;
                       character_count += count;
                       break;
               case 'c': 
                       print_integer = va_arg(args_list, int);
                       my_putchar(print_integer);
                       format_string++;
                       character_count++;
                       break;
               case 'o': 
                       print_integer = va_arg(args_list, unsigned int);
                       puts(convert_unsignedint(print_integer,8));
                       format_string++;
                       character_count++;
                       break;
                 case 'x': 
                       print_integer = va_arg(args_list, unsigned int);
                       puts(convert_unsignedint(print_integer,16));
                       format_string++;
                       character_count++;
                       break;
                 case 'u': 
                       print_long = va_arg(args_list, unsigned long);
                       puts(convert_unsignedlong(print_long,10));
                       format_string++;
                       character_count++;
                       break;      
               case 'i':  
                       print_integer = va_arg(args_list, int);
                       my_itoa(print_integer, integer_string, 10);
                       fputs(integer_string, stdout);
                       format_string++;
                       character_count += strlen(integer_string);
                       break;
               case 'p': 
                       p_print_string = va_arg(args_list, char *);
                       print_address(p_print_string);
                       format_string++;
                       character_count++;
                       break;
               case '\0': 
                       break;
               default:
                       my_putchar('%');
                       my_putchar(*format_string);
                       format_string++;            
                       character_count +=2;
            }       
        }
        else
        {
            my_putchar(*format_string);
            format_string++;
            character_count++;
        }
    }
    va_end(args_list);
    return character_count;
 }int main(){
     my_printf("Pla %s","Ola");
     return 0;
 }