#include "types.h"
#include "stat.h"
#include "user.h"

const int max_size = 1600;

int main(void)
{

    
    void *draw_buffer = malloc(max_size);

    
    int draw_size = draw(draw_buffer, max_size);

    
    if (draw_size == -1)
    {
  
        printf(1, "Buffer size is too small\n");
    }
    else
    {
         
        printf(1, "%s\n", (char *)draw_buffer);
    }

    return 0;
}
