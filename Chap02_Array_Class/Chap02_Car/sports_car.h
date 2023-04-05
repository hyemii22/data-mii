#pragma once
#include "car.h"

class SportsCar : public Car
{
public :
	bool bTurbo;
	SportsCar() {} // 생성자
	~SportsCar() {} //소멸자
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {
		if (bTurbo)
			speed += 20; //터보 모드인 경우 20씩 증가
		else
			Car::speedUp(); // 터보 모드 아니면 CAr클래스의 speedUp
	}
};
