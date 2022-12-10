#include <iostream>
#include <string>
#include <fstream>

using namespace std;


// rock, paper, scissors
void		s_game(int *score, int m_move, int o_move);
int			c_modulus(int o_move, int d_outcome);
int			s_arr(int val);

int		main(void)
{
	fstream file;
	string buff;
	int fi_scr;

	fi_scr = 0;
	// read input from file "input"
	file.open("input", ios::in);
	while (file.peek() != EOF)
	{
		getline(file, buff);

		// 1st chall simulate game and update score after reading round moves
		// s_game(&fi_scr, buff[2], buff[0]);

		// 2nd chall calculate the right move using c_modulus the have outcome buff[0]
		s_game(&fi_scr, c_modulus(buff[0], buff[2]), buff[0]);

	}
	file.close();

	// first challenge print out final score A,B,C are r,p,s respectively and X,Y,Z are the same but for you 
	cout << fi_scr << endl;
}

void		s_game(int *score, int m_move, int o_move)
{
	// draw
	if (m_move - o_move == 23)
		*score += (m_move - 87) + 3;
	// win
	else if ( (m_move - o_move) % 3 == 0)
		*score += (m_move - 87) + 6;
	// lose
	else
		*score += (m_move - 87);
}

int			c_modulus(int o_move, int d_outcome)
{
	// make int array in order to obtains this eq 88 - 1 = 90 and 90 + 1 = 88	
	int arr[3] = {88, 89, 90};

	// draw
	if (d_outcome == 89)
		return o_move + 23;
	// lose
	else if (d_outcome == 88)
		return arr[ (s_arr(o_move+23) - 1 + 30) % 3 ];
	// win
	else
		return arr[ (s_arr(o_move+23) + 1 + 30) % 3 ];
}

int			s_arr(int val)
{
	int arr[3] = {88, 89, 90};

	for (int i = 0; i < 3; i++)
		if (arr[i] == val)
			return i;
	cerr << "fatal in [s_arr]" << endl;
	return -1;
}
