#include <iostream>
using namespace std;

class Cube {
public:
	int*** cube;
    int cube_sub[3]; // 큐브 회전시 값을 임시로 저장하는 변수
	int r;

	Cube();

	void input_1_side(int value);
    void input_2_side(int value);
	void input_3_side(int value);
	void input_4_side(int value);
	void input_5_side(int value);
	void input_6_side(int value);
	
	void left_1_rotate();
	void left_2_rotate();
	void left_3_rotate();
	void left_4_rotate();
	void left_5_rotate();
	void left_6_rotate();
	

	void right_1_rotate();
	void right_2_rotate();
	void right_3_rotate();
	void right_4_rotate();
	void right_5_rotate();
	void right_6_rotate();

	void print_all_sides();
};

Cube::Cube()
{
	int n;
	cout << "n의 값을 입력하시오: ";
	cin >> n;

	int*** cube = new int** [n*n*6];
	for (int i = 0; i < n; i++)
	{
		cube[i] = new int*[n];
		for (int j = 0; j < n; j++)
			cube[i][j] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			delete[] cube[i][j];
		delete[] cube[i];
	}
	delete[] cube;
}

void Cube::input_1_side(int value) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << value;
		}
		cout << '\n';
	}
}

void Cube::input_2_side(int value) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << value;
		}
		cout << '\n';
	}
}

void Cube::input_3_side(int value) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << value;
		}
		cout << '\n';
	}
}

void Cube::input_4_side(int value) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << value;
		}
		cout << '\n';
	}
}

void Cube::input_5_side(int value) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << value;
		}
		cout << '\n';
	}
}

void Cube::input_6_side(int value) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << value;
		}
		cout << '\n';
	}
}

void Cube::left_1_rotate()
{
	int r;
	int sub_cube;
	for (int i = 0; i < 3; i++)
    {
            cube_sub[i] = cube[0][r - 10][i];
            cube[0][r - 10][i] = cube[2][r - 10][i];
            cube[2][r - 10][i] = cube[5][r - 10][i];
            cube[5][r - 10][i] = cube[4][r - 10][i];
            cube[4][r - 10][i] = cube_sub[i];
    }
}

void Cube::left_2_rotate()
{
	int r;
	int cube_sub;
	for (int i = 0; i < 3; i++)
	{
			cube_sub[i] = cube[1][r - 10][i];
			cube[1][r - 10][i] = cube[2][r - 10][i];
			cube[2][r - 10][i] = cube[3][r - 10][i];
			cube[3][r - 10][i] = cube[4][r - 10][i];
			cube[4][r - 10][i] = cube_sub[i];
	}
}

void Cube::left_3_rotate()
{
	int r;
	int cube_sub;
	for (int i = 0; i < 3; i++)
	{
			cube_sub[i] = cube[2][r - 10][i];
			cube[2][r - 10][i] = cube[5][r - 10][i];
			cube[5][r - 10][i] = cube[4][r - 10][i];
			cube[4][r - 10][i] = cube[0][r - 10][i];
			cube[0][r - 10][i] = cube_sub[i];
	}
}

void Cube::left_4_rotate()
{
	int r;
	int cube_sub;
	for (int i = 0; i < 3; i++)
	{
			cube_sub[i] = cube[3][r - 10][i];
			cube[3][r - 10][i] = cube[2][r - 10][i];
			cube[2][r - 10][i] = cube[1][r - 10][i];
			cube[1][r - 10][i] = cube[4][r - 10][i];
			cube[4][r - 10][i] = cube_sub[i];
	}
}

void Cube::left_5_rotate()
{
	int r;
	int cube_sub;
	for (int i = 0; i < 3; i++)
	{
			cube_sub[i] = cube[4][r - 10][i];
			cube[4][r - 10][i] = cube[0][r - 10][i];
			cube[0][r - 10][i] = cube[2][r - 10][i];
			cube[2][r - 10][i] = cube[5][r - 10][i];
			cube[5][r - 10][i] = cube_sub[i];
	}
}

