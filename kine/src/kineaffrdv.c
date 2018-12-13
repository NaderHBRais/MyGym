#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif




#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include "callbacks.h"
#include "kineaffrdv .h"
enum   
{       
 Heure,
 Jour,
 Mois,
 Annee,
 ID,
 COLUMNS
};


void kine_affichier_rdv(GtkWidget *liste)
{
GtkCellRenderer *renderer;

GtkTreeViewColumn *column;

GtkTreeIter iter;

GtkListStore *store;

char IDF[20],hr[20],j[20],m[20],a[20];
int jf,mf,af,hf;
store=NULL;

FILE *f;

store=gtk_tree_view_get_model(liste);

if (store==NULL)
{

  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("Heure",renderer,"text",Heure,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("Jour",renderer,"text",Jour,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("Mois",renderer,"text",Mois,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("Annee",renderer,"text",Annee,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
      
  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("ID",renderer,"text",ID,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
  

  store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

  f=fopen("/home/wejden/Desktop/kine/src/rdv.txt","r");

  if(f==NULL)
  {
       return;
  }
  else 
  
   { f=fopen("/home/wejden/Desktop/kine/src/rdv.txt","a+");
    while(fscanf(f,"%s %d %d %d %d\n",IDF,&jf,&mf,&af,&hf)!=EOF)
    {
     gtk_list_store_append(store,&iter);
if(hf==1)
strcpy(hr,"9h-10h");
else if(hf==2)
strcpy(hr,"11h-12h");
else if(hf==3)
strcpy(hr,"14h-15h");
else if(hf==3)
strcpy(hr,"18h-19h");
sprintf(j,"%d",jf);
sprintf(m,"%d",mf);
sprintf(a,"%d",af);
     gtk_list_store_set(store,&iter,ID,IDF,Heure,hr,Jour,j,Mois,m,Annee,a,-1);
    }
    fclose(f);
    gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
    g_object_unref(store);
   }
}
}
