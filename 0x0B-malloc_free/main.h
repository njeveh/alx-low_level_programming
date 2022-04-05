int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **reallocate_memory(int array_size, char *word, char **str_arr);
char **strtow(char *str);
char *argstostr(int ac, char **av);
