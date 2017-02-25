// N-Queens (All Solutions)

// Checking funtion to place the queen at i,j
int check(int board[N][N],int row,int col) 
{
	int flag,i,j;
	for(j=0;j<col;j++)
		if(board[row][j]==1)
			return 0;
	for(i=0,j=0; i<row && j<=col ; i++,j++)
		if(board[i][j]==1)
			return 0;
	for(i=N-1,j=0; i>row && j<col ; i--,j++)
		if(board[i][j]==1)
			return 0;
	return 1;
}

// Recursive function for nqueens.
int nqueens(int board[N][N],int j)
{
	int i,k,possible;

	if(j==N)	
		return 1;
	
	for(i=0;i<N;i++)
	{
		possible=check(board,i,j); // Checking if it's safe to place the queen at i,j.
		if(possible)
		{
			board[i][j] = 1; // If possible then change the value of that index to 1
			
			nqueens(board,j+1); // (For all solutions)
			// Contiinues even when one solution is found
			board[i][j] = 0; // Backtracking
		}
	}
	return 0;
}
