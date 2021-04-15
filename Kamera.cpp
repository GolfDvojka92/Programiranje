#include <iostream>
#include "dinstring.hpp"

class kamera
{
	public:
		int megaPikseli;
		int freeSpace;
		static int photoCounter;
		kamera();
		kamera(int a, int b, int c) { megaPikseli = a; freeSpace = b; photoCounter = c; }
		kamera(const kamera& p) { megaPikseli = p.megaPikseli; freeSpace = p.freeSpace; photoCounter = p.photoCounter; }
		static int getPhotoCounter() { return photoCounter; }
		bool slikaj()
		{
			if (megaPikseli > freeSpace)
			{
				return false;
			}
			else
			{
				freeSpace -= megaPikseli;
				return true;
			}
		}
};

kamera::kamera()
{
	megaPikseli = 12;
	freeSpace = 1024;
	photoCounter = 0;
}

class videoKamera : public kamera
{
	public:
		static int videoCounter;
		videoKamera();
		videoKamera(int a) { videoCounter = a; }
		static int getVideoCounter() { return videoCounter; }
		bool snimaj(int sekunde)
		{
			if (megaPikseli > freeSpace)
			{
				return false;
			}
			else
			{
				freeSpace -= megaPikseli * sekunde;
				return true;
			}
		}
};

videoKamera::videoKamera()
{
	videoCounter = 0;
}

class telefon
{
	public:
		DinString broj;
		telefon();
		telefon(DinString a) { broj = a; }
		bool pozovi(DinString broj2)
		{
			if (broj == broj2)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
};

telefon::telefon()
{
	broj = "0614427762";
}

class telefonGen2 : public telefon
{
	public:
		kamera k;
		telefonGen2() {}
		telefonGen2(kamera a) { k = a; }
		bool slikajSliku()
		{
			return k.slikaj();
		}
};

class telefonGen3 : public telefonGen2
{
	public:
		videoKamera vk;
		telefonGen3() {}
		telefonGen3(videoKamera vk2) { vk = vk2; }
		bool snimiVideo(int sec)
		{
			return vk.snimaj(sec);
		}
};