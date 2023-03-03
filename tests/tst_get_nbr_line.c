#include "./../so_long_utils.c"

int main(void)
{
    char    *file_title = "/Users/mohtakra/Desktop/so_long/maps/map.ber";
    int nbr_line = get_nbr_line(file_title);
    
    printf("the number of lines in the file you entered is : %d \n",nbr_line);
    while (1);
    
    return (0);
}
