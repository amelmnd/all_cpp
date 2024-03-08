#ifndef SAMPLE_HPP
#define SAMPLE_HPP

class Sample
{
public:
	Sample(void);
	~Sample(void);

	// fonction non membre
	static int getNbInst(void);

private:
//attribut non membre
	static int _nbInst;

};

#endif
