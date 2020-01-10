// Generated by gmmproc 2.54.1 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSINTERFACE_P_H
#define _GIOMM_DBUSINTERFACE_P_H


#include <glibmm/private/interface_p.h>
#include <gio/gio.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

namespace DBus
{

class Interface_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = Interface;
  using BaseObjectType = GDBusInterface;
  using BaseClassType = GDBusInterfaceIface;
  using CppClassParent = Glib::Interface_Class;

  friend class Interface;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static GDBusInterfaceInfo* get_info_vfunc_callback(GDBusInterface* self);
  static GDBusObject* get_object_vfunc_callback(GDBusInterface* self);
  static void set_object_vfunc_callback(GDBusInterface* self, GDBusObject* object);
  static GDBusObject* dup_object_vfunc_callback(GDBusInterface* self);
};


} // namespace DBus

} // namespace Gio


#endif /* _GIOMM_DBUSINTERFACE_P_H */

