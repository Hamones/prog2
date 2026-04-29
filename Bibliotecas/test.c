#include <allegro5/allegro.h>
int main() {
al_init();
ALLEGRO_DISPLAY* display =
al_create_display(640, 480);
al_clear_to_color(al_map_rgb(255, 255,
255));
al_flip_display();
al_rest(5.0);
al_destroy_display(display);
return 0;
#include <gtk/gtk.h>
int main(int argc, char *argv[]) {
GtkWidget *window;
GtkWidget *image;
gtk_init(&argc, &argv);
window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
g_signal_connect(window, "destroy",
G_CALLBACK(gtk_main_quit), NULL);
image = gtk_image_new_from_file("image.jpg");
gtk_container_add(GTK_CONTAINER(window), image);
gtk_widget_show_all(window);
gtk_main();
return 0;
}}
