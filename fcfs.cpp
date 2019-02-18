#include<iostream>
using namespace std;
int main()
{
    int n;                                     //Turn Around Time = Completion Time – Arrival Time
    cout<<"enter number of process:";          //Waiting Time = Turn Around Time – Burst Time
    cin>>n;
    int bt[n],wt[n],tat[n],p[n];
    float tbt=0,ttat=0;
    for(int i=0;i<n;i++)
    {
        cout<<"enter BurstTime for process"<<i+1<<":";
        cin>>bt[i];
        p[i]=i+1;
    }
    wt[0]=0;
    tat[0]=bt[0];
    for(int i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=bt[i]+wt[i];
    }
    cout<<"process"<<"\t"<<"Burst Time"<<"\t"<<"waiting time"<<"\t"<<"turn around time"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<"  "<<p[i]<<"\t  "<<bt[i]<<"\t   \t"<<wt[i]<<"\t   \t"<<tat[i]<<"\n";
        tbt=tbt+wt[i];
        ttat=ttat+tat[i];
    }
    cout<<"avg. waiting time:"<<tbt/n<<"\n";
    cout<<"avg. tat:"<<ttat/n;
    return 0;
}
