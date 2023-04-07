# OS_xv6_Scheduling-Algorithm  
## 숭실대학교 운영체제 2020 가을학기 - 과제3 : xv6에서 시스템 호출 추가 및 스케쥴러 수정  
  
본 과제의 목표는 xv6에서 프로세스 우선순위에 따라 스케쥴링하는 알고리즘을 구현하여 기존에 있는 스케쥴러를 변경하여 프로세스 스케쥴링을 이해하는 것입니다.  
|**File**|**Difficulty**|**Comment**|
|:---:|:---:|:---:|
|user.h|⭐|사용자 프로그램에서 실행하는 시스템 호출을 정의|
|usys.S|⭐|매크로를 이용하여 사용자의 호출을 시스템 호출과 연결|
|syscall.h|⭐|구현한 시스템 호출을 번호에 따라 매핑|
|syscall.c|⭐|사용자 프로그램과 커널 프로그램을 연결하는 시스템 호출 함수 포인터를 선언|
|sysproc.c|⭐⭐|사용자 프로그램과 커널 프로그램을 연결하는 시스템 호출 함수 포인터를 선언|
|processinfo.h|⭐|메모리 크기(sz) pid, ppid, 문맥교환 횟수(numberContextSwitches)를 멤버로 선언|
|proc.h|⭐|proc 구조체에서 우선순위(prio)와 문맥교환 횟수를 멤버로 선언|
|proc.c|⭐⭐⭐| scheduler() 스케쥴러를 우선순위에 따라 스케쥴하기 위해 수정<br>allocproc()에서 프로세스의 우선순위 값과 문맥교환 횟수를 초기화<br>Swtch()가 호출 된 후에 문맥교환 횟수를 증가<br>그 밖의 여러가지 proc과 관련된 시스템 호출을 구현|

<br>

## Soongsil University. Operating System 2020-2 - Assignment#3 : Processes and Scheduling in xv6  

xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix Version 6 (v6).

– **user.h** contains the system call definitions in xv6. 

– **usys.S** contains a list of system calls exported by the kernel.

– **syscall.h** contains a mapping from system call name to system call number.

– **syscall.c** contains helper functions to parse system call arguments, and pointers.

– **sysproc.c** contains the implementations of process related system calls.

– **proc.h** contains the struct proc structure.

– **proc.c** contains the function scheduler performing scheduling and context switching between processes.
