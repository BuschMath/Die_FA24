#ifndef DIE_H
#define DIE_H

class Die
{
public:
	Die();
	~Die();

	int roll();
	int getValue();
	int getSides();
	void setSides(int sides_);

private:
	int value;
	int sides;
};

#endif // !DIE_H

