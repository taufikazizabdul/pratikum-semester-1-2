#include <stdio.h>

int ziizhektar (int hektar)
{
	int are;
	are = hektar*100;
	
	return are;
}
int ziizm_persegi(int are)
{
	int m_persegi;
	m_persegi = are*100;
	
	return m_persegi; 
}
int ziizcm_persegi(int m_persegi)
{
	int cm_persegi;
	cm_persegi =m_persegi*10000;
	
	return cm_persegi;
}
int main()
{
	int hektar;
	int are =ziizhektar(hektar) ;
	int m_persegi =ziizm_persegi(are) ;
	int cm_persegi =ziizcm_persegi(m_persegi)  ;
	
	printf("masukan satuan luas dalam satuan hektar\t:");
	scanf("%i",&hektar);
	
	are =ziizhektar(hektar);
	m_persegi =ziizm_persegi(are);
	cm_persegi =ziizcm_persegi(m_persegi);
	
	
	printf("konveksi satuan luas adalah %i hektar sama dengan :\n",hektar);
	printf("\n%d are \n%d meter_persegi \n%i centimeter_persegi\n",are,m_persegi,cm_persegi);
	printf("-------------------------------");
	
	return 0;
}