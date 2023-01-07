/*
Duke u ndikuar nga tema e diteve te sotme mbi Pandemine Koronavirus jam munduar te krijoje nje biblioteke elektronike.
Biblioteka ndahet ne dy grupe Perdoruesi dhe Administrata.
Gjate ketij projekti kam punuar me shume ne lidhje me perdoruesin(Lexuesi), po poashtu kam krijuar disa funksione
te cilat mund te merren si pjese e administrates funksionet qe kam perdorur me (Administrata) jane pjese qe ndoshta
nuk me jane dashur apo shkaku i testimit me te shpejte i kam injuruar.
E kam lene te hapur projektin per te krijuar Administaten per te shktuar funksione  dhe struktura te reja shkaku qe mendoj
qe ky projekt do te me duhet ta perpunoje e manevroje per detyrat e ardhshme pasi qe nuk e dija se cka do te me duhet e cka jo
me saktesisht.
Pasi si teme kishin struktura ndoshta e kam nderlikuar pak projekin po kam dashur te perdori sa me shume strukttura dhe funksione!
*/
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
//Kjo strukture sherben per informata rreth adreseses se lexuesit
//Kjo strukture sherben per informata rreth adreseses se lexuesit (Administrata)
struct Adresa
{
	string adresa;
	string qyteti;
	string shteti;
};
//Kjo eshte struktura kryesore e programit
struct Lexuesi
{
	int id_lexuesi;
	string emri_lexuesi;
	int mosha_lexuesi;
	Adresa adresa_lexuesit;
	//Funksioni i cili pranon oren ne te cilen lexuesi ka shkuar ne biblioteke
	int LexoOra(int, int, int);
	//Funksion i cili sherben per te lexuar te dhenat e struktures
	void lexo_lexuesin();
	//Funksioni i cili sherben per te printuar te dhent e struktures
	void print_lexuesin();
	// funksioni qe verifikone nese personi do te huazoje ndonje liber apo do the ktheje.
	bool huazim(int);
	// Pas kthimit te librit lexuesi pyetet nese deshiron te huazoje nje liber te ri
	bool libriri(int);
	// Mosha e lexuesit ky pyetet per te ditur nese eshte i rritur ose jo
	bool mosha() 
		{
			if ((mosha_lexuesi > 7) && (mosha_lexuesi < 18))
				return true;
			else
				if ((mosha_lexuesi >= 18) && (mosha_lexuesi < 100))
					return false;
		}
	

};
//Kjo strukture do te sherbeje per te ruajtur te dhenat personale te personelit
struct Personeli
{
	string emri_personelit;
	//Ky funksion sherben per te kalkuluar pagen per nje muaj te caktuar te vitit.(Administrata)
	double pagaMuaj(int m, int y);

};
//kjo strukture sherben si stok per librat per lexuesin e moshes me te vogel se 18 vjeq 
struct BibliotekaPerFemije
{
	string emri_librit;
	string emri_autorit;
	//Funksioni i cili sherben per te printuar te dhent e struktures
	void print_biblioteka(BibliotekaPerFemije);
	//Funksion i cili sherben per te lexuar te dhenat e struktures (Administrata)
	void lexo_femije();
};
//kjo strukture sherben si stok per librat per lexuesin e moshes me te vogel se 18 vjeq 
struct BibliotekaPerTeRRitur
{
	string emri_librit1;
	string emri_autorit1;
	int nr_zgjedhjes1;
	//Funksioni i cili sherben per te printuar te dhent e struktures
	void print_biblioteka1(BibliotekaPerTeRRitur);
	//Funksion i cili sherben per te lexuar te dhenat e struktures (Administrata)
	void lexo_territur();
};
//Kjo strukture sherben per te te regjistruaj zgjedhjen e librit qe ka bere lexuesi
struct Zgjedhja
{
	//Funksioni i cili sherben per te printuar zgjedhjen e librit te te miturve
	void print_zgjedhjen(int, BibliotekaPerFemije);
	//Funksioni i cili sherben per te printuar zgjedhjen e librit te te rriturve
	void print_zgjedhjen1(int, BibliotekaPerTeRRitur);
	//Sherben per te ruajtur pergjigjjen e lexuesit nese deshiron te huazoj nje liber te ri (te te miturit)
	bool nr_zgjedhja(int nr)
	{
		if (nr == 1)
			return true;
		else
			return false;
	}
	//Sherben per te ruajtur pergjigjjen e lexuesit nese deshiron te huazoj nje liber te ri (te te rriturit)
	bool nr_zgjedhja1(int nr)
	{
		if (nr == 1)
			return true;
		else
			if (nr == 2)
				return false;
	}
};
//Keto dy funksione sherbejne per te printuar te dhenat ne main ne baze te moshes 
void printOrari_biblioteka(Lexuesi , BibliotekaPerFemije [], Personeli , Personeli );
void printOrari_biblioteka1(Lexuesi, BibliotekaPerTeRRitur [], Personeli, Personeli);
int main()
{
	Lexuesi L;
	Personeli P1, P2, P3, P4;
	P1 = { "Ali" };
	P2 = { "Luljeta" };
	P3 = { "Imer" };
	P4 = { "Mimoza" };
	BibliotekaPerFemije BF[2];
	BF[0] = { "RRefenja me zanat", "Grup autoresh" };
	BF[1] = { "Perralla me kafshe camarroke", "Grup autoresh" };
	BibliotekaPerTeRRitur BR[2];
	BR[0] = { "1984","George Orwell" };
	BR[1]= { "Vetem Njehere ne jete", "Danielle Steel" };
	cout << "Ju lutem Shkruani te dhenat tuaja:";
	L.lexo_lexuesin();
	Zgjedhja Z;
	if(L.mosha()==true)
	printOrari_biblioteka(L,BF,P3,P4);
	else
		if(L.mosha()==false)
	printOrari_biblioteka1(L,BR,P2,P1);

	system("pause");
	return 0;
}
//Funksioni i cili lexon te dhenat e shkruara nga ueseri (Lexuesi)
void Lexuesi::lexo_lexuesin()
{
	cout << endl << "Shkruaj Id :";
	cin >> id_lexuesi;
	cout << endl << "Shkruaj emrin  :";
	cin >> emri_lexuesi;
	cout << endl << "Shkruaj moshen  :";
	cin >> mosha_lexuesi;
	cout << endl << "Shkruaj adresen  :";
	cin >> adresa_lexuesit.adresa;
	cout << endl << "Shkruaj vendlindjen:";
	cin >> adresa_lexuesit.qyteti;
	cout << endl << "Shkruaj Shtetlindjen:" << endl;
	cin >> adresa_lexuesit.shteti;
}
//Funksioni i cili na sherben per te printuar te dhenat e Lexuesit (nese na duhen)
void Lexuesi::print_lexuesin()
{
	
	cout << endl << id_lexuesi
		<< endl << emri_lexuesi
		<< endl << mosha_lexuesi
		<< endl << adresa_lexuesit.adresa
		<< endl << adresa_lexuesit.qyteti
		<< endl << adresa_lexuesit.shteti;
}
//Funksioni i na kthen kohen ne sekonda, ne baze te sekondave zgjedhim cili punetor ka ate orar
int Lexuesi::LexoOra(int o, int m, int s)
{
	int d;
	d = o * 3600 + m * 60 + s;
	return d;
}
//Funksioni i cili kthen True/false ne baze te zgjedhjes se userit per kryerjen e sherbimit
bool Lexuesi::huazim(int a)
{
	if (a == 1)
		return true;
	else
		if(a==2)
		return false;
}
//Funksioni qe kthen true/false ne pergjigjjen e userit per kryerjen e sherbimit
bool Lexuesi::libriri(int pergjigjja)
{
	if (pergjigjja == 1)
		return true;
	else
		if (pergjigjja == 2)
			return false;
}
//Ky funskion llogarit pagen ne muaj e cila varet ne varesi se sa dite ka ai muaj i viti (Administrata)
double Personeli::pagaMuaj(int m, int y)
{
	int paga = 0;

	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 12:
		for (int i = 0; i <= 31; i++)
		{
			paga = paga + (6 * 20);
		}
	case 2:
		if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
		{
			for (int i = 0; i <= 29; i++)
			{
				paga = paga + (6 * 20);
			}
		}
		else
		{
			for (int i = 0; i <= 28; i++)
			{
				paga = paga + (6 * 20);
			}
		}
	case 4:
	case 6:
	case 9:
	case 11:
		for (int i = 0; i <= 30; i++)
		{
			paga = paga + (6 * 20);
		}

	}
	return paga;
}
//Funksioni i cili sherben per te lexuar libra  ne biblioteken per femije (Administrata)
void BibliotekaPerFemije::lexo_femije()
{

	cout << "Kerko nje liber" << endl;
	cout << "Shkruaj emrin e librit";
	cin >> emri_librit;
	cout << endl << "Shkruaj emrin e autorit";
	cin >> emri_autorit;
	cout << endl;


}

