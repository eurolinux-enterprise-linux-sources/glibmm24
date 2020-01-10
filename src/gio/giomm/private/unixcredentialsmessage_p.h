// -*- c++ -*-
// Generated by gmmproc 2.42.0 -- DO NOT MODIFY!
#ifndef _GIOMM_UNIXCREDENTIALSMESSAGE_P_H
#define _GIOMM_UNIXCREDENTIALSMESSAGE_P_H


#include <giomm/private/socketcontrolmessage_p.h>

#include <glibmm/class.h>

namespace Gio
{

class UnixCredentialsMessage_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef UnixCredentialsMessage CppObjectType;
  typedef GUnixCredentialsMessage BaseObjectType;
  typedef GUnixCredentialsMessageClass BaseClassType;
  typedef Gio::SocketControlMessage_Class CppClassParent;
  typedef GSocketControlMessageClass BaseClassParent;

  friend class UnixCredentialsMessage;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gio


#endif /* _GIOMM_UNIXCREDENTIALSMESSAGE_P_H */

