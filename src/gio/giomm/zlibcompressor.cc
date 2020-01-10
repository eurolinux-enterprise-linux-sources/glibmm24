// Generated by gmmproc 2.54.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/zlibcompressor.h>
#include <giomm/private/zlibcompressor_p.h>


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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gio/gio.h>
#include <giomm/fileinfo.h>

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gio::ZlibCompressorFormat>::value_type()
{
  return g_zlib_compressor_format_get_type();
}


namespace Glib
{

Glib::RefPtr<Gio::ZlibCompressor> wrap(GZlibCompressor* object, bool take_copy)
{
  return Glib::RefPtr<Gio::ZlibCompressor>( dynamic_cast<Gio::ZlibCompressor*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& ZlibCompressor_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ZlibCompressor_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_zlib_compressor_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Converter::add_interface(get_type());

  }

  return *this;
}


void ZlibCompressor_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ZlibCompressor_Class::wrap_new(GObject* object)
{
  return new ZlibCompressor((GZlibCompressor*)object);
}


/* The implementation: */

GZlibCompressor* ZlibCompressor::gobj_copy()
{
  reference();
  return gobj();
}

ZlibCompressor::ZlibCompressor(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

ZlibCompressor::ZlibCompressor(GZlibCompressor* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


ZlibCompressor::ZlibCompressor(ZlibCompressor&& src) noexcept
: Glib::Object(std::move(src))
  , Converter(std::move(src))
{}

ZlibCompressor& ZlibCompressor::operator=(ZlibCompressor&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  Converter::operator=(std::move(src));
  return *this;
}


ZlibCompressor::~ZlibCompressor() noexcept
{}


ZlibCompressor::CppClassType ZlibCompressor::zlibcompressor_class_; // initialize static member

GType ZlibCompressor::get_type()
{
  return zlibcompressor_class_.init().get_type();
}


GType ZlibCompressor::get_base_type()
{
  return g_zlib_compressor_get_type();
}


ZlibCompressor::ZlibCompressor(ZlibCompressorFormat format, int level)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(zlibcompressor_class_.init(), "format", ((GZlibCompressorFormat)(format)), "level", level, nullptr))
{
  

}

Glib::RefPtr<ZlibCompressor> ZlibCompressor::create(ZlibCompressorFormat format, int level)
{
  return Glib::RefPtr<ZlibCompressor>( new ZlibCompressor(format, level) );
}

Glib::RefPtr<FileInfo> ZlibCompressor::get_file_info()
{
  return Glib::wrap(g_zlib_compressor_get_file_info(gobj()));
}

Glib::RefPtr<const FileInfo> ZlibCompressor::get_file_info() const
{
  return const_cast<ZlibCompressor*>(this)->get_file_info();
}

void ZlibCompressor::set_file_info(const Glib::RefPtr<FileInfo>& file_info)
{
  g_zlib_compressor_set_file_info(gobj(), Glib::unwrap(file_info));
}


Glib::PropertyProxy< Glib::RefPtr<FileInfo> > ZlibCompressor::property_file_info() 
{
  return Glib::PropertyProxy< Glib::RefPtr<FileInfo> >(this, "file-info");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FileInfo> > ZlibCompressor::property_file_info() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FileInfo> >(this, "file-info");
}

Glib::PropertyProxy_ReadOnly< ZlibCompressorFormat > ZlibCompressor::property_format() const
{
  return Glib::PropertyProxy_ReadOnly< ZlibCompressorFormat >(this, "format");
}

Glib::PropertyProxy_ReadOnly< int > ZlibCompressor::property_level() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "level");
}


} // namespace Gio


