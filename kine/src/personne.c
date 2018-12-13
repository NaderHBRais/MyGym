#include <stdio.h>
#include <string.h>
#include "personne"
#include <gtk/gtk.h>

enum
{
	CIN;
	NOM;
	PRENOM;
	DATE;
	ADRESSE;
	COLUMNS
};

//Ajouter une personne
void ajouter_personne(personne p)
{
 FILE *;
 f=open("fiche.txt","a+");
 if(f!=NULL)
 {
 fprintf(f,"%s %s %s %s %s \n",p.cin,p,nom,p.personne,p.date_naissance,p.adresse);
 fclose(f);
}
}

//Afficher une personne

void afficher_personne(GtkWidget *liste)
{
 GtkCellRenderer *renderer;  //afficher le texte
 GtkTreeViewColumn *column; //visualisation des colonnes
 GtkTreeIter iter; //l'endroit où nous positionnons dans la liste
 GtkListStore *store; //création du modèle de type liste
  

  char cin [20];
  char nom [30];
  char prenom [30];
  char date_naissance[30];
  char adresse[30];
  store=NULL;

  FILE *f;
 
  store=gtk_tree_view_get_model(liste);
  if (store==NULL)
  {
	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attributes(" cin", renderer, "texte",CIN,NULL); //création d'une colonne avec du texte
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

	
	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attributes(" nom", renderer, "texte",NOM,NULL); //création d'une colonne avec du texte
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attributes(" prenom", renderer, "texte",PRENOM,NULL); //création d'une colonne avec du texte
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attributes(" date_naissance", renderer, "texte",DATE_NAISSANCE,NULL); //création d'une colonne avec du texte
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

	
	renderer =gtk_cell_renderer_text_new ();
	column =gtk_tree_view_column_new_with_attributes(" adresse", renderer, "texte",ADRESSE,NULL); //création d'une colonne avec du texte
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste), column);

//la liste contient 5 colonnes de type chaine de caractères
store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
f =fopen("fiche.txt", "r");

if(f==NULL)
{
	return;
}
else
  {
 f = fopen("fiche.txt", "a+");
		while(fscanf(f,"%s %s %s %s %s \n",cin,nom,prenom,date,adresse)!=EOF)
	{
 gtk_list_store_append (store, &iter); //il est utiliser pour ajouter une ligne enfant à une ligne d'un GtkTreeStore
 gtk_list_set (store, &iter, CIN, cin,NOM, nom,PRENOM, prenom,DATE,date,ADRESSE,adresse, -1);
        }
        fclose(f);
 gtk_tree_view_set_model1 (GTK_TREE_VIEW (liste), GTK_TREE_MODEL (store));
 g_object_unref (store);
  }
}













