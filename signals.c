#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int process_type;
void Signal1(int nsig) {
		printf("РТ ");
		sleep(1);
		kill(process_type, SIGUSR2); 
}
void Signal2(int nsig) {
		printf("ЧЕМПИОН!\n");
		sleep(1);
		kill(process_type, SIGUSR1);
}
void Run() {
	Signal1(0);
	while(1);
}
int main()
{
	int pid;
	signal (SIGUSR1, Signal1);
	signal (SIGUSR2, Signal2);
	process_type = getpid();
	Run();
	return 0;
}
