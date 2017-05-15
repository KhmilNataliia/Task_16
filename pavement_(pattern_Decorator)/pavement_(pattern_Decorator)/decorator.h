#include<string>
#include <catch.hpp>

using namespace std;

class Pavement {
public:
	virtual int getPrice() = 0;
	virtual string getDescription() = 0;
};


class Simple_Pavement : public Pavement {
public:
	int getPrice() { return 100; }
	string getDescription() { return "Classic pavement"; }
};

class Pavement_Decorator :public Pavement {
protected:
	Pavement* pavement;
public:
	Pavement_Decorator(Pavement* pavement) { this->pavement = pavement; }
	int getPrice() { return  pavement->getPrice(); }
	string getDescription() {
		return pavement->getDescription();
	}
};

class Colored : public Pavement_Decorator {
public:
	Colored(Pavement* pavement) : Pavement_Decorator(pavement){};
	int getPrice() { return pavement->getPrice() + 50; }
	string getDescription() {
		return pavement->getDescription() + ", in different colors";
	}
};

class Formed :public Pavement_Decorator {
public:
	Formed(Pavement* pavement) : Pavement_Decorator(pavement){};
	int getPrice() { return pavement->getPrice() + 80; }
	string getDescription() {
		return pavement->getDescription() + ", in triangle form";
	}
};

class Stone_Imitation :public Pavement_Decorator {
public:
	Stone_Imitation(Pavement* pavement) : Pavement_Decorator(pavement){};
	int getPrice() { return pavement->getPrice() + 280; }
	string getDescription() {
		return pavement->getDescription() + ", stone-imitated";
	}
};


class Soft_tehnology :public Pavement_Decorator {
public:
	Soft_tehnology(Pavement* pavement) : Pavement_Decorator(pavement){};
	int getPrice() { return pavement->getPrice() + 365; }
	string getDescription() {
		return pavement->getDescription() + ", made in soft technology";
	}
};