//Funksioni i cli printon librat qe gjenden ne biblioteke (biblioteka per femije)
void BibliotekaPerFemije::print_biblioteka(BibliotekaPerFemije B)
{
	cout << B.emri_librit << "\t" << B.emri_autorit << endl;
}
//Funksioni i cili sherben si fund i programit ku printon 
//librin e zgjedhur nga useri dhe disa konstruksione tjera (biblioteka per femije)
void Zgjedhja::print_zgjedhjen(int nr_zgjedhjes, BibliotekaPerFemije B)
{
	cout << "Ju keni zgjedhur librin me titull: '"<<endl
		<< B.emri_librit
		<< "' me autor " << B.emri_autorit;
	cout << endl << "VINI RE! \n Librin keni drejte ta mbani deri ne 14 dite!!" << endl
		<< "Ju faleminderit!!" << endl;
}
//Funksioni i cili sherben per te lexuar libra  ne biblioteken per femije (Administrata)
void BibliotekaPerTeRRitur::lexo_territur()
{
	BibliotekaPerTeRRitur B;
	cout << "Kerko nje liber" << endl;
	cout << "Shkruaj emrin e librit";
	cin >> emri_librit1;
	cout << endl << "Shkruaj emrin e autorit";
	cin >> emri_autorit1;
	cout << endl;

}

