#include<stdio.h>
void getdata();
void completion();
void turn();
void wait();
void display();
int p[10], at[10], bt[10], ct[10], tat[10], wt[10], rembt[10];
int n, ttat, twt, tq;
float atat, awt;
int main()
{
	getdata();
	completion();
	turn();
	wait();
	display();
	return 0;
	
}
void getdata()
{
	int i;
	printf("\n****Round Robin Algorithm****\n");
	printf("Enter no. of processes: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Eter Arrival Time of process-%d\n", i+1);
		scanf("%d", &at[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("Enter burst time of process-%d\n", i+1);
		scanf("%d", &bt[i]);
		rembt[i] = bt[i];
	}
	printf("\nEnter Time quantum: ");
	scanf("%d", &tq);
}
void completion()
{
	int i, completed=0, currenttime=0, flag;
	while(completed < n)
	{
		flag = 0;
		for(i=0; i < n; i++)
		{
			flag = 1;
			if(at[i] <= currenttime && rembt[i] > 0)
			{
				if(rembt[i] > tq)
				{
					currenttime += tq;
					rembt[i] -= tq;
				}
				else
				{
					currenttime += rembt[i];
					ct[i] = currenttime;
					completed++;
					rembt[i] = 0;
				}
			}
		}
		if(flag == 0)
			currenttime++;
	}
}
void turn()
{
	int i;
	for(i=0; i<n; i++)
	{
		tat[i] = ct[i] - at[i];
		ttat += tat[i];
	}
	atat = ttat/n;
		
}
void wait()
{
	int i;
	for(i=0; i<n; i++)
	{
		wt[i] = tat[i] - bt[i];
		twt += wt[i];
	}
	awt = twt/n;
}

void display()
{
	int i;
	printf("PID\tAT\tBT\tCT\tTAT\tWT\n");
	for(i=0; i<n; i++)
	
		printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i+1, at[i], bt[i], ct[i], tat[i], wt[i]);
		printf("\nAverage TAT = %f\n", atat);
		printf("\nAverage WT = %f\n", awt);
		
	
}	

