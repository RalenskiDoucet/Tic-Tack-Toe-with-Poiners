#include<iostream>
#include "PlayingBoard.h"
class PlayingBoard
{
private:
	char *mGrid;
	int mGridSize;
	int mNumOfRows;
	int mNumOfCols;
public:
	PlayingBoard()
	{
		mGrid = new char[9];
		mNumOfRows = 3;
		mNumOfCols = 3;
		mGridSize = mNumOfCols * mNumOfRows;
	    ClearPlayingBoard();
	}
	PlayingBoard(int Rows, int Cls)
	{
			mGrid = new char[Rows* Cls];
				mGridSize = Rows*Cls;
					mNumOfRows = Rows;
						mNumOfCols = Cls;
			ClearPlayingBoard();
		}
		PlayingBoard()
			 {
				delete[] mGrid;
					}
		void ClearPlayingBoard()
			 {
					for (int i = 0; i < mGridSize; i++)
				{
					if (mNumOfCols == mNumOfCols - 1)
					std::cout << std::endl;
				}
	    }
};