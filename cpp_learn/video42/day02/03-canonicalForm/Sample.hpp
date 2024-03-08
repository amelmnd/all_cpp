#ifndef SAMPLE_HPP
# define SAMPLE_HPP

# include <iostream>

class Sample {

	public:
		//ensemple de constructeur
		Sample(void);
		Sample(int const n);
		Sample(Sample const & src);
		// destructeur
		~Sample();

		// surcharge d'operateur
		Sample & operator=(Sample const & rhs);

		// asseceur
		int getFoo(void) const;

	private:
		// attribut privee de class
		int _foo;
};

// surcharge d'operateur non membre
std::ostream & operator<<( std::ostream & o, Sample const & i );


#endif