#include <unistd.h>
void ft_print_comb(void){

    int x;
    int y;
    int z;
    x = '0';
    while(x <= '7'){
        y = x + 1;
        while(y <= '8'){

            z = y + 1;
             while( z <= '9'){
                write(1, &x, 1);
                write(1, &y, 1);
                wite(1, &z, 1);
                if(x != '7')
                write(1, " , ", 2);
                z++;
            }

             y++;
        }
        x++;



    }
}
int main(){

    ft_print_comb();
    return 0;
}
