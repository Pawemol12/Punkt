
class Punkt
{
private:
	float x;
	float y;

public:
	Punkt(Punkt& p);
	Punkt(float x_=0, float y_ =0);
	void dodaj(Punkt &p); //dodawanie do siebie wspó³rzêdnych wektora
	void dodaj(Punkt *p);
	void drukuj();
	~Punkt();
};
