// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/tcpwrapperconnection.h>
#include <giomm/private/tcpwrapperconnection_p.h>


/* Copyright (C) 2015 The giomm Development Team
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

namespace Gio
{
} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::TcpWrapperConnection> wrap(GTcpWrapperConnection* object, bool take_copy)
{
  return Glib::RefPtr<Gio::TcpWrapperConnection>( dynamic_cast<Gio::TcpWrapperConnection*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& TcpWrapperConnection_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TcpWrapperConnection_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_tcp_wrapper_connection_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void TcpWrapperConnection_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* TcpWrapperConnection_Class::wrap_new(GObject* object)
{
  return new TcpWrapperConnection((GTcpWrapperConnection*)object);
}


/* The implementation: */

GTcpWrapperConnection* TcpWrapperConnection::gobj_copy()
{
  reference();
  return gobj();
}

TcpWrapperConnection::TcpWrapperConnection(const Glib::ConstructParams& construct_params)
:
  Gio::TcpConnection(construct_params)
{

}

TcpWrapperConnection::TcpWrapperConnection(GTcpWrapperConnection* castitem)
:
  Gio::TcpConnection((GTcpConnection*)(castitem))
{}


TcpWrapperConnection::TcpWrapperConnection(TcpWrapperConnection&& src) noexcept
: Gio::TcpConnection(std::move(src))
{}

TcpWrapperConnection& TcpWrapperConnection::operator=(TcpWrapperConnection&& src) noexcept
{
  Gio::TcpConnection::operator=(std::move(src));
  return *this;
}


TcpWrapperConnection::~TcpWrapperConnection() noexcept
{}


TcpWrapperConnection::CppClassType TcpWrapperConnection::tcpwrapperconnection_class_; // initialize static member

GType TcpWrapperConnection::get_type()
{
  return tcpwrapperconnection_class_.init().get_type();
}


GType TcpWrapperConnection::get_base_type()
{
  return g_tcp_wrapper_connection_get_type();
}


TcpWrapperConnection::TcpWrapperConnection(const Glib::RefPtr<IOStream>& base_io_stream, const Glib::RefPtr<Socket>& socket)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gio::TcpConnection(Glib::ConstructParams(tcpwrapperconnection_class_.init(), "base_io_stream", Glib::unwrap(base_io_stream), "socket", const_cast<GSocket*>(Glib::unwrap(socket)), nullptr))
{
  

}

Glib::RefPtr<IOStream> TcpWrapperConnection::get_base_io_stream()
{
  Glib::RefPtr<IOStream> retvalue = Glib::wrap(g_tcp_wrapper_connection_get_base_io_stream(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const IOStream> TcpWrapperConnection::get_base_io_stream() const
{
  return const_cast<TcpWrapperConnection*>(this)->get_base_io_stream();
}


Glib::PropertyProxy_ReadOnly< Glib::RefPtr<IOStream> > TcpWrapperConnection::property_base_io_stream() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<IOStream> >(this, "base-io-stream");
}


} // namespace Gio


