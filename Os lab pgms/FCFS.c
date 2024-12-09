#include<stdio.h>
 struct process
{
    int BurstTime;
    int CompletionTime;
    int TurnAroundTime;
    int WaitingTime;
};

int main()
{
    int currtime=0;
int n;
printf("nos of process\n");
int nos;
scanf("%d",&nos);
struct process pro[nos];
for(int i=0;i<nos;i++)
{
    printf("enter the burst time\n");
    scanf("%d",&(pro[i].BurstTime));
}
for(int i=0;i<nos;i++)
{
    currtime+=pro[i].BurstTime;
    pro[i].CompletionTime=currtime;
    pro[i].TurnAroundTime=pro[i].CompletionTime;
    pro[i].WaitingTime=pro[i].TurnAroundTime - pro[i].BurstTime;
}
for(int i=0;i<nos;i++)
{
    printf("%dth process\t%d(burstime)\t%d(completitionTime)\t%d(turnaround)\t%d(waitingTime)\n",(i+1),pro[i].BurstTime,pro[i].CompletionTime,pro[i].TurnAroundTime,pro[i].WaitingTime);
}
return 0;
}