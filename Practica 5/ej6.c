#include <stdio.h>

void cargarSumaPromedios(float * p_acidez_fija, float * p_acidez_volatil, float * p_acido_citrico, float * p_azucares_residuales, float * p_ph, float * p_sulfatos, float * p_alcohol, float * p_calidad, float acidez_fija, float acidez_volatil, float acido_citrico, float azucares_residuales, float ph, float sulfatos, float alcohol, float calidad);
void cargarMinimos(float * m_acidez_fija,float * m_acidez_volatil,float *m_acido_citrico,float *m_azucares_residuales,float * m_PH,float * m_sulfatos,float * m_alcohol,float * m_calidad,float C_acidez_fija,float C_acidez_volatil,float C_acido_citrico,float C_azucares_residuales,float C_PH,float C_sulfatos,float C_alcohol,float C_calidad);
void cargarMaximos(float * m_acidez_fija,float * m_acidez_volatil,float *m_acido_citrico,float *m_azucares_residuales,float * m_PH,float * m_sulfatos,float * m_alcohol,float * m_calidad,float C_acidez_fija,float C_acidez_volatil,float C_acido_citrico,float C_azucares_residuales,float C_PH,float C_sulfatos,float C_alcohol,float C_calidad);
void dividirPromedios(float * p_acidez_fija, float * p_acidez_volatil, float * p_acido_citrico, float * p_azucares_residuales, float * p_ph, float * p_sulfatos, float * p_alcohol, float * p_calidad, int );

int main(){

    FILE * f;
    FILE * out;
   f= fopen("vinos.csv","r");
   out= fopen("salida.txt","w");
   int reps=0;

   //declaracion de las variables a usar
    char string [100];

   //para promedio;

    float P_acidez_fija=0;
    float P_acidez_volatil=0;
    float P_acido_citrico=0;
    float P_azucares_residuales=0;
    float P_PH=0;
    float P_sulfatos=0;
    float P_alcohol=0;
    float P_calidad=0;

  //para minimo

    float m_acidez_fija;
    float m_acidez_volatil;
    float m_acido_citrico;
    float m_azucares_residuales;
    float m_PH;
    float m_sulfatos;
    float m_alcohol;
    float m_calidad;


  // para maximo

    float M_acidez_fija;
    float M_acidez_volatil;
    float M_acido_citrico;
    float M_azucares_residuales;
    float M_PH;
    float M_sulfatos;
    float M_alcohol;
    float M_calidad;

   //para current;

    float C_acidez_fija;
    float C_acidez_volatil;
    float C_acido_citrico;
    float C_azucares_residuales;
    float C_PH;
    float C_sulfatos;
    float C_alcohol;
    float C_calidad;
    if (f==NULL){
        printf("Error al abrir el archivo de vinos.\n");
        return 1;
    }

    fscanf(f,"%s",string); //primera pasada por ser los renglones
    printf("%s",string);
    fscanf(f,"%f %f %f %f %f %f %f %f %s",&C_acidez_fija,&C_acidez_volatil,&C_acido_citrico,&C_azucares_residuales,&C_PH,&C_sulfatos,&C_alcohol,&C_calidad,string);
    while (!feof(f)){
        cargarSumaPromedios(&P_acidez_fija,&P_acidez_volatil,&P_acido_citrico,&P_azucares_residuales,&P_PH,&P_sulfatos,&P_alcohol,&P_calidad,C_acidez_fija,C_acidez_volatil,C_acido_citrico,C_azucares_residuales,C_PH,C_sulfatos,C_alcohol,C_calidad);
        cargarMinimos(&m_acidez_fija,&m_acidez_volatil,&m_acido_citrico,&m_azucares_residuales,&m_PH,&m_sulfatos,&m_alcohol,&m_calidad,C_acidez_fija,C_acidez_volatil,C_acido_citrico,C_azucares_residuales,C_PH,C_sulfatos,C_alcohol,C_calidad);
        cargarMaximos(&M_acidez_fija,&M_acidez_volatil,&M_acido_citrico,&M_azucares_residuales,&M_PH,&M_sulfatos,&M_alcohol,&M_calidad,C_acidez_fija,C_acidez_volatil,C_acido_citrico,C_azucares_residuales,C_PH,C_sulfatos,C_alcohol,C_calidad);
        reps++;
        fscanf(f,"%f %f %f %f %f %f %f %f %s",&C_acidez_fija,&C_acidez_volatil,&C_acido_citrico,&C_azucares_residuales,&C_PH,&C_sulfatos,&C_alcohol,&C_calidad,string);
    }


    dividirPromedios(&P_acidez_fija,&P_acidez_volatil,&P_acido_citrico,&P_azucares_residuales,&P_PH,&P_sulfatos,&P_alcohol,&P_calidad,reps);

    
    fclose(f);
    //faltaria armar la tabla en el bloc de notas y ver por que no opera, pero no hay aparantes errores
    fprintf(f,"La menor acidez fija fue de %f ", m_acidez_fija);
   fclose(out);

    
    return 0;
}

