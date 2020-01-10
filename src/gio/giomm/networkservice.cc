// Generated by gmmproc 2.54.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/networkservice.h>
#include <giomm/private/networkservice_p.h>


/* Copyright (C) 2007 The giomm Development Team
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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gio/gio.h>
#include <giomm/asyncresult.h>
#include "slot_async.h"

namespace Gio
{
} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::NetworkService> wrap(GNetworkService* object, bool take_copy)
{
  return Glib::RefPtr<Gio::NetworkService>( dynamic_cast<Gio::NetworkService*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& NetworkService_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &NetworkService_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_network_service_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  SocketConnectable::add_interface(get_type());

  }

  return *this;
}


void NetworkService_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* NetworkService_Class::wrap_new(GObject* object)
{
  return new NetworkService((GNetworkService*)object);
}


/* The implementation: */

GNetworkService* NetworkService::gobj_copy()
{
  reference();
  return gobj();
}

NetworkService::NetworkService(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

NetworkService::NetworkService(GNetworkService* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


NetworkService::NetworkService(NetworkService&& src) noexcept
: Glib::Object(std::move(src))
  , SocketConnectable(std::move(src))
{}

NetworkService& NetworkService::operator=(NetworkService&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  SocketConnectable::operator=(std::move(src));
  return *this;
}


NetworkService::~NetworkService() noexcept
{}


NetworkService::CppClassType NetworkService::networkservice_class_; // initialize static member

GType NetworkService::get_type()
{
  return networkservice_class_.init().get_type();
}


GType NetworkService::get_base_type()
{
  return g_network_service_get_type();
}


NetworkService::NetworkService(const Glib::ustring& service, const Glib::ustring& protocol, const Glib::ustring& domain)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(networkservice_class_.init(), "service", service.c_str(), "protocol", protocol.c_str(), "domain", domain.c_str(), nullptr))
{
  

}

Glib::RefPtr<NetworkService> NetworkService::create(const Glib::ustring& service, const Glib::ustring& protocol, const Glib::ustring& domain)
{
  return Glib::RefPtr<NetworkService>( new NetworkService(service, protocol, domain) );
}

Glib::ustring NetworkService::get_service() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_network_service_get_service(const_cast<GNetworkService*>(gobj())));
}

Glib::ustring NetworkService::get_protocol() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_network_service_get_protocol(const_cast<GNetworkService*>(gobj())));
}

Glib::ustring NetworkService::get_domain() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_network_service_get_domain(const_cast<GNetworkService*>(gobj())));
}

Glib::ustring NetworkService::get_scheme() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_network_service_get_scheme(const_cast<GNetworkService*>(gobj())));
}

void NetworkService::set_scheme(const Glib::ustring& scheme)
{
  g_network_service_set_scheme(gobj(), scheme.c_str());
}


Glib::PropertyProxy_ReadOnly< Glib::ustring > NetworkService::property_domain() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "domain");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > NetworkService::property_protocol() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "protocol");
}

Glib::PropertyProxy< Glib::ustring > NetworkService::property_scheme() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "scheme");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > NetworkService::property_scheme() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "scheme");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > NetworkService::property_service() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "service");
}


} // namespace Gio