//Funksioni i cli printon librat qe gjenden ne biblioteke (biblioteka per te rritur)
void BibliotekaPerTeRRitur::print_biblioteka1(BibliotekaPerTeRRitur B)
{


	cout << B.emri_librit1 << "\t" << B.emri_autorit1 << endl;
}
//Funksioni i cili sherben si fund i programit ku printon 
//librin e zgjedhur nga useri dhe disa konstruksione tjera (biblioteka per femije)
void Zgjedhja::print_zgjedhjen1(int nr_zgjedhjes1, BibliotekaPerTeRRitur L)
{

	cout << "Ju keni zgjedhur librin me titull:' "<<endl << L.emri_librit1
		<< "' dhe autor " << L.emri_autorit1;
	cout << endl << "VINI RE! \n Librin keni drejte ta mbani deri ne 14 dite!!" << endl
		<< "Ju faleminderit!!" << endl;
}
void printOrari_biblioteka(Lexuesi L, BibliotekaPerFemije BF[2], Personeli P1, Personeli P4)
{

	//variabla a sherben per marre zgjedhjen e lexuesit nga pyetja e funksionit huazim
	//variabla b sherbne oer te marre pergjgjjen e lexuesit nga pyetja a deshiron te huazoje nje liber te ri lexuesi
	// variabla nr_zgjedhjes dhe nr_zgjedhjes1 sherbejne tek funskionet per te lexuar zgjedhjet e librit nga lexuesi
	int a, b, nr_zgjedhjes;
	Zgjedhja Z;
	int o, m, s;
	cout << "Pershendetje Miresevini" << endl;
	cout << endl << "Shkruaj oren(0 - 24) : ";
	cin >> o;
	cout << endl << "Shkruaj minutat: ";
	cin >> m;
	cout << endl << "Shkruaj Sekondat: ";
	cin >> s;
	cout << "Ora eshte:" << setw(2) << setfill('0') << o << ":"
		<< setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << endl;

	L.LexoOra(o, m, s);
	//Ne baze te moshes ndahen punetore ne dy ku ponojne me orar te caktuar paradite/pasdite (09:00-14;00)(14:00-19:00)
	if ((L.LexoOra(o, m, s) > 32400) && (L.LexoOra(o, m, s) <= 50400))
		cout << "Pershendetje Une jam " << P4.emri_personelit << " Si mund t'ju ndihmoje" << endl;
	else
		if ((L.LexoOra(o, m, s) > 50400) && (L.LexoOra(o, m, s) < 68400))
			cout << "Pershendetje Une jam " << P1.emri_personelit << " Si mund t'ju ndihmoje" << endl;
		else
		{
			cout << "Me vjen keq nuk punojme ne kete ore! Orari yne i punes eshte nga 09:00-19:00"<<endl;
			cout << "Mirupafshim!" << endl;
			exit(EXIT_FAILURE);
		}
Fillimi://label sherben per kthyer lexuesin nese ai zgjedh per te huazuar nje liber te ri
	//Pytet lexuesi se cilin sherbin ka per te kryer
	cout << endl << "Cilin sherbim keni per te kryer:" << endl
		<< "Shkruaj '1'per huazim te librit" << endl
		<< "Shkruaj '2' per te kthyer librin" << endl;
	cin >> a;
	if (L.huazim(a))
	{
		cout << endl << "Librat me titull te ngashem  qe gjenden ne stok jane:" << endl;
		cout << "Shtyp '1' Per ------->";
		BF[0].print_biblioteka(BF[0]);
		cout << endl << "Shtyp '2' Per-------> ";
		BF[1].print_biblioteka(BF[1]);
		cout << endl << "Ju lutem shkruani numri e librit qe doni te zgjedhni:" << endl;
		cin >> nr_zgjedhjes;
		if (Z.nr_zgjedhja(nr_zgjedhjes))
			Z.print_zgjedhjen(nr_zgjedhjes, BF[0]);
		else
			Z.print_zgjedhjen(nr_zgjedhjes, BF[1]);
	}
	else
	{
		cout << "Ju faleminderit qe kthyet librin :)" << endl
			<< "A deshironi te merrni nje liber tjeter?" << endl
			<< "Shtyp '1' per Po" << endl
			<< "Shtyp '2' Per Jo" << endl;
		cin >> b;
		if (L.libriri(b))
			goto Fillimi;// sherben per kthyer lexuesin ne program nese ai zgjedh per te huazuar nje liber te ri
		else
		{
			cout << "Mirupafshim!" << endl;
		}
	}

}

