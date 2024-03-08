#include <stdio.h>

//definition d'une variable et d'un fonction
int gl_var = 1;
int f(void) { return 2; }

namespace Foo {
	// nouveau scope ou les element definit ici n'existe qu'ici ou ne se modifier qu'ici == redefinition possible et non confictuel
	int gl_var = 3;
	int f(void) { return 4; }
}

namespace Bar {
	int gl_var = 5;
	int f(void) { return 6; }
}

//creation d'un alias
namespace Muf = Bar;

int main(void){
	// appel de fonction classique
	printf("gl_var = %d\n", gl_var);
	printf("f() = %d\n", f());


	printf("Foo::gl_var = %d\n", Foo::gl_var);
	printf("Foo::f() = %d\n", Foo::f());

	printf("Bar::gl_var = %d\n", Bar::gl_var);
	printf("Bar::f() = %d\n", Bar::f());

	printf("Muf::gl_var = %d\n", Muf::gl_var);
	printf("Muf::f() = %d\n", Muf::f());

	printf("::gl_var = %d\n", ::gl_var);
	printf("::f() = %d\n", ::f());
	return 0;
}