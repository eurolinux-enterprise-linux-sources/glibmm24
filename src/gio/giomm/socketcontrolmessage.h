// -*- c++ -*-
// Generated by gmmproc 2.42.0 -- DO NOT MODIFY!
#ifndef _GIOMM_SOCKETCONTROLMESSAGE_H
#define _GIOMM_SOCKETCONTROLMESSAGE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The giomm Development Team
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

#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GSocketControlMessage GSocketControlMessage;
typedef struct _GSocketControlMessageClass GSocketControlMessageClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class SocketControlMessage_Class; } // namespace Gio
namespace Gio
{

/** SocketControlMessage - A Socket control message.
 * A SocketControlMessage is a special-purpose utility message that can be
 * sent to or received from a Socket. These types of messages are often
 * called "ancillary data".
 *
 * The message can represent some sort of special instruction to or
 * information from the socket or can represent a special kind of transfer to
 * the peer (for example, sending a file description over a UNIX socket).
 *
 * These messages are sent with Gio::Socket::send() and received with
 * Gio::Socket::receive().
 *
 * To extend the set of control message that can be sent, subclass this class
 * and override the get_size, get_level, get_type and serialize methods.
 *
 * To extend the set of control messages that can be received, subclass this
 * class and implement the deserialize method. Also, make sure your class is
 * registered with the GType typesystem before calling
 * Gio::Socket::receive() to read such a message.
 *
 * @ingroup NetworkIO
 * @newin{2,28}
 */

class SocketControlMessage : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef SocketControlMessage CppObjectType;
  typedef SocketControlMessage_Class CppClassType;
  typedef GSocketControlMessage BaseObjectType;
  typedef GSocketControlMessageClass BaseClassType;

private:  friend class SocketControlMessage_Class;
  static CppClassType socketcontrolmessage_class_;

private:
  // noncopyable
  SocketControlMessage(const SocketControlMessage&);
  SocketControlMessage& operator=(const SocketControlMessage&);

protected:
  explicit SocketControlMessage(const Glib::ConstructParams& construct_params);
  explicit SocketControlMessage(GSocketControlMessage* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~SocketControlMessage();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GSocketControlMessage*       gobj()       { return reinterpret_cast<GSocketControlMessage*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GSocketControlMessage* gobj() const { return reinterpret_cast<GSocketControlMessage*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GSocketControlMessage* gobj_copy();

private:


protected:
  SocketControlMessage();

public:
  
  /** Tries to deserialize a socket control message of a given
   *  @a level and @a type. This will ask all known (to GType) subclasses
   * of SocketControlMessage if they can understand this kind
   * of message and if so deserialize it into a SocketControlMessage.
   * 
   * If there is no implementation for this kind of control message, <tt>0</tt>
   * will be returned.
   * 
   * @newin{2,22}
   * 
   * @param level A socket level.
   * @param type A socket control message type for the given @a level.
   * @param size The size of the data in bytes.
   * @param data Pointer to the message data.
   * @return The deserialized message or <tt>0</tt>.
   */
  static Glib::RefPtr<SocketControlMessage> deserialize(int level, int type, gsize size, gpointer data);
  
  /** Returns the "level" (i.e.\ the originating protocol) of the control message.
   * This is often SOL_SOCKET.
   * 
   * @newin{2,22}
   * 
   * @return An integer describing the level.
   */
  int get_level() const;
  
  /** Returns the protocol specific type of the control message.
   * For instance, for UNIX fd passing this would be SCM_RIGHTS.
   * 
   * @newin{2,22}
   * 
   * @return An integer describing the type of control message.
   */
  int get_msg_type() const;
  
  /** Returns the space required for the control message, not including
   * headers or alignment.
   * 
   * @newin{2,22}
   * 
   * @return The number of bytes required.
   */
  gsize get_size() const;
  
  /** Converts the data in the message to bytes placed in the
   * message.
   * 
   *  @a data is guaranteed to have enough space to fit the size
   * returned by g_socket_control_message_get_size() on this
   * object.
   * 
   * @newin{2,22}
   * 
   * @param data A buffer to write data to.
   */
  void serialize(gpointer data);

  //TODO: The deserialize vfunc does not have a GSocketControlMessage for its
  //first parameter so it is difficult to wrap.
  //_WRAP_VFUNC(Glib::RefPtr<SocketControlMessage> deserialize(int level, int type, gsize size, gpointer data), "deserialize")

    virtual gsize get_size_vfunc() const;

    virtual int get_level_vfunc() const;

    virtual int get_type_vfunc() const;

    virtual void serialize_vfunc(gpointer data);


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
   * @relates Gio::SocketControlMessage
   */
  Glib::RefPtr<Gio::SocketControlMessage> wrap(GSocketControlMessage* object, bool take_copy = false);
}


#endif /* _GIOMM_SOCKETCONTROLMESSAGE_H */

