// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/unixsocketaddress.h>
#include <giomm/private/unixsocketaddress_p.h>


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

#include <gio/gunixsocketaddress.h>

namespace Gio
{

Glib::RefPtr<UnixSocketAddress>
UnixSocketAddress::create(const std::string& path, UnixSocketAddressType type, int path_len)
{
  return Glib::wrap(reinterpret_cast<GUnixSocketAddress*>(g_unix_socket_address_new_with_type(
    path.c_str(), path_len, static_cast<GUnixSocketAddressType>(type))));
}

} // namespace Gio

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gio::UnixSocketAddressType>::value_type()
{
  return g_unix_socket_address_type_get_type();
}


namespace Glib
{

Glib::RefPtr<Gio::UnixSocketAddress> wrap(GUnixSocketAddress* object, bool take_copy)
{
  return Glib::RefPtr<Gio::UnixSocketAddress>( dynamic_cast<Gio::UnixSocketAddress*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& UnixSocketAddress_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &UnixSocketAddress_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_unix_socket_address_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void UnixSocketAddress_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* UnixSocketAddress_Class::wrap_new(GObject* object)
{
  return new UnixSocketAddress((GUnixSocketAddress*)object);
}


/* The implementation: */

GUnixSocketAddress* UnixSocketAddress::gobj_copy()
{
  reference();
  return gobj();
}

UnixSocketAddress::UnixSocketAddress(const Glib::ConstructParams& construct_params)
:
  SocketAddress(construct_params)
{

}

UnixSocketAddress::UnixSocketAddress(GUnixSocketAddress* castitem)
:
  SocketAddress((GSocketAddress*)(castitem))
{}


UnixSocketAddress::UnixSocketAddress(UnixSocketAddress&& src) noexcept
: SocketAddress(std::move(src))
{}

UnixSocketAddress& UnixSocketAddress::operator=(UnixSocketAddress&& src) noexcept
{
  SocketAddress::operator=(std::move(src));
  return *this;
}


UnixSocketAddress::~UnixSocketAddress() noexcept
{}


UnixSocketAddress::CppClassType UnixSocketAddress::unixsocketaddress_class_; // initialize static member

GType UnixSocketAddress::get_type()
{
  return unixsocketaddress_class_.init().get_type();
}


GType UnixSocketAddress::get_base_type()
{
  return g_unix_socket_address_get_type();
}


UnixSocketAddress::UnixSocketAddress(const std::string& path)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  SocketAddress(Glib::ConstructParams(unixsocketaddress_class_.init(), "path", path.c_str(), nullptr))
{
  

}

Glib::RefPtr<UnixSocketAddress> UnixSocketAddress::create(const std::string& path)
{
  return Glib::RefPtr<UnixSocketAddress>( new UnixSocketAddress(path) );
}

UnixSocketAddressType UnixSocketAddress::get_address_type() const
{
  return ((UnixSocketAddressType)(g_unix_socket_address_get_address_type(const_cast<GUnixSocketAddress*>(gobj()))));
}

std::string UnixSocketAddress::get_path() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_unix_socket_address_get_path(const_cast<GUnixSocketAddress*>(gobj())));
}

bool UnixSocketAddress::abstract_names_supported()
{
  return g_unix_socket_address_abstract_names_supported();
}


#ifndef GIOMM_DISABLE_DEPRECATED

Glib::PropertyProxy_ReadOnly< bool > UnixSocketAddress::property_abstract() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "abstract");
}
#endif // GIOMM_DISABLE_DEPRECATED


Glib::PropertyProxy_ReadOnly< UnixSocketAddressType > UnixSocketAddress::property_address_type() const
{
  return Glib::PropertyProxy_ReadOnly< UnixSocketAddressType >(this, "address-type");
}

Glib::PropertyProxy_ReadOnly< std::string > UnixSocketAddress::property_path() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "path");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ByteArray> > UnixSocketAddress::property_path_as_array() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ByteArray> >(this, "path-as-array");
}


} // namespace Gio


