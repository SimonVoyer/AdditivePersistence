#include "AdditivePersistence.h"

PersistenceData additivePersistence(PersistenceData data) {
	int sum = 0;
	while (data.digitalRoot > 0) {
		sum += data.digitalRoot % 10;
		data.digitalRoot /= 10;
	}
	data.digitalRoot = sum;
	data.additivePersistence++;
	return data.digitalRoot < 10 ? data : additivePersistence(data);
}