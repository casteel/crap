#include <stdio.h>

int global_init_int = 1;
int global_non_init_int;
char global_string_array[] = "I am a global string array";
char *global_string_pointer = "I am a global string pointer";

int function(int param1, int param2)
{
        int local_init_function_param = 1;
        int local_non_init_function_param;

        local_non_init_function_param = param1;

        printf("global_init_int = %d\n", global_init_int);
        printf("global_non_init_int = %d\n", global_non_init_int);

        return local_non_init_function_param + param2;
}

int main(int argc, char **argv)
{
        int local_main_param;

        local_main_param = function(2,3);
        printf("function returned %d\n", local_main_param);

        return global_init_int;
}