void cargarSumaPromedios(float * p_acidez_fija, float * p_acidez_volatil, float * p_acido_citrico, float * p_azucares_residuales, float * p_ph, float * p_sulfatos, float * p_alcohol, float * p_calidad, float acidez_fija, float acidez_volatil, float acido_citrico, float azucares_residuales, float ph, float sulfatos, float alcohol, float calidad){
  * (p_acidez_fija)+= acidez_fija;
  *(p_acidez_volatil)+= acidez_volatil;
  *(p_acido_citrico)+= acido_citrico;
  *(p_azucares_residuales)+= azucares_residuales;
  *(p_ph)+=ph;
  *(p_sulfatos)+=sulfatos;
  *(p_alcohol)+= alcohol;
  *(p_calidad)+=calidad;
}

void cargarMinimos(float * m_acidez_fija,float * m_acidez_volatil,float *m_acido_citrico,float *m_azucares_residuales,float * m_PH,float * m_sulfatos,float * m_alcohol,float * m_calidad,float C_acidez_fija,float C_acidez_volatil,float C_acido_citrico,float C_azucares_residuales,float C_PH,float C_sulfatos,float C_alcohol,float C_calidad){
    if (C_acidez_fija<*(m_acidez_fija))
        *(m_acidez_fija) = C_acidez_fija;
    
    if (C_acidez_volatil<*(m_acidez_volatil))
        *(m_acidez_volatil)=C_acidez_volatil;
    
    if(C_acido_citrico<*(m_acido_citrico))
    *(m_acido_citrico)=C_acido_citrico;

    if(C_alcohol<*(m_alcohol))
    *(m_alcohol)=C_alcohol;

    if(C_azucares_residuales<*(m_azucares_residuales))
    *(m_azucares_residuales)=C_azucares_residuales;

    if(C_PH<*(m_PH))
    *(m_PH)=C_PH;

    if(C_calidad<*(m_calidad))
    *(m_calidad)=C_calidad;

    if(C_sulfatos<*(m_sulfatos))
    *(m_sulfatos)=C_sulfatos;



}

void cargarMaximos(float * m_acidez_fija,float * m_acidez_volatil,float *m_acido_citrico,float *m_azucares_residuales,float * m_PH,float * m_sulfatos,float * m_alcohol,float * m_calidad,float C_acidez_fija,float C_acidez_volatil,float C_acido_citrico,float C_azucares_residuales,float C_PH,float C_sulfatos,float C_alcohol,float C_calidad){
    if (C_acidez_fija>*(m_acidez_fija))
        *(m_acidez_fija) = C_acidez_fija;
    
    if (C_acidez_volatil>*(m_acidez_volatil))
        *(m_acidez_volatil)=C_acidez_volatil;
    
    if(C_acido_citrico>*(m_acido_citrico))
    *(m_acido_citrico)=C_acido_citrico;

    if(C_alcohol>*(m_alcohol))
    *(m_alcohol)=C_alcohol;

    if(C_azucares_residuales>*(m_azucares_residuales))
    *(m_azucares_residuales)=C_azucares_residuales;

    if(C_PH>*(m_PH))
    *(m_PH)=C_PH;

    if(C_calidad>*(m_calidad))
    *(m_calidad)=C_calidad;

    if(C_sulfatos>*(m_sulfatos))
    *(m_sulfatos)=C_sulfatos;



}

void dividirPromedios(float * p_acidez_fija, float * p_acidez_volatil, float * p_acido_citrico, float * p_azucares_residuales, float * p_ph, float * p_sulfatos, float * p_alcohol, float * p_calidad, int reps){
    *(p_acidez_fija)/=reps;
    *(p_acidez_volatil)/=reps;
    *(p_acido_citrico)/=reps;
    *(p_alcohol)/=reps;
    *(p_azucares_residuales)/=reps;
    *(p_calidad)/=reps;
    *(p_ph)/=reps;
    *(p_sulfatos)/=reps;
    
}