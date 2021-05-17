struct processInfo
{
    uint sz;                     // Size of process memory (bytes)
    uint pid;                    // Process ID
    uint ppid;                   // Parent process
    uint numberContextSwithces;  // number of ContextSwitch
    char name[16];               // Process name (debugging)
}; //REALLL

