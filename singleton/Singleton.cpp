#include "Singleton.h"


Singleton::Singleton(){

}


Singleton::Singleton(const Singleton&){

}



//在此处初始化
Singleton* Singleton::instance = new Singleton();
Singleton* Singleton::getInstance(){
	return instance;
}