void printOrari_biblioteka1(Lexuesi L, BibliotekaPerTeRRitur BF[2], Personeli P1, Personeli P4)
{
	//variabla a sherben per marre zgjedhjen e lexuesit nga pyetja e funksionit huazim
	//variabla b sherbne oer te marre pergjgjjen e lexuesit nga pyetja a deshiron te huazoje nje liber te ri lexuesi
	// variabla nr_zgjedhjes dhe nr_zgjedhjes1 sherbejne tek funskionet per te lexuar zgjedhjet e librit nga lexuesi
	int a, b, nr_zgjedhjes1;
	Zgjedhja Z;
	int o, m, s;
	cout << "Pershendetje Miresevini" << endl;
	cout << endl << "Shkruaj oren(0 - 24) : ";
	cin >> o;
	cout << endl << "Shkruaj minutat: ";
	cin >> m;
	cout << endl << "Shkruaj Sekondat: ";
	cin >> s;
	cout << "Ora eshte:" << setw(2) << setfill('0') << o << ":"
		<< setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << endl;

	L.LexoOra(o, m, s);
	//Ne baze te moshes ndahen punetore ne dy ku ponojne me orar te caktuar paradite/pasdite (09:00-14;00)(14:00-19:00)
	if ((L.LexoOra(o, m, s) > 32400) && (L.LexoOra(o, m, s) <= 50400))
		cout << "Pershendetje Une jam " << P1.emri_personelit << " Si mund t'ju ndihmoje" << endl;
	else
		if ((L.LexoOra(o, m, s) > 50400) && (L.LexoOra(o, m, s) < 68400))
			cout << "Pershendetje Une jam " << P4.emri_personelit << " Si mund t'ju ndihmoje" << endl;
		else
		{
			cout << "Me vjen keq nuk punojme ne kete ore! Orari yne i punes eshte nga 09:00-19:00";
			cout << "Mirupafshim!" << endl;
			exit(EXIT_FAILURE);
		}
Fillimi://label sherben per kthyer lexuesin nese ai zgjedh per te huazuar nje liber te ri
	//Pytet lexuesi se cilin sherbin ka per te kryer
	cout << endl << "Cilin sherbim keni per te kryer:" << endl
		<< "Shkruaj '1'per huazim te librit" << endl
		<< "Shkruaj '2' per te kthyer librin" << endl;
	cin >> a;
	if (L.huazim(a))
	{
		cout << endl << "Librat me titull te ngashem  qe gjenden ne stok jane:" << endl;
		cout << "Shtyp '1' Per ------->";
		BF[0].print_biblioteka1(BF[0]);
		cout << endl << "Shtyp '2' Per-------> ";
		BF[1].print_biblioteka1(BF[1]);
		cout << endl << "Ju lutem shkruani numri e librit qe doni te zgjedhni:" << endl;
		cin >> nr_zgjedhjes1;
		if (Z.nr_zgjedhja(nr_zgjedhjes1))
			Z.print_zgjedhjen1(nr_zgjedhjes1, BF[0]);
		else
			Z.print_zgjedhjen1(nr_zgjedhjes1, BF[1]);
	}
	else
	{
		cout << "Ju faleminderit qe kthyet librin :)" << endl
			<< "A deshironi te merrni nje liber tjeter?" << endl
			<< "Shtyp '1' per Po" << endl
			<< "Shtyp '2' Per Jo" << endl;
		cin >> b;
		if (L.libriri(b))
			goto Fillimi;// sherben per kthyer lexuesin ne program nese ai zgjedh per te huazuar nje liber te ri
		else
		{
			cout << "Mirupafshim!" << endl;
		}
	}

}
