/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_kine_login (void)
{
  GtkWidget *kine_login;
  GtkWidget *fixed1;
  GtkWidget *entry1;
  GtkWidget *entry2;
  GtkWidget *button1;
  GtkWidget *label1;
  GtkWidget *label2;
  GtkWidget *label3;

  kine_login = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (kine_login), _("kine_login"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (kine_login), fixed1);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 240, 72);
  gtk_widget_set_size_request (entry1, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  entry2 = gtk_entry_new ();
  gtk_widget_show (entry2);
  gtk_fixed_put (GTK_FIXED (fixed1), entry2, 240, 144);
  gtk_widget_set_size_request (entry2, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry2), 8226);

  button1 = gtk_button_new_with_mnemonic (_("valider"));
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 216, 232);
  gtk_widget_set_size_request (button1, 112, 48);

  label1 = gtk_label_new (_("<span foreground=\"red\"><i><b>username</b></i></span>"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 56, 72);
  gtk_widget_set_size_request (label1, 128, 40);
  gtk_label_set_use_markup (GTK_LABEL (label1), TRUE);

  label2 = gtk_label_new (_("<span foreground=\"red\"><i><b>password</b></i></span>"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 56, 136);
  gtk_widget_set_size_request (label2, 128, 40);
  gtk_label_set_use_markup (GTK_LABEL (label2), TRUE);

  label3 = gtk_label_new ("");
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 120, 288);
  gtk_widget_set_size_request (label3, 313, 33);

  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (kine_login, kine_login, "kine_login");
  GLADE_HOOKUP_OBJECT (kine_login, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (kine_login, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (kine_login, entry2, "entry2");
  GLADE_HOOKUP_OBJECT (kine_login, button1, "button1");
  GLADE_HOOKUP_OBJECT (kine_login, label1, "label1");
  GLADE_HOOKUP_OBJECT (kine_login, label2, "label2");
  GLADE_HOOKUP_OBJECT (kine_login, label3, "label3");

  return kine_login;
}

GtkWidget*
create_Espace_kine (void)
{
  GtkWidget *Espace_kine;
  GtkWidget *fixed2;
  GtkWidget *fixed3;
  GtkWidget *notebook1;
  GtkWidget *fixed5;
  GtkWidget *label7;
  GtkObject *jour_dispo_kine_adj;
  GtkWidget *jour_dispo_kine;
  GtkObject *mois_dispo_kine_adj;
  GtkWidget *mois_dispo_kine;
  GtkObject *annee_dispo_kine_adj;
  GtkWidget *annee_dispo_kine;
  GtkWidget *label8;
  GtkWidget *label9;
  GtkWidget *label10;
  GtkWidget *label11;
  GtkWidget *id_dispo_kine;
  GtkWidget *label20;
  GtkWidget *modifier_kine_dispo;
  GtkWidget *supprimer_kine_dispo;
  GtkWidget *ajouter_kine_dispo;
  GtkWidget *heure_dispo_kine;
  GtkWidget *label12;
  GtkWidget *label4;
  GtkWidget *fixed6;
  GtkWidget *kine_nom_fiche;
  GtkWidget *kinenomfiche;
  GtkWidget *entry4;
  GtkWidget *entry5;
  GtkWidget *entry6;
  GtkWidget *prenom_fiche_kine;
  GtkWidget *nom_fiche_kine;
  GtkWidget *label30;
  GtkWidget *label28;
  GtkWidget *label29;
  GtkWidget *kine_Afficher_fiche;
  GtkWidget *kine_ajouter_fiche;
  GtkWidget *label32;
  GtkWidget *label5;
  GtkWidget *fixed4;
  GtkObject *spinbutton1_adj;
  GtkWidget *spinbutton1;
  GtkObject *spinbutton2_adj;
  GtkWidget *spinbutton2;
  GtkObject *spinbutton3_adj;
  GtkWidget *spinbutton3;
  GtkWidget *label21;
  GtkWidget *label22;
  GtkWidget *label23;
  GtkWidget *label24;
  GtkWidget *label25;
  GtkWidget *entry3;
  GtkWidget *comboboxentry1;
  GtkWidget *kine_ajouter_rendez_vous;
  GtkWidget *kine_modifier_rendez_vous;
  GtkWidget *kine_supprimer_rendez_vous;
  GtkWidget *label26;
  GtkWidget *kine_afficher_rendez_vous;
  GtkWidget *label6;

  Espace_kine = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Espace_kine), _("Espace_kine"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (Espace_kine), fixed2);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_fixed_put (GTK_FIXED (fixed2), fixed3, 272, 256);
  gtk_widget_set_size_request (fixed3, 50, 50);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_fixed_put (GTK_FIXED (fixed2), notebook1, -8, 0);
  gtk_widget_set_size_request (notebook1, 672, 408);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed5);

  label7 = gtk_label_new (_("disponibilt\303\251"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed5), label7, 200, 24);
  gtk_widget_set_size_request (label7, 201, 56);

  jour_dispo_kine_adj = gtk_adjustment_new (1, 1, 31, 1, 0, 0);
  jour_dispo_kine = gtk_spin_button_new (GTK_ADJUSTMENT (jour_dispo_kine_adj), 1, 0);
  gtk_widget_show (jour_dispo_kine);
  gtk_fixed_put (GTK_FIXED (fixed5), jour_dispo_kine, 128, 96);
  gtk_widget_set_size_request (jour_dispo_kine, 70, 34);

  mois_dispo_kine_adj = gtk_adjustment_new (1, 1, 12, 1, 0, 0);
  mois_dispo_kine = gtk_spin_button_new (GTK_ADJUSTMENT (mois_dispo_kine_adj), 1, 0);
  gtk_widget_show (mois_dispo_kine);
  gtk_fixed_put (GTK_FIXED (fixed5), mois_dispo_kine, 320, 96);
  gtk_widget_set_size_request (mois_dispo_kine, 70, 34);

  annee_dispo_kine_adj = gtk_adjustment_new (2018, 2018, 2999, 1, 0, 0);
  annee_dispo_kine = gtk_spin_button_new (GTK_ADJUSTMENT (annee_dispo_kine_adj), 1, 0);
  gtk_widget_show (annee_dispo_kine);
  gtk_fixed_put (GTK_FIXED (fixed5), annee_dispo_kine, 512, 96);
  gtk_widget_set_size_request (annee_dispo_kine, 70, 34);

  label8 = gtk_label_new (_("Jour"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed5), label8, 24, 96);
  gtk_widget_set_size_request (label8, 73, 40);

  label9 = gtk_label_new (_("mois"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed5), label9, 240, 96);
  gtk_widget_set_size_request (label9, 64, 32);

  label10 = gtk_label_new (_("ann\303\251e"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed5), label10, 440, 104);
  gtk_widget_set_size_request (label10, 49, 17);

  label11 = gtk_label_new (_("heure"));
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed5), label11, 32, 184);
  gtk_widget_set_size_request (label11, 120, 40);

  id_dispo_kine = gtk_entry_new ();
  gtk_widget_show (id_dispo_kine);
  gtk_fixed_put (GTK_FIXED (fixed5), id_dispo_kine, 440, 192);
  gtk_widget_set_size_request (id_dispo_kine, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (id_dispo_kine), 8226);

  label20 = gtk_label_new (_("id"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed5), label20, 368, 200);
  gtk_widget_set_size_request (label20, 49, 17);

  modifier_kine_dispo = gtk_button_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (modifier_kine_dispo);
  gtk_fixed_put (GTK_FIXED (fixed5), modifier_kine_dispo, 256, 248);
  gtk_widget_set_size_request (modifier_kine_dispo, 120, 56);

  supprimer_kine_dispo = gtk_button_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (supprimer_kine_dispo);
  gtk_fixed_put (GTK_FIXED (fixed5), supprimer_kine_dispo, 440, 248);
  gtk_widget_set_size_request (supprimer_kine_dispo, 128, 48);

  ajouter_kine_dispo = gtk_button_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (ajouter_kine_dispo);
  gtk_fixed_put (GTK_FIXED (fixed5), ajouter_kine_dispo, 96, 248);
  gtk_widget_set_size_request (ajouter_kine_dispo, 120, 56);

  heure_dispo_kine = gtk_combo_box_entry_new_text ();
  gtk_widget_show (heure_dispo_kine);
  gtk_fixed_put (GTK_FIXED (fixed5), heure_dispo_kine, 136, 192);
  gtk_widget_set_size_request (heure_dispo_kine, 206, 34);
  gtk_combo_box_append_text (GTK_COMBO_BOX (heure_dispo_kine), _("9h-10h"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (heure_dispo_kine), _("11h-12h"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (heure_dispo_kine), _("14h-15h"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (heure_dispo_kine), _("18h-19h"));

  label12 = gtk_label_new ("");
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed5), label12, 168, 320);
  gtk_widget_set_size_request (label12, 289, 33);

  label4 = gtk_label_new (_("Pr\303\251ciser la disponibilit\303\251"));
  gtk_widget_show (label4);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label4);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed6);

  kine_nom_fiche = gtk_entry_new ();
  gtk_widget_show (kine_nom_fiche);
  gtk_fixed_put (GTK_FIXED (fixed6), kine_nom_fiche, 120, 48);
  gtk_widget_set_size_request (kine_nom_fiche, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (kine_nom_fiche), 8226);

  kinenomfiche = gtk_entry_new ();
  gtk_widget_show (kinenomfiche);
  gtk_fixed_put (GTK_FIXED (fixed6), kinenomfiche, 120, 104);
  gtk_widget_set_size_request (kinenomfiche, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (kinenomfiche), 8226);

  entry4 = gtk_entry_new ();
  gtk_widget_show (entry4);
  gtk_fixed_put (GTK_FIXED (fixed6), entry4, 456, 128);
  gtk_widget_set_size_request (entry4, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry4), 8226);

  entry5 = gtk_entry_new ();
  gtk_widget_show (entry5);
  gtk_fixed_put (GTK_FIXED (fixed6), entry5, 440, 64);
  gtk_widget_set_size_request (entry5, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5), 8226);

  entry6 = gtk_entry_new ();
  gtk_widget_show (entry6);
  gtk_fixed_put (GTK_FIXED (fixed6), entry6, 120, 160);
  gtk_widget_set_size_request (entry6, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry6), 8226);

  prenom_fiche_kine = gtk_label_new (_("Pr\303\251nom"));
  gtk_widget_show (prenom_fiche_kine);
  gtk_fixed_put (GTK_FIXED (fixed6), prenom_fiche_kine, 8, 160);
  gtk_widget_set_size_request (prenom_fiche_kine, 104, 32);

  nom_fiche_kine = gtk_label_new (_("Nom"));
  gtk_widget_show (nom_fiche_kine);
  gtk_fixed_put (GTK_FIXED (fixed6), nom_fiche_kine, 8, 104);
  gtk_widget_set_size_request (nom_fiche_kine, 96, 32);

  label30 = gtk_label_new (_("CIN"));
  gtk_widget_show (label30);
  gtk_fixed_put (GTK_FIXED (fixed6), label30, 8, 48);
  gtk_widget_set_size_request (label30, 96, 32);

  label28 = gtk_label_new (_("Adresse"));
  gtk_widget_show (label28);
  gtk_fixed_put (GTK_FIXED (fixed6), label28, 296, 128);
  gtk_widget_set_size_request (label28, 96, 32);

  label29 = gtk_label_new (_("Date de naissance"));
  gtk_widget_show (label29);
  gtk_fixed_put (GTK_FIXED (fixed6), label29, 296, 72);
  gtk_widget_set_size_request (label29, 136, 32);

  kine_Afficher_fiche = gtk_button_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (kine_Afficher_fiche);
  gtk_fixed_put (GTK_FIXED (fixed6), kine_Afficher_fiche, 368, 288);
  gtk_widget_set_size_request (kine_Afficher_fiche, 144, 48);

  kine_ajouter_fiche = gtk_button_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (kine_ajouter_fiche);
  gtk_fixed_put (GTK_FIXED (fixed6), kine_ajouter_fiche, 192, 288);
  gtk_widget_set_size_request (kine_ajouter_fiche, 136, 49);

  label32 = gtk_label_new ("");
  gtk_widget_show (label32);
  gtk_fixed_put (GTK_FIXED (fixed6), label32, 248, 224);
  gtk_widget_set_size_request (label32, 192, 40);

  label5 = gtk_label_new (_("Consulter la fiche m\303\251dicale"));
  gtk_widget_show (label5);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), label5);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed4);

  spinbutton1_adj = gtk_adjustment_new (1, 1, 31, 1, 0, 0);
  spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton1_adj), 1, 0);
  gtk_widget_show (spinbutton1);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbutton1, 128, 24);
  gtk_widget_set_size_request (spinbutton1, 70, 34);

  spinbutton2_adj = gtk_adjustment_new (1, 1, 12, 1, 0, 0);
  spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton2_adj), 1, 0);
  gtk_widget_show (spinbutton2);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbutton2, 336, 24);
  gtk_widget_set_size_request (spinbutton2, 70, 34);

  spinbutton3_adj = gtk_adjustment_new (2018, 2018, 2999, 1, 0, 0);
  spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton3_adj), 1, 0);
  gtk_widget_show (spinbutton3);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbutton3, 560, 24);
  gtk_widget_set_size_request (spinbutton3, 70, 34);

  label21 = gtk_label_new (_("ann\303\251e"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed4), label21, 464, 24);
  gtk_widget_set_size_request (label21, 80, 32);

  label22 = gtk_label_new (_("mois"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed4), label22, 248, 24);
  gtk_widget_set_size_request (label22, 72, 32);

  label23 = gtk_label_new (_("jour"));
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed4), label23, 24, 24);
  gtk_widget_set_size_request (label23, 96, 40);

  label24 = gtk_label_new (_("heure"));
  gtk_widget_show (label24);
  gtk_fixed_put (GTK_FIXED (fixed4), label24, 32, 104);
  gtk_widget_set_size_request (label24, 96, 32);

  label25 = gtk_label_new (_("id"));
  gtk_widget_show (label25);
  gtk_fixed_put (GTK_FIXED (fixed4), label25, 368, 112);
  gtk_widget_set_size_request (label25, 49, 17);

  entry3 = gtk_entry_new ();
  gtk_widget_show (entry3);
  gtk_fixed_put (GTK_FIXED (fixed4), entry3, 448, 104);
  gtk_widget_set_size_request (entry3, 172, 34);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3), 8226);

  comboboxentry1 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentry1);
  gtk_fixed_put (GTK_FIXED (fixed4), comboboxentry1, 128, 104);
  gtk_widget_set_size_request (comboboxentry1, 206, 34);
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("9h-10h"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("11h-12h"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("14h-15h"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry1), _("18h-19h"));

  kine_ajouter_rendez_vous = gtk_button_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (kine_ajouter_rendez_vous);
  gtk_fixed_put (GTK_FIXED (fixed4), kine_ajouter_rendez_vous, 208, 248);
  gtk_widget_set_size_request (kine_ajouter_rendez_vous, 136, 32);

  kine_modifier_rendez_vous = gtk_button_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (kine_modifier_rendez_vous);
  gtk_fixed_put (GTK_FIXED (fixed4), kine_modifier_rendez_vous, 352, 248);
  gtk_widget_set_size_request (kine_modifier_rendez_vous, 150, 32);

  kine_supprimer_rendez_vous = gtk_button_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (kine_supprimer_rendez_vous);
  gtk_fixed_put (GTK_FIXED (fixed4), kine_supprimer_rendez_vous, 504, 248);
  gtk_widget_set_size_request (kine_supprimer_rendez_vous, 134, 32);

  label26 = gtk_label_new ("");
  gtk_widget_show (label26);
  gtk_fixed_put (GTK_FIXED (fixed4), label26, 224, 304);
  gtk_widget_set_size_request (label26, 248, 40);

  kine_afficher_rendez_vous = gtk_button_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (kine_afficher_rendez_vous);
  gtk_fixed_put (GTK_FIXED (fixed4), kine_afficher_rendez_vous, 56, 248);
  gtk_widget_set_size_request (kine_afficher_rendez_vous, 142, 32);

  label6 = gtk_label_new (_("Rendez_vous"));
  gtk_widget_show (label6);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), label6);

  g_signal_connect ((gpointer) modifier_kine_dispo, "clicked",
                    G_CALLBACK (on_modifier_kine_dispo_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimer_kine_dispo, "clicked",
                    G_CALLBACK (on_supprimer_kine_dispo_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouter_kine_dispo, "clicked",
                    G_CALLBACK (on_ajouter_kine_dispo_clicked),
                    NULL);
  g_signal_connect ((gpointer) kine_Afficher_fiche, "clicked",
                    G_CALLBACK (on_kine_Afficher_fiche_clicked),
                    NULL);
  g_signal_connect ((gpointer) kine_ajouter_fiche, "clicked",
                    G_CALLBACK (on_kine_ajouter_fiche_clicked),
                    NULL);
  g_signal_connect ((gpointer) kine_ajouter_rendez_vous, "clicked",
                    G_CALLBACK (on_kine_ajouter_rendez_vous_clicked),
                    NULL);
  g_signal_connect ((gpointer) kine_modifier_rendez_vous, "clicked",
                    G_CALLBACK (on_kine_modifier_rendez_vous_clicked),
                    NULL);
  g_signal_connect ((gpointer) kine_supprimer_rendez_vous, "clicked",
                    G_CALLBACK (on_kine_supprimer_rendez_vous_clicked),
                    NULL);
  g_signal_connect ((gpointer) kine_afficher_rendez_vous, "clicked",
                    G_CALLBACK (on_kine_afficher_rendez_vous_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Espace_kine, Espace_kine, "Espace_kine");
  GLADE_HOOKUP_OBJECT (Espace_kine, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (Espace_kine, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (Espace_kine, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (Espace_kine, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (Espace_kine, label7, "label7");
  GLADE_HOOKUP_OBJECT (Espace_kine, jour_dispo_kine, "jour_dispo_kine");
  GLADE_HOOKUP_OBJECT (Espace_kine, mois_dispo_kine, "mois_dispo_kine");
  GLADE_HOOKUP_OBJECT (Espace_kine, annee_dispo_kine, "annee_dispo_kine");
  GLADE_HOOKUP_OBJECT (Espace_kine, label8, "label8");
  GLADE_HOOKUP_OBJECT (Espace_kine, label9, "label9");
  GLADE_HOOKUP_OBJECT (Espace_kine, label10, "label10");
  GLADE_HOOKUP_OBJECT (Espace_kine, label11, "label11");
  GLADE_HOOKUP_OBJECT (Espace_kine, id_dispo_kine, "id_dispo_kine");
  GLADE_HOOKUP_OBJECT (Espace_kine, label20, "label20");
  GLADE_HOOKUP_OBJECT (Espace_kine, modifier_kine_dispo, "modifier_kine_dispo");
  GLADE_HOOKUP_OBJECT (Espace_kine, supprimer_kine_dispo, "supprimer_kine_dispo");
  GLADE_HOOKUP_OBJECT (Espace_kine, ajouter_kine_dispo, "ajouter_kine_dispo");
  GLADE_HOOKUP_OBJECT (Espace_kine, heure_dispo_kine, "heure_dispo_kine");
  GLADE_HOOKUP_OBJECT (Espace_kine, label12, "label12");
  GLADE_HOOKUP_OBJECT (Espace_kine, label4, "label4");
  GLADE_HOOKUP_OBJECT (Espace_kine, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (Espace_kine, kine_nom_fiche, "kine_nom_fiche");
  GLADE_HOOKUP_OBJECT (Espace_kine, kinenomfiche, "kinenomfiche");
  GLADE_HOOKUP_OBJECT (Espace_kine, entry4, "entry4");
  GLADE_HOOKUP_OBJECT (Espace_kine, entry5, "entry5");
  GLADE_HOOKUP_OBJECT (Espace_kine, entry6, "entry6");
  GLADE_HOOKUP_OBJECT (Espace_kine, prenom_fiche_kine, "prenom_fiche_kine");
  GLADE_HOOKUP_OBJECT (Espace_kine, nom_fiche_kine, "nom_fiche_kine");
  GLADE_HOOKUP_OBJECT (Espace_kine, label30, "label30");
  GLADE_HOOKUP_OBJECT (Espace_kine, label28, "label28");
  GLADE_HOOKUP_OBJECT (Espace_kine, label29, "label29");
  GLADE_HOOKUP_OBJECT (Espace_kine, kine_Afficher_fiche, "kine_Afficher_fiche");
  GLADE_HOOKUP_OBJECT (Espace_kine, kine_ajouter_fiche, "kine_ajouter_fiche");
  GLADE_HOOKUP_OBJECT (Espace_kine, label32, "label32");
  GLADE_HOOKUP_OBJECT (Espace_kine, label5, "label5");
  GLADE_HOOKUP_OBJECT (Espace_kine, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (Espace_kine, spinbutton1, "spinbutton1");
  GLADE_HOOKUP_OBJECT (Espace_kine, spinbutton2, "spinbutton2");
  GLADE_HOOKUP_OBJECT (Espace_kine, spinbutton3, "spinbutton3");
  GLADE_HOOKUP_OBJECT (Espace_kine, label21, "label21");
  GLADE_HOOKUP_OBJECT (Espace_kine, label22, "label22");
  GLADE_HOOKUP_OBJECT (Espace_kine, label23, "label23");
  GLADE_HOOKUP_OBJECT (Espace_kine, label24, "label24");
  GLADE_HOOKUP_OBJECT (Espace_kine, label25, "label25");
  GLADE_HOOKUP_OBJECT (Espace_kine, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (Espace_kine, comboboxentry1, "comboboxentry1");
  GLADE_HOOKUP_OBJECT (Espace_kine, kine_ajouter_rendez_vous, "kine_ajouter_rendez_vous");
  GLADE_HOOKUP_OBJECT (Espace_kine, kine_modifier_rendez_vous, "kine_modifier_rendez_vous");
  GLADE_HOOKUP_OBJECT (Espace_kine, kine_supprimer_rendez_vous, "kine_supprimer_rendez_vous");
  GLADE_HOOKUP_OBJECT (Espace_kine, label26, "label26");
  GLADE_HOOKUP_OBJECT (Espace_kine, kine_afficher_rendez_vous, "kine_afficher_rendez_vous");
  GLADE_HOOKUP_OBJECT (Espace_kine, label6, "label6");

  return Espace_kine;
}

GtkWidget*
create_Rendez_vous (void)
{
  GtkWidget *Rendez_vous;
  GtkWidget *fixed8;
  GtkWidget *label19;
  GtkWidget *treeview1;

  Rendez_vous = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Rendez_vous), _("modifier rendez_vous"));

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_container_add (GTK_CONTAINER (Rendez_vous), fixed8);

  label19 = gtk_label_new ("");
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed8), label19, 128, 288);
  gtk_widget_set_size_request (label19, 313, 32);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed8), treeview1, 80, 56);
  gtk_widget_set_size_request (treeview1, 300, 200);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Rendez_vous, Rendez_vous, "Rendez_vous");
  GLADE_HOOKUP_OBJECT (Rendez_vous, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (Rendez_vous, label19, "label19");
  GLADE_HOOKUP_OBJECT (Rendez_vous, treeview1, "treeview1");

  return Rendez_vous;
}

GtkWidget*
create_fiche (void)
{
  GtkWidget *fiche;
  GtkWidget *scrolledwindow1;
  GtkWidget *treeview2;

  fiche = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (fiche), _("fiche m\303\251dicale"));

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_container_add (GTK_CONTAINER (fiche), scrolledwindow1);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow1), GTK_SHADOW_IN);

  treeview2 = gtk_tree_view_new ();
  gtk_widget_show (treeview2);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), treeview2);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (fiche, fiche, "fiche");
  GLADE_HOOKUP_OBJECT (fiche, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (fiche, treeview2, "treeview2");

  return fiche;
}
