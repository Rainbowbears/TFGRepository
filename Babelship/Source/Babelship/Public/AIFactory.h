#pragma once

class AIFactory {

private:
	static AIFactory* instancePtr;

	AIFactory() {}

public:
	AIFactory(const AIFactory& object) = delete;

	static AIFactory* getInstance() {
		if (instancePtr == nullptr) {
			instancePtr = new AIFactory();
			return instancePtr;
		}
		else {
			return instancePtr;
		}
	}
};
