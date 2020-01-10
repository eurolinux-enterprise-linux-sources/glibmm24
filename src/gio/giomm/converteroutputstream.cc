// Generated by gmmproc 2.42.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/converteroutputstream.h>
#include <giomm/private/converteroutputstream_p.h>


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

#include <gio/gio.h>
#include <giomm/converter.h>
#include <giomm/outputstream.h>

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::ConverterOutputStream> wrap(GConverterOutputStream* object, bool take_copy)
{
  return Glib::RefPtr<Gio::ConverterOutputStream>( dynamic_cast<Gio::ConverterOutputStream*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& ConverterOutputStream_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ConverterOutputStream_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_converter_output_stream_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  PollableOutputStream::add_interface(get_type());

  }

  return *this;
}


void ConverterOutputStream_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ConverterOutputStream_Class::wrap_new(GObject* object)
{
  return new ConverterOutputStream((GConverterOutputStream*)object);
}


/* The implementation: */

GConverterOutputStream* ConverterOutputStream::gobj_copy()
{
  reference();
  return gobj();
}

ConverterOutputStream::ConverterOutputStream(const Glib::ConstructParams& construct_params)
:
  FilterOutputStream(construct_params)
{

}

ConverterOutputStream::ConverterOutputStream(GConverterOutputStream* castitem)
:
  FilterOutputStream((GFilterOutputStream*)(castitem))
{}


ConverterOutputStream::~ConverterOutputStream()
{}


ConverterOutputStream::CppClassType ConverterOutputStream::converteroutputstream_class_; // initialize static member

GType ConverterOutputStream::get_type()
{
  return converteroutputstream_class_.init().get_type();
}


GType ConverterOutputStream::get_base_type()
{
  return g_converter_output_stream_get_type();
}


ConverterOutputStream::ConverterOutputStream(const Glib::RefPtr<OutputStream>& base_stream, const Glib::RefPtr<Converter>& converter)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  FilterOutputStream(Glib::ConstructParams(converteroutputstream_class_.init(), "base_stream", const_cast<GOutputStream*>(Glib::unwrap(base_stream)), "converter", Glib::unwrap(converter), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<ConverterOutputStream> ConverterOutputStream::create(const Glib::RefPtr<OutputStream>& base_stream, const Glib::RefPtr<Converter>& converter)
{
  return Glib::RefPtr<ConverterOutputStream>( new ConverterOutputStream(base_stream, converter) );
}

Glib::RefPtr<Converter> ConverterOutputStream::get_converter()
{
  Glib::RefPtr<Converter> retvalue = Glib::wrap(g_converter_output_stream_get_converter(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Converter> ConverterOutputStream::get_converter() const
{
  return const_cast<ConverterOutputStream*>(this)->get_converter();
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Converter> > ConverterOutputStream::property_converter() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Converter> >(this, "converter");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gio


