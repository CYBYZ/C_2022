#pragma once
class Bucket
{
public:
	int volume;
	int used;
	Bucket(int volume) {
		this->volume = volume;
		used = 0;
	}
	void flush() {
		used = 0;
	}
	int fill(int v) {
		int excess = 0;
		if (volume - used >= v) {
			used = used + v; excess = 0;
		}
		else {
			excess = v + used - volume;
			used = volume;
		}
		return excess;
	}
};

