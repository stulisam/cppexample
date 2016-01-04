#ifndef _SINGLETON_H_
#define _SINGLETON_H_


class Singleton{
public:
	static Singleton* getInstance();

private:
	Singleton();
	//�Ѹ��ƹ��캯����=������Ҳ��Ϊ˽��,��ֹ������
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);

	static Singleton* instance;
};

#endif
