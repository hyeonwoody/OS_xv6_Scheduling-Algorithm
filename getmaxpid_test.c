#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void)
{
    
    printf(0, "Maximum PID: %d\n", get_max_pid());
    exit();
}