#include <stdio.h>

    int main(){

        //int i = 1;

        //while (i <= 10)
       // {
        //    int j = 1;

         //   while (j <= 10)
        //    {
        //        printf("%d \t", i * j);
        //        j++;
        //    }
        //    printf("\n");
        //    i++;
        //}
        

        int i = 1;

        do
        {
            int j = 1;

                do
                {
                    printf("%d \t", i * j);
                    ++j;
                        
                } while (j <= 10);
                printf("\n");
                i++;
        } while (i <= 10);
        
        //int i = 1;

        //for ( i = 1; i <= 10; i++)
        //{
          //  int j = 1;

          //  for ( j = 1; j <= 10; j++)
          //  {
           //     printf("%d \t", i * j);
          //  }
           // printf("\n");
        //}
        


return 0;




    }