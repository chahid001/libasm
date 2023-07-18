#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libasm.a"

int main() {

    // //write
    // char *str_lorem = "Lorem Ipsum is simply dummy text of the printing and \ntypesetting industry. Lorem Ipsum has been the industry's \nstandard dummy text ever since the 1500s, when an unknown printer \ntook a galley of type and scrambled it to make a type specimen book.\n";        
    // printf("////////// write (unistd.h) ///////////\n");
    // write(1, "Hello world!\n\n", 14);
    // write(1, str_lorem, strlen(str_lorem)+1);
    // printf("\n////////// ft_write (asm) ///////////\n");
    // ft_write(1, "Hello world!\n\n", 14);
    // ft_write(1, str_lorem, strlen(str_lorem)+1);


    // //read
    // char *str;
    // char *ft_str;
    // printf("////////// read (unistd.h) ///////////\n");
    // read(0, str, 100);
    // write(1, str, 100);
    // fflush(stdin);
    // fflush(stdout);
    // printf("\n////////// ft_read (asm) ///////////\n");
    // ft_read(0, ft_str, 100);
    // write(1, ft_str, 100);
    printf("%d", ft_strcmp("d", "d"));
}