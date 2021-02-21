/*
** EPITECH PROJECT, 2020
** bs_bsq.h
** File description:
** bs_bsq
*/

int fs_open_file(char const *filepath);
void fs_understand_return_of_read(int fd, char *buffer, int size);
void fs_cat_500_bytes(char const *filepath);
void fs_cat_x_bytes(char const *filepath, int x);
void fs_print_first_line(char const *filepath);
int fs_get_number_from_first_line(char const *filepath);
void array_1d_print_chars(char const *arr);
void array_1d_print_ints(int const *arr, int size);
int array_1d_sum(int const *arr , int size);
int array_2d_sum(int **arr, int nb_rows, int nb_cols);
int array_2d_how_many(int **arr, int nb_rows, int nb_cols, int number);
char *mem_alloc(char const *a, char const *b);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char **mem_dup_2d_array(char **arr, int nb_rows, int nb_cols);
char *load_file_in_mem(char const *filepath);
char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);
int is_square_of_size(char **map, int row, int col, int square_size);
int find_biggest_square(char **map, int nb_rows, int nb_cols, int row, int col);
int can_draw_shape_in_map(char **map, int map_nb_rows, int map_nb_cols, \
 char **shape, int shape_nb_rows, int shape_nb_cols);

void putnbr_bsq(int nb);
void putstr_bsq(char const *str);
void putchar_bsq(char c);
int strlen_bsq(char *str);
int getnbr_bsq(char *str);
