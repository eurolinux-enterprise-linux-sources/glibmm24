// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_APPLICATION_P_H
#define _GIOMM_APPLICATION_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gio
{

class Application_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Application CppObjectType;
  typedef GApplication BaseObjectType;
  typedef GApplicationClass BaseClassType;
  typedef Glib::Object_Class CppClassParent;
  typedef GObjectClass BaseClassParent;

  friend class Application;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void startup_callback(GApplication* self);
  static void activate_callback(GApplication* self);
  static gint command_line_callback(GApplication* self, GApplicationCommandLine* p0);
  static void open_callback(GApplication* self, GFile** files, gint n_files, const gchar* hint);
  
  //Callbacks (virtual functions):
  static gboolean local_command_line_vfunc_callback(GApplication* self, gchar*** arguments, int* exit_status);
  static void before_emit_vfunc_callback(GApplication* self, GVariant* platform_data);
  static void after_emit_vfunc_callback(GApplication* self, GVariant* platform_data);
  static void quit_mainloop_vfunc_callback(GApplication* self);
  static void run_mainloop_vfunc_callback(GApplication* self);
};


} // namespace Gio


#endif /* _GIOMM_APPLICATION_P_H */

