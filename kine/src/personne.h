#include <gtk/gtk.h>
typedef struct 
{ char cin [20];
  char nom [30];
  char prenom [30];
  char date_naissance[30];
  char adresse[30];
}personne;
void ajouter_personne(personne p);
void afficher_personne(GtkWidget *liste);
