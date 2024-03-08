int main( void )
 {
	int a= 42;
	int const * b = &a;
	int *c = b; // implicite cast no
	int *d = const_cast<int *>(b); // explicite cast OK but


	return 0;
}