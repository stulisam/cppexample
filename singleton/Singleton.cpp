#include "Singleton.h"


Singleton::Singleton(){

}


Singleton::Singleton(const Singleton&){

}



//�ڴ˴���ʼ��
Singleton* Singleton::instance = new Singleton();
Singleton* Singleton::getInstance(){
	return instance;
}
