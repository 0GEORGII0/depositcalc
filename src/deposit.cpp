#include "deposit.h"

int verifyDeposit(int x) {
	return x >= 1000;
}

int verifyDays(int d) {
	return d > 365;
}

int calculateDohod(int d, int x, int s) {
    if (d >= 0 || d <= 30) {

		s = x * 0.9;

	}
	else
	{
		
		if (d >= 31 || d <= 120) {
				
			s = x * 1.02;

		}
		else
		{

			if (d >= 121 || d <= 240) {
					
				s = x * 1.06;

			}
			else
			{
				if (d >= 241 || d <= 365) {
						
					s = x * 1.12;

				}
			}
		}



	}
}