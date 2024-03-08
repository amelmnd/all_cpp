#ifndef SAMPLE_HPP
#define SAMPLE_HPP

//declaration de la classa Sample et de ses fonctions membres
class Sample
{
	public:
		int publicFoo;

		Sample(void);
		~Sample(void);

		void publicBar(void) const;

	private:
		int _privateFoo;

		void _privateBar(void) const;
};

#endif
