// -*- c++ -*-
// Generated by gmmproc 2.42.0 -- DO NOT MODIFY!
#ifndef _GIOMM_REMOTEACTIONGROUP_H
#define _GIOMM_REMOTEACTIONGROUP_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2012 The giomm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GRemoteActionGroupInterface GRemoteActionGroupInterface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GRemoteActionGroup GRemoteActionGroup;
typedef struct _GRemoteActionGroupClass GRemoteActionGroupClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class RemoteActionGroup_Class; } // namespace Gio
namespace Gio
{


//TODO: Instead derive from ActionGroup, when we can break ABI,
//because the GRemoteActionGroup interface requires the GActionGroup interface.
//LoadableIcon does a similar thing correctly, for instance.


/** RemoteActionGroup - a ActionGroup that interacts with other processes.
 * The RemoteActionGroup interface is implemented by ActionGroup instances that
 * either transmit action invocations to other processes or receive action
 * invocations in the local process from other processes.
 *
 * The interface has variants of the two methods on ActionGroup used to
 * activate actions: Gio::ActionGroup::activate_action() and
 * Gio::ActionGroup::change_action_state(). These variants allow a "platform
 * data" Glib::VariantBase to be specified: a dictionary providing context for
 * the action invocation (for example: timestamps, startup notification IDs,
 * etc).
 *
 * Gio::DBus::ActionGroup implements RemoteActionGroup. This provides a
 * mechanism to send platform data for action invocations over D-Bus.
 *
 * Additionally, Gio::DBus::Connection::export_action_group() will check if the
 * exported ActionGroup implements RemoteActionGroup and use the variants of
 * the calls if available. This provides a mechanism by which to receive
 * platform data for action invocations that arrive by way of D-Bus.
 * @newin{2,32}
 */

class RemoteActionGroup : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef RemoteActionGroup CppObjectType;
  typedef RemoteActionGroup_Class CppClassType;
  typedef GRemoteActionGroup BaseObjectType;
  typedef GRemoteActionGroupInterface BaseClassType;

private:
  friend class RemoteActionGroup_Class;
  static CppClassType remoteactiongroup_class_;

  // noncopyable
  RemoteActionGroup(const RemoteActionGroup&);
  RemoteActionGroup& operator=(const RemoteActionGroup&);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  RemoteActionGroup();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit RemoteActionGroup(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit RemoteActionGroup(GRemoteActionGroup* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~RemoteActionGroup();

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GRemoteActionGroup*       gobj()       { return reinterpret_cast<GRemoteActionGroup*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GRemoteActionGroup* gobj() const { return reinterpret_cast<GRemoteActionGroup*>(gobject_); }

private:


public:
  
  /** Activates the remote action.
   * 
   * This is the same as g_action_group_activate_action() except that it
   * allows for provision of "platform data" to be sent along with the
   * activation request.  This typically contains details such as the user
   * interaction timestamp or startup notification information.
   * 
   *  @a platform_data must be non-<tt>0</tt> and must have the type
   * VARIANT_TYPE_VARDICT.  If it is floating, it will be consumed.
   * 
   * @newin{2,32}
   * 
   * @param action_name The name of the action to activate.
   * @param parameter The optional parameter to the activation.
   * @param platform_data The platform data to send.
   */
  void activate_action(const Glib::ustring& action_name, const Glib::VariantBase& parameter, const Glib::VariantBase& platform_data);
  
  /** Changes the state of a remote action.
   * 
   * This is the same as g_action_group_change_action_state() except that
   * it allows for provision of "platform data" to be sent along with the
   * state change request.  This typically contains details such as the
   * user interaction timestamp or startup notification information.
   * 
   *  @a platform_data must be non-<tt>0</tt> and must have the type
   * VARIANT_TYPE_VARDICT.  If it is floating, it will be consumed.
   * 
   * @newin{2,32}
   * 
   * @param action_name The name of the action to change the state of.
   * @param value The new requested value for the state.
   * @param platform_data The platform data to send.
   */
  void change_action_state(const Glib::ustring& action_name, const Glib::VariantBase& value, const Glib::VariantBase& platform_data);

 
    virtual void activate_action_vfunc(const Glib::ustring& action_name, const Glib::VariantBase& parameter, const Glib::VariantBase& platform_data);

    virtual void change_action_state_vfunc(const Glib::ustring& action_name, const Glib::VariantBase& value, const Glib::VariantBase& platform_data);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::RemoteActionGroup
   */
  Glib::RefPtr<Gio::RemoteActionGroup> wrap(GRemoteActionGroup* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_REMOTEACTIONGROUP_H */