void Cube::left_6_rotate()
{
	int r;
	int cube_sub;
	for (int i = 0; i < 3; i++)
	{
			cube_sub[i] = cube[5][r - 10][i];
			cube[5][r - 10][i] = cube[4][r - 10][i];
			cube[4][r - 10][i] = cube[0][r - 10][i];
			cube[0][r - 10][i] = cube[2][r - 10][i];
			cube[2][r - 10][i] = cube_sub[i];
	}
}

void Cube::right_1_rotate()
{
	for (int i = 0; i < 3; i++)
	{
		cube_sub[i] = cube[0][r - 4][i];
		cube[0][r - 4][i] = cube[4][r - 4][i];
		cube[4][r - 4][i] = cube[5][r - 4][i];
		cube[5][r - 4][i] = cube[2][r - 4][i];
		cube[2][r - 4][i] = cube_sub[i];
	}
}

void Cube::right_2_rotate()
{
	for (int i = 0; i < 3; i++)
	{
		cube_sub[i] = cube[1][r - 4][i];
		cube[1][r - 4][i] = cube[4][r - 4][i];
		cube[4][r - 4][i] = cube[3][r - 4][i];
		cube[3][r - 4][i] = cube[2][r - 4][i];
		cube[2][r - 4][i] = cube_sub[i];
	}
}

void Cube::right_3_rotate()
{
	for (int i = 0; i < 3; i++)
	{
		cube_sub[i] = cube[2][r - 4][i];
		cube[2][r - 4][i] = cube[0][r - 4][i];
		cube[0][r - 4][i] = cube[4][r - 4][i];
		cube[4][r - 4][i] = cube[5][r - 4][i];
		cube[5][r - 4][i] = cube_sub[i];
	}
}

void Cube::right_4_rotate()
{
	for (int i = 0; i < 3; i++)
	{
		cube_sub[i] = cube[3][r - 4][i];
		cube[3][r - 4][i] = cube[4][r - 4][i];
		cube[4][r - 4][i] = cube[1][r - 4][i];
		cube[1][r - 4][i] = cube[2][r - 4][i];
		cube[2][r - 4][i] = cube_sub[i];
	}
}

void Cube::right_5_rotate()
{
	for (int i = 0; i < 3; i++)
	{
		cube_sub[i] = cube[4][r - 4][i];
		cube[4][r - 4][i] = cube[5][r - 4][i];
		cube[5][r - 4][i] = cube[2][r - 4][i];
		cube[2][r - 4][i] = cube[0][r - 4][i];
		cube[0][r - 4][i] = cube_sub[i];
	}
}

void Cube::right_6_rotate()
{
	for (int i = 0; i < 3; i++)
	{
		cube_sub[i] = cube[5][r - 4][i];
		cube[5][r - 4][i] = cube[2][r - 4][i];
		cube[2][r - 4][i] = cube[0][r - 4][i];
		cube[0][r - 4][i] = cube[4][r - 4][i];
		cube[4][r - 4][i] = cube_sub[i];
	}
}

void Cube::print_all_sides()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << cube[1][i][j];
			cout << cube[2][i][j];
			cout << cube[3][i][j];
			cout << cube[4][i][j];
			cout << cube[5][i][j];
			cout << cube[6][i][j];
		}
	}
}

int main(void)
{
	Cube c;
	c.input_1_side(1);
	c.input_2_side(2);
	c.input_3_side(3);
	c.input_4_side(4);
	c.input_5_side(5);
	c.input_6_side(6);

	c.left_1_rotate();
	c.left_2_rotate();
	c.left_3_rotate();
	c.left_4_rotate();
	c.left_5_rotate();
	c.left_6_rotate();

	c.right_1_rotate();
	c.right_2_rotate();
	c.right_3_rotate();
	c.right_4_rotate();
	c.right_5_rotate();
	c.right_6_rotate();

	c.print_all_sides();

	return 0;
}
