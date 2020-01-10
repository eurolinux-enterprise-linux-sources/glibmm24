// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_LOADABLEICON_P_H
#define _GIOMM_LOADABLEICON_P_H


#include <giomm/private/icon_p.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

class LoadableIcon_Class : public Icon_Class
{
public:
  typedef LoadableIcon CppObjectType;
  typedef GLoadableIcon BaseObjectType;
  typedef GLoadableIconIface BaseClassType;
  typedef Icon_Class CppClassParent;

  friend class LoadableIcon;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_LOADABLEICON_P_H */

