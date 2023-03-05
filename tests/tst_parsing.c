#include "./../libsolong.h"
#include "./../parsing/parsing_utils.c"

int main(void)
{
    char    *file_title = "/Users/mohtakra/Desktop/so_long/maps/map.ber";
    char    **map = convert_map(file_title);


    if (is_rectangle(map))
        printf("the map is rectangle √√√√√√\n");
    else
        printf("the map not rectangle XXXXXXX\n");

    if (!has_dup_ep(map))
        printf("the map does not have dup exit or player √√√√√√\n");
    else
        printf("the map has dup exit or player XXXXXXX\n");

    if (is_ber_file(file_title))
        printf("the map is a .ber file √√√√√√\n");
    else
        printf("the map is not .ber file XXXXXXX\n");
    
    if (is_surrounded(map))
        printf("the map is surrounded by walls √√√√√√\n");
    else
        printf("the map is not surrounded by walls XXXXXXX\n");

    if (has_exit(map))
        printf("the map has Exit √√√√√√\n");
    else
        printf("the map does not have Exit XXXXXXX\n");

    if (has_space(map))
        printf("the map has Space √√√√√√\n");
    else
        printf("the map does not have Spaces XXXXXXX\n");

    if (has_player(map))
        printf("the map has Player √√√√√√\n");
    else
        printf("the map does not have Player XXXXXXX\n");
    
    if (has_collectible(map))
        printf("the map has Collectible √√√√√√\n");
    else
        printf("the map does not have Collectible XXXXXXX\n");
    
    if (has_acceptable_chars(map))
        printf("the map has only acceptable chars √√√√√√\n");
    else
        printf("the map has non acceptable chars XXXXXXX\n");


    return (0);
}