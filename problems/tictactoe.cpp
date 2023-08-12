#include<iostream>
using namespace std;
/*int display(char board[row][col],int row, int col)
{
	for(int i=0;i<=row;i++)
	{
		for(int j=0;j<=col;j++)
		{
			//SPACES
			if((i%2==0) && (j%2==0))
			{
				cout<<" ";
			}
			//LOWER_DASH
			if((i%2==1) && (j%2==0))
			{
				cout<<"_";
			}
			//VERTICAL_DASH
			if((i%2==0) && (j%2==1))
			{
				cout<<"|";
			}
		}	
	}
	return 0;
}*/
int main()
{
	cout<<"\n--------------------------------------------------TICTACTOE-----------------------------------------";
	int n,gameover=1,winner;
	cout<<"\nENTER THE SIZE:";
	cin>>n;
	int max=n;
	int col=n+(n-1);
	int row=(2*n);
	char board[col][row];
	int x_valid[row][col]={0},y_valid[row][col]={0},x1,y1,x2,y2,chance=3;
	int x_row[10]={0},x_col[10]={0},x_leftd[10]={0},x_rightd[10]={0};
	int y_row[10]={0},y_col[10]={0},y_leftd[10]={0},y_rightd[10]={0};
	//display(board,row,col);
	cout<<"REFER THIS FOR BOX VALUES OF X AND Y...";
		for(int i=0;i<row;i++)
		{
			cout<<"\n";
			for(int j=0;j<=col;j++)
			{
				//SPACES
				if((i%2==0) && (j%2==0))
				{
					cout<<i<<","<<j;
				}
				//LOWER_DASH
				if((i%2==1))
				{
					cout<<"__";
				}
				//VERTICAL_DASH
				if((i%2==0) && (j%2==1))
				{
					cout<<"|";
				}
			}	
		}
		cout<<"\n************************************************************************************************";
		cout<<"\nPLAYER 1:X";
		cout<<"\nPLAYER 2:O";
		cout<<"\nLETS BEGIN.....";
		while(gameover!=0)
	{
		//INPUT
		x1=0,y1=0,x2=0,y2=0;
		if((chance%2) == 1)
		{
		cout<<"\nP1:Enter x row:";
		cin>>x1;
		cout<<"\nP1:Enter x col:";
		cin>>y1;
		x_row[x1]++;
		x_col[y1]++;
		x_leftd[x1+y1]++;
		x_rightd[(n-1)+(y1-x1)]++;
		x_valid[x1][y1]=1;
		}
		if((chance%2) == 0)
		{	
		cout<<"\nP2:Enter O row:";
		cin>>x2;
		cout<<"\nP2:Enter O col:";
		cin>>y2;
		y_row[x2]++;
		y_col[y2]++;
		y_leftd[x2+y2]++;
		y_rightd[(n-1)+(y2-x2)]++;
		y_valid[x2][y2]=1;
		}
		
		//DISPLAY X-O VALUES
		for(int i=0;i<row;i++)
		{
			cout<<"\n";
			for(int j=0;j<=col;j++)
			{
				//SPACES
				if((i%2==0) && (j%2==0))
				{
					if( (x_valid[i][j]==0) &&  (y_valid[i][j]==0) )
					{
					cout<<" ";
					}
					if(x_valid[i][j]==1)
					{
						cout<<"X";
					}
					if(y_valid[i][j]==1)
					{
						cout<<"O";
					}
				}
				//LOWER_DASH
				if((i%2==1))
				{
					cout<<"_";
				}
				//VERTICAL_DASH
				if((i%2==0) && (j%2==1))
				{
					cout<<"|";
				}
				/* LOGIC FOR GAMEOVER FOR O
				
					if(chance%2==1)
					cout<<"\n P1 WINS!!!!!!!!!!!";
					else
					cout<<"\n P2 WINS!!!!!!!!!!!";
				//LOGIC FOR GAMEOVER FOR X
			
					if(chance%2==0)
					cout<<"\n P1 WINS!!!!!!!!!!!";
					else
					cout<<"\n P2 WINS!!!!!!!!!!!"; 	*/
			
			}
		} //FOR LOOP OF i
		int z;
		for(int i=0;i<n;i++)	
		{	
		 z=i;		
			if( (x_row[i]>=max) || (x_col[z]>=max) || (x_leftd[n-1]>=max) || (x_rightd[n-1]>=max ))
			{
				gameover=0;
			}
			//testcase
			if( (y_row[i]>=max) || (y_col[z]>=max)|| (y_leftd[n-1]>=max) || (y_rightd[n-1]>=max ))
			{
			gameover=0;
			}
			winner=(chance%2);
		}
		chance++;
	}//gamover
	if(winner ==1)
	{
		cout<<"\n\nP1 WON!!!!!!";
	}
	else if(winner==0)
	{
		cout<<"\n\nP2 WON!!!!!!";
	}
	return 0;
}
