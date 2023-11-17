#include <stdio.h>


int main() {
	enum Year {
		Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec
	};

	enum Year Go;
	for (Go = Jan; Go <= Dec; Go++) {
		printf("%d \n", Go);
	}
	
	return 0;
}