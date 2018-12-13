#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif




#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>
#include "callbacks.h"
#include "fichekine.h"
enum   
{       
 CIN,
 N,
 PN,
 DT,
 AD,
 COLUMNS
};


void kine_affichier_fiche(GtkWidget *liste)
{
GtkCellRenderer *renderer;

GtkTreeViewColumn *column;

GtkTreeIter iter;

GtkListStore *store;

char rcn[20],rn[20],rpn[20],rad[20],rd[20];
store=NULL;

FILE *f;

store=gtk_tree_view_get_model(liste);

if (store==NULL)
{

  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("CIN",renderer,"text",CIN,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("NOM",renderer,"text",N,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("Prenom",renderer,"text",PN,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("Date",renderer,"text",DT,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
      
  renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("Adresse",renderer,"text",AD,NULL);
  gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
  

  store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

  f=fopen("/home/wejden/Desktop/kine/src/FM.txt","r+");

  if(f==NULL)
  {
       return;
  }
  else 
  
   { f=fopen("/home/wejden/Desktop/kine/src/FM.txt","a+");
    while(fscanf(f,"%s %s %s %s %s\n",rcn,rn,rpn,rad,rd)!=EOF)
    {
     gtk_list_store_append(store,&iter);
     gtk_list_store_set(store,&iter,CIN,rcn,N,rn,PN,rpn,DT,rd,AD,rad,-1);
    }
    fclose(f);
    gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
    g_object_unref(store);
   }
}
}
