#include "./../so_long_utils.c"

int main(void)
{
    char    *file_title = "/Users/mohtakra/Desktop/so_long/maps/map.ber";
    char    **map = convert_map(file_title);
    int i = 0; 
    printf("here is the start of the map \n");
    while (map[i])
    {
        int j = 0;
        while (map[i][j])
        {
            // printf("%c",map[i][j]);
            ft_putchar_fd(map[i][j],1);
            j++;
        }
        printf("\n");
        i++;
    }
    // while (*map)
	// {
	// 	ft_putstr_fd(*map, 1);
    //     printf("\n");
	// 	map++;
	// }
    printf("here is the end of the map \n");
    while(1);
    // printf("the number of lines in the file you entered is : %d \n",nbr_line);
    return (0);
}
