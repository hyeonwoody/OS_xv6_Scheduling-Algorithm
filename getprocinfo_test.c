#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int main(void)
{   
    int pid=0;
    struct processInfo processInfo;

    //pid=get_max_pid();
    pid=getpid();
    get_proc_info(pid, &processInfo);
    exit();
}