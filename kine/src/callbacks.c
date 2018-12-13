#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "kineaffrdv .h"
#include "fichekine.h"
 /////////////////////////////Login////////////////////////////////////////
void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *output;
GtkWidget *Login;
GtkWidget *Admin;
char user[20],usr[20];
char password[20],pwd[20];
int ok=0,role;

input1=lookup_widget(button,"entry1");
strcpy(user,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(button,"entry2");
strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));
output=lookup_widget(button, "label3");
FILE *f;
f=fopen("/home/wejden/Desktop/kine/src/users.txt","r+");
if (f)
{
while(fscanf(f,"%s %s %d",usr,pwd,&role)!=EOF)
{
if(strcmp(pwd,password)==0&&strcmp(usr,user)==0&&role==1)
{
	Login=lookup_widget(button,"kine_login");
	Admin=create_Espace_kine();
	gtk_widget_show (Admin);
        gtk_widget_hide(Login);
	ok=1;
}
}
if (ok==0)
gtk_label_set_text(GTK_LABEL (output), "erreur");
}
else
gtk_label_set_text(GTK_LABEL (output), "impossible d'ouvrir le fichier");
}


void
on_ajouter_kine_dispo_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
int ok=1;
int hr,j,m,a,jf,mf,af,hf;
char ID[50],IDF[50],sh[200];
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *heure;
GtkWidget *id;
GtkWidget *output;
output=lookup_widget(button, "label12");
jour=lookup_widget(button, "jour_dispo_kine");
mois=lookup_widget(button, "mois_dispo_kine");
annee=lookup_widget(button, "annee_dispo_kine");
heure=lookup_widget(button, "heure_dispo_kine");
id=lookup_widget(button, "id_dispo_kine");
strcpy(ID,gtk_entry_get_text(GTK_ENTRY(id)));
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
if(strcmp("9h-10h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=1;
else if(strcmp("11h-12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=2;
else if(strcmp("14h-15h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=3;
else if(strcmp("18h-19h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=4;
else {ok=0;
strcpy(sh,"Donnez une format d'heure valide\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
FILE* f=fopen("/home/wejden/Desktop/kine/src/dispo.txt","a+");
if(f!=NULL)
{
while(fscanf(f,"%s %d %d %d %d\n",IDF,&jf,&mf,&af,&hf)!=EOF)
{
if(strcmp(IDF,ID)==0)
{
ok=0;
strcpy(sh,"L'id deja existe\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
if((hf==hr)&&(j==jf)&&(m==mf)&&(a==af))
{
ok=0;
strcpy(sh,"La seance est deja reservee\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
}
}
else {
ok=0;
strcpy(sh,gtk_label_get_text(GTK_LABEL (output)));
strcat(sh,"le fichier ne s'ouvre pas\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
if(ok==0)
{
strcpy(sh,"operation echouee\n");
gtk_label_set_text(GTK_LABEL (output),sh);

}
else {
fprintf(f,"%s %d %d %d %d\n",ID,j,m,a,hr);
fclose(f);
strcpy(sh,"Succes\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}

}


void
on_kine_afficher_rendez_vous_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *TREE;
    GtkWidget *treeview1;    
    TREE=create_Rendez_vous();
    gtk_widget_show (TREE);
     treeview1=lookup_widget(TREE,"treeview1");
     kine_affichier_rdv(treeview1);



}


void
on_kine_modifier_rendez_vous_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{
int ok=1,okd=0,okr=1,okrid=0;
int hr,j,m,a,jf,mf,af,hf;
char ID[50],IDF[50],sh[200];
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *heure;
GtkWidget *id;
GtkWidget *output;
output=lookup_widget(button, "label26");
jour=lookup_widget(button, "spinbutton1");
mois=lookup_widget(button, "spinbutton2");
annee=lookup_widget(button, "spinbutton3");
heure=lookup_widget(button, "comboboxentry1");
id=lookup_widget(button, "entry3");
strcpy(ID,gtk_entry_get_text(GTK_ENTRY(id)));
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
if(strcmp("9h-10h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=1;
else if(strcmp("11h-12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=2;
else if(strcmp("14h-15h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=3;
else if(strcmp("18h-19h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=4;
else {ok=0;
strcpy(sh,"Donnez une format d'heure valide\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
FILE* f=fopen("/home/wejden/Desktop/kine/src/dispo.txt","r+");
FILE* fr=fopen("/home/wejden/Desktop/kine/src/rdv.txt","r+");
FILE* f1=fopen("/home/wejden/Desktop/kine/src/inter.txt","w+");

if(f!=NULL)
{
while(fscanf(f,"%s %d %d %d %d\n",IDF,&jf,&mf,&af,&hf)!=EOF)
{
if((hf==hr)&&(j==jf)&&(m==mf)&&(a==af))
{
okd=1;
}
}
}
else {
ok=0;
strcpy(sh,gtk_label_get_text(GTK_LABEL (output)));
strcat(sh,"le fichier ne s'ouvre pas\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
if(ok==0)
{
strcpy(sh,"operation echouee\n");
gtk_label_set_text(GTK_LABEL (output),sh);

}
else {
if (okd==1)
{
if(fr!=NULL)
{
while(fscanf(fr,"%s %d %d %d %d\n",IDF,&jf,&mf,&af,&hf)!=EOF)
{
if (strcmp(ID,IDF)==0)
okrid=1;
else
fprintf(f1,"%s %d %d %d %d\n",IDF,jf,mf,af,hf);
if((hf==hr)&&(j==jf)&&(m==mf)&&(a==af))
okr=0;
}
}
if(okr==1&&okd==1&&okrid==1)
{
fprintf(f1,"%s %d %d %d %d\n",ID,j,m,a,hr);
strcpy(sh,"Succes\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
else
gtk_label_set_text(GTK_LABEL (output),"echec");
}
}
printf("ok=%d okr=%d okrid=%d okd=%d",ok,okr,okrid,okd);
fclose(fr);
fclose(f);
fclose(f1);

rename("/home/wejden/Desktop/kine/src/inter.txt","/home/wejden/Desktop/kine/src/rdv.txt");
}


on_supprimer_kine_dispo_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{
int ok=0;
int hr,j,m,a,jf,mf,af,hf;
char ID[50],IDF[50],sh[200];
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *heure;
GtkWidget *id;
GtkWidget *output;
output=lookup_widget(button, "label12");
jour=lookup_widget(button, "jour_dispo_kine");
mois=lookup_widget(button, "mois_dispo_kine");
annee=lookup_widget(button, "annee_dispo_kine");
heure=lookup_widget(button, "heure_dispo_kine");
id=lookup_widget(button, "id_dispo_kine");
strcpy(ID,gtk_entry_get_text(GTK_ENTRY(id)));
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
if(strcmp("9h-10h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=1;
else if(strcmp("11h-12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=2;
else if(strcmp("14h-15h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=3;
else if(strcmp("18h-19h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=4;
else {ok=0;
strcpy(sh,"Donnez une format d'heure valide\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
FILE* f=fopen("/home/wejden/Desktop/kine/src/dispo.txt","a+");
FILE* f1=fopen("/home/wejden/Desktop/kine/src/inter.txt","w+");
if(f!=NULL)
{
while(fscanf(f,"%s %d %d %d %d\n",IDF,&jf,&mf,&af,&hf)!=EOF)
{
if(strcmp(IDF,ID)==0)
{
ok=1;
}
else
fprintf(f1,"%s %d %d %d %d\n",IDF,jf,mf,af,hf);
}
}
else {
ok=0;
strcpy(sh,gtk_label_get_text(GTK_LABEL (output)));
strcat(sh,"le fichier ne s'ouvre pas\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
if(ok==0)
{
strcpy(sh,"operation echouee\n");
gtk_label_set_text(GTK_LABEL (output),sh);

}
else {
strcpy(sh,"Succes\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
remove("/home/wejden/Desktop/kine/src/dispo.txt");
rename("/home/wejden/Desktop/kine/src/inter.txt","/home/wejden/Desktop/kine/src/dispo.txt");
fclose(f);
fclose(f1);
}


void
on_kine_ajouter_rendez_vous_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{
int ok=1,okd=0,okr=1;
int hr,j,m,a,jf,mf,af,hf;
char ID[50],IDF[50],sh[200];
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *heure;
GtkWidget *id;
GtkWidget *output;
output=lookup_widget(button, "label26");
jour=lookup_widget(button, "spinbutton1");
mois=lookup_widget(button, "spinbutton2");
annee=lookup_widget(button, "spinbutton3");
heure=lookup_widget(button, "comboboxentry1");
id=lookup_widget(button, "entry3");
strcpy(ID,gtk_entry_get_text(GTK_ENTRY(id)));
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
if(strcmp("9h-10h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=1;
else if(strcmp("11h-12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=2;
else if(strcmp("14h-15h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=3;
else if(strcmp("18h-19h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=4;
else {ok=0;
strcpy(sh,"Donnez une format d'heure valide\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
FILE* f=fopen("/home/wejden/Desktop/kine/src/dispo.txt","r+");
FILE* fr=fopen("/home/wejden/Desktop/kine/src/rdv.txt","r+");

if(f!=NULL)
{
while(fscanf(f,"%s %d %d %d %d\n",IDF,&jf,&mf,&af,&hf)!=EOF)
{
if((hf==hr)&&(j==jf)&&(m==mf)&&(a==af))
{
okd=1;
}
}
}
else {
ok=0;
strcpy(sh,gtk_label_get_text(GTK_LABEL (output)));
strcat(sh,"le fichier ne s'ouvre pas\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
if(ok==0)
{
strcpy(sh,"operation echouee\n");
gtk_label_set_text(GTK_LABEL (output),sh);

}
else {
if (okd==1)
{
if(fr!=NULL)
{
while(fscanf(fr,"%s %d %d %d %d\n",IDF,&jf,&mf,&af,&hf)!=EOF)
{
if((hf==hr)&&(j==jf)&&(m==mf)&&(a==af))
okr=0;
if (strcmp(ID,IDF)==0)
okr=0;
}
}
if(okr==1&&okd==1)
{
fclose(fr);
fopen("/home/wejden/Desktop/kine/src/rdv.txt","a+");
fprintf(fr,"%s %d %d %d %d\n",ID,j,m,a,hr);
strcpy(sh,"Succes\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
else
gtk_label_set_text(GTK_LABEL (output),"echec");
}
}
fclose(fr);
fclose(f);
}


void
on_modifier_kine_dispo_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
int ok=1;
int hr,j,m,a,jf,mf,af,hf;
char ID[50],IDF[50],sh[200];
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *heure;
GtkWidget *id;
GtkWidget *output;
output=lookup_widget(button, "label12");
jour=lookup_widget(button, "jour_dispo_kine");
mois=lookup_widget(button, "mois_dispo_kine");
annee=lookup_widget(button, "annee_dispo_kine");
heure=lookup_widget(button, "heure_dispo_kine");
id=lookup_widget(button, "id_dispo_kine");
strcpy(ID,gtk_entry_get_text(GTK_ENTRY(id)));
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
if(strcmp("9h-10h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=1;
else if(strcmp("11h-12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=2;
else if(strcmp("14h-15h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=3;
else if(strcmp("18h-19h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=4;
else {ok=0;
strcpy(sh,"Donnez une format d'heure valide\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
FILE* f=fopen("/home/wejden/Desktop/kine/src/dispo.txt","a+");
FILE* fr=fopen("/home/wejden/Desktop/kine/src/rdv.txt","a+");
FILE* f1=fopen("/home/wejden/Desktop/kine/src/inter.txt","w+");
if(f!=NULL)
{
while(fscanf(f,"%s %d %d %d %d\n",IDF,&jf,&mf,&af,&hf)!=EOF)
{
if(strcmp(IDF,ID)==0)
{
ok=1;
fprintf(f1,"%s %d %d %d %d\n",ID,j,m,a,hr);

}
else
fprintf(f1,"%s %d %d %d %d\n",IDF,jf,mf,af,hf);
if((hf==hr)&&(j==jf)&&(m==mf)&&(a==af))
{
ok=0;
strcpy(sh,"La seance est deja reservee\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
}
}
else {
ok=0;
strcpy(sh,gtk_label_get_text(GTK_LABEL (output)));
strcat(sh,"le fichier ne s'ouvre pas\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
if(ok==0)
{
strcpy(sh,"operation echouee\n");
gtk_label_set_text(GTK_LABEL (output),sh);

}
else {
strcpy(sh,"Succes\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
remove("/home/wejden/Desktop/kine/src/dispo.txt");
rename("/home/wejden/Desktop/kine/src/inter.txt","/home/wejden/Desktop/kine/src/dispo.txt");
fclose(f);
fclose(f1);
fclose(fr);
}


void
on_kine_supprimer_rendez_vous_clicked  (GtkButton       *button,
                                        gpointer         user_data)
{
int ok=1,okd=0,okr=1,okrid=0;
int hr,j,m,a,jf,mf,af,hf;
char ID[50],IDF[50],sh[200];
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *heure;
GtkWidget *id;
GtkWidget *output;
output=lookup_widget(button, "label26");
jour=lookup_widget(button, "spinbutton1");
mois=lookup_widget(button, "spinbutton2");
annee=lookup_widget(button, "spinbutton3");
heure=lookup_widget(button, "comboboxentry1");
id=lookup_widget(button, "entry3");
strcpy(ID,gtk_entry_get_text(GTK_ENTRY(id)));
j=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
m=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
if(strcmp("9h-10h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=1;
else if(strcmp("11h-12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=2;
else if(strcmp("14h-15h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=3;
else if(strcmp("18h-19h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(heure)))==0)
hr=4;
else {ok=0;
strcpy(sh,"Donnez une format d'heure valide\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
FILE* f=fopen("/home/wejden/Desktop/kine/src/rdv.txt","a+");
FILE* f1=fopen("/home/wejden/Desktop/kine/src/inter.txt","w+");
if(f!=NULL)
{
while(fscanf(f,"%s %d %d %d %d\n",IDF,&jf,&mf,&af,&hf)!=EOF)
{
if(strcmp(IDF,ID)==0)
{
ok=1;
}
else
fprintf(f1,"%s %d %d %d %d\n",IDF,jf,mf,af,hf);
}
}
else {
ok=0;
strcpy(sh,gtk_label_get_text(GTK_LABEL (output)));
strcat(sh,"le fichier ne s'ouvre pas\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
if(ok==0)
{
strcpy(sh,"operation echouee\n");
gtk_label_set_text(GTK_LABEL (output),sh);

}
else {
strcpy(sh,"Succes\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
remove("/home/wejden/Desktop/kine/src/rdv.txt");
rename("/home/wejden/Desktop/kine/src/inter.txt","/home/wejden/Desktop/kine/src/rdv.txt");
fclose(f);
fclose(f1);

}


void
on_kine_ajouter_fiche_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
int ok=1;
char cn[50],n[50],pn[50],ad[50],d[50],rcn[50],rn[50],rpn[50],rad[50],rd[50],sh[200];
GtkWidget *DN;
GtkWidget *cin;
GtkWidget *ADR;
GtkWidget *Nom;
GtkWidget *Prenom;
GtkWidget *output;
output=lookup_widget(button, "label32");
cin=lookup_widget(button, "kine_nom_fiche");
DN=lookup_widget(button, "entry5");
ADR=lookup_widget(button, "entry4");
Nom=lookup_widget(button, "kinenomfiche");
Prenom=lookup_widget(button, "entry6");
strcpy(cn,gtk_entry_get_text(GTK_ENTRY(cin)));
strcpy(n,gtk_entry_get_text(GTK_ENTRY(Nom)));
strcpy(pn,gtk_entry_get_text(GTK_ENTRY(Prenom)));
strcpy(ad,gtk_entry_get_text(GTK_ENTRY(ADR)));
strcpy(d,gtk_entry_get_text(GTK_ENTRY(DN)));

FILE* f=fopen("/home/wejden/Desktop/kine/src/FM.txt","r+");
if(f!=NULL)
{
while(fscanf(f,"%s %s %s %s %s\n",rcn,rn,rpn,rad,rd)!=EOF)
{
if(strcmp(rcn,cn)==0)
{
ok=0;
strcpy(sh,"La cin deja existe\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
}
}
else {
ok=0;
strcpy(sh,gtk_label_get_text(GTK_LABEL (output)));
strcat(sh,"le fichier ne s'ouvre pas\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}
if(ok==0)
{
strcpy(sh,"operation echouee\n");
gtk_label_set_text(GTK_LABEL (output),sh);

}
else {
fprintf(f,"%s %s %s %s %s\n",cn,n,pn,ad,d);
fclose(f);
strcpy(sh,"Succes\n");
gtk_label_set_text(GTK_LABEL (output),sh);
}

}




void
on_kine_Afficher_fiche_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *TREE;
    GtkWidget *treeview1;    
    TREE=create_fiche();
    gtk_widget_show (TREE);
     treeview1=lookup_widget(TREE,"treeview2");
     kine_affichier_fiche(treeview1);

}

