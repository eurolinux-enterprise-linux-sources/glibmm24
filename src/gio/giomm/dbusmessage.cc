// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbusmessage.h>
#include <giomm/private/dbusmessage_p.h>


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

#include <gio/gio.h>
#include <glibmm/error.h>

#ifdef G_OS_UNIX
#include <giomm/unixfdlist.h>
#endif // G_OS_UNIX

namespace Gio
{

namespace DBus
{

using ByteOrder = Message::ByteOrder;

void
Message::get_body(Glib::VariantBase& value) const
{
  GVariant* const g_value = g_dbus_message_get_body(const_cast<GDBusMessage*>(gobj()));

  if (!g_value)
    return;

  value.init(g_value, true /* take a reference */);
}

void
Message::get_header(Glib::VariantBase& value, MessageHeaderField header_field) const
{
  GVariant* const g_value = g_dbus_message_get_header(
    const_cast<GDBusMessage*>(gobj()), ((GDBusMessageHeaderField)(header_field)));

  if (!g_value)
    return;

  value.init(g_value, true /* take a reference */);
}

#ifdef G_OS_UNIX
void
Message::unset_unix_fd_list()
{
  g_dbus_message_set_unix_fd_list(gobj(), nullptr);
}
#endif // G_OS_UNIX

} // namespace DBus

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::DBus::Message> wrap(GDBusMessage* object, bool take_copy)
{
  return Glib::RefPtr<Gio::DBus::Message>( dynamic_cast<Gio::DBus::Message*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{

namespace DBus
{


/* The *_Class implementation: */

const Glib::Class& Message_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Message_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_dbus_message_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Message_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Message_Class::wrap_new(GObject* object)
{
  return new Message((GDBusMessage*)object);
}


/* The implementation: */

GDBusMessage* Message::gobj_copy()
{
  reference();
  return gobj();
}

Message::Message(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Message::Message(GDBusMessage* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Message::Message(Message&& src) noexcept
: Glib::Object(std::move(src))
{}

Message& Message::operator=(Message&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


Message::~Message() noexcept
{}


Message::CppClassType Message::message_class_; // initialize static member

GType Message::get_type()
{
  return message_class_.init().get_type();
}


GType Message::get_base_type()
{
  return g_dbus_message_get_type();
}


Message::Message()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(message_class_.init()))
{
  

}

Glib::RefPtr<Message> Message::create()
{
  return Glib::RefPtr<Message>( new Message() );
}

Glib::RefPtr<Message> Message::create_signal(const Glib::ustring& path, const Glib::ustring& iface, const Glib::ustring& signal)
{
  return Glib::wrap(g_dbus_message_new_signal(path.c_str(), iface.c_str(), signal.c_str()));
}

Glib::RefPtr<Message> Message::create_method_call(const Glib::ustring& name, const Glib::ustring& path, const Glib::ustring& iface, const Glib::ustring& method)
{
  return Glib::wrap(g_dbus_message_new_method_call(name.c_str(), path.c_str(), iface.c_str(), method.c_str()));
}

Glib::RefPtr<Message> Message::create_method_reply(const Glib::RefPtr<Message>& method_call_message)
{
  return Glib::wrap(g_dbus_message_new_method_reply(Glib::unwrap(method_call_message)));
}

Glib::RefPtr<Message> Message::create_method_error_literal(const Glib::RefPtr<const Message>& method_call_message, const Glib::ustring& error_name, const Glib::ustring& error_message)
{
  return Glib::wrap(g_dbus_message_new_method_error_literal(const_cast<GDBusMessage*>(Glib::unwrap(method_call_message)), error_name.c_str(), error_message.c_str()));
}

Glib::RefPtr<Message> Message::create_from_blob(const guchar* blob, gsize blob_len, CapabilityFlags capabilities)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Message> retvalue = Glib::wrap(g_dbus_message_new_from_blob(const_cast<guchar*>(blob), blob_len, ((GDBusCapabilityFlags)(capabilities)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::ustring Message::print(guint indent)
{
  return Glib::convert_return_gchar_ptr_to_ustring(g_dbus_message_print(gobj(), indent));
}

bool Message::get_locked() const
{
  return g_dbus_message_get_locked(const_cast<GDBusMessage*>(gobj()));
}

void Message::lock()
{
  g_dbus_message_lock(gobj());
}

Glib::RefPtr<Message> Message::copy() const
{
  GError* gerror = nullptr;
  Glib::RefPtr<Message> retvalue = Glib::wrap(g_dbus_message_copy(const_cast<GDBusMessage*>(gobj()), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

MessageType Message::get_message_type() const
{
  return ((MessageType)(g_dbus_message_get_message_type(const_cast<GDBusMessage*>(gobj()))));
}

void Message::set_message_type(MessageType type)
{
  g_dbus_message_set_message_type(gobj(), ((GDBusMessageType)(type)));
}

ByteOrder Message::get_byte_order() const
{
  return (ByteOrder)(g_dbus_message_get_byte_order(const_cast<GDBusMessage*>(gobj())));
}

void Message::set_byte_order(ByteOrder byte_order)
{
  g_dbus_message_set_byte_order(gobj(), (GDBusMessageByteOrder)(byte_order));
}

guint32 Message::get_serial() const
{
  return g_dbus_message_get_serial(const_cast<GDBusMessage*>(gobj()));
}

void Message::set_serial(guint32 serial)
{
  g_dbus_message_set_serial(gobj(), serial);
}

MessageFlags Message::get_flags() const
{
  return ((MessageFlags)(g_dbus_message_get_flags(const_cast<GDBusMessage*>(gobj()))));
}

void Message::set_flags(MessageFlags flags)
{
  g_dbus_message_set_flags(gobj(), ((GDBusMessageFlags)(flags)));
}

void Message::set_body(const Glib::VariantBase& body)
{
  g_dbus_message_set_body(gobj(), const_cast<GVariant*>((body).gobj()));
}

#ifdef G_OS_UNIX
Glib::RefPtr<UnixFDList> Message::get_unix_fd_list()
{
  return Glib::wrap(g_dbus_message_get_unix_fd_list(gobj()));
}
#endif // G_OS_UNIX

#ifdef G_OS_UNIX
Glib::RefPtr<const UnixFDList> Message::get_unix_fd_list() const
{
  return const_cast<Message*>(this)->get_unix_fd_list();
}
#endif // G_OS_UNIX

#ifdef G_OS_UNIX
void Message::set_unix_fd_list(const Glib::RefPtr<UnixFDList>& fd_list)
{
  g_dbus_message_set_unix_fd_list(gobj(), Glib::unwrap(fd_list));
}
#endif // G_OS_UNIX

guint32 Message::get_num_unix_fds() const
{
  return g_dbus_message_get_num_unix_fds(const_cast<GDBusMessage*>(gobj()));
}

void Message::set_num_unix_fds(guint32 value)
{
  g_dbus_message_set_num_unix_fds(gobj(), value);
}

void Message::set_header(MessageHeaderField header_field, const Glib::VariantBase& value)
{
  g_dbus_message_set_header(gobj(), ((GDBusMessageHeaderField)(header_field)), const_cast<GVariant*>((value).gobj()));
}

Glib::ArrayHandle<guchar> Message::get_header_fields() const
{
  return Glib::ArrayHandle<guchar>(g_dbus_message_get_header_fields(const_cast<GDBusMessage*>(gobj())));
}

Glib::ustring Message::get_destination() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_message_get_destination(const_cast<GDBusMessage*>(gobj())));
}

void Message::set_destination(const Glib::ustring& value)
{
  g_dbus_message_set_destination(gobj(), value.c_str());
}

Glib::ustring Message::get_error_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_message_get_error_name(const_cast<GDBusMessage*>(gobj())));
}

void Message::set_error_name(const Glib::ustring& value)
{
  g_dbus_message_set_error_name(gobj(), value.c_str());
}

Glib::ustring Message::get_interface() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_message_get_interface(const_cast<GDBusMessage*>(gobj())));
}

void Message::set_interface(const Glib::ustring& value)
{
  g_dbus_message_set_interface(gobj(), value.c_str());
}

Glib::ustring Message::get_member() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_message_get_member(const_cast<GDBusMessage*>(gobj())));
}

void Message::set_member(const Glib::ustring& value)
{
  g_dbus_message_set_member(gobj(), value.c_str());
}

Glib::ustring Message::get_path() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_message_get_path(const_cast<GDBusMessage*>(gobj())));
}

void Message::set_path(const Glib::ustring& value)
{
  g_dbus_message_set_path(gobj(), value.c_str());
}

guint32 Message::get_reply_serial() const
{
  return g_dbus_message_get_reply_serial(const_cast<GDBusMessage*>(gobj()));
}

void Message::set_reply_serial(guint32 value)
{
  g_dbus_message_set_reply_serial(gobj(), value);
}

Glib::ustring Message::get_sender() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_message_get_sender(const_cast<GDBusMessage*>(gobj())));
}

void Message::set_sender(const Glib::ustring& value)
{
  g_dbus_message_set_sender(gobj(), value.c_str());
}

Glib::ustring Message::get_signature() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_message_get_signature(const_cast<GDBusMessage*>(gobj())));
}

void Message::set_signature(const Glib::ustring& value)
{
  g_dbus_message_set_signature(gobj(), value.c_str());
}

Glib::ustring Message::get_arg0() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_message_get_arg0(const_cast<GDBusMessage*>(gobj())));
}

gssize Message::bytes_needed(const guchar* blob, gsize blob_len)
{
  GError* gerror = nullptr;
  gssize retvalue = g_dbus_message_bytes_needed(const_cast<guchar*>(blob), blob_len, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

guchar* Message::to_blob(gsize& out_size, CapabilityFlags capabilities)
{
  GError* gerror = nullptr;
  guchar* retvalue = g_dbus_message_to_blob(gobj(), &(out_size), ((GDBusCapabilityFlags)(capabilities)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void Message::to_exception()
{
  GError* gerror = nullptr;
  g_dbus_message_to_gerror(gobj(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}


Glib::PropertyProxy_ReadOnly< bool > Message::property_locked() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "locked");
}


} // namespace DBus

} // namespace Gio


