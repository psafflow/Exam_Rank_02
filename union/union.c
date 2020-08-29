#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
	int asci[255] = {0};
    
    if (argc == 3)
    {
        i = 1;
        while (i < 3)
        {
            j = 0;
            while(argv[i][j])
            {
                if (asci[(int)argv[i][j]] == 0)
                {
                    asci[(int)argv[i][j]] = 1;
                    write(1, &argv[i][j], 1);
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}