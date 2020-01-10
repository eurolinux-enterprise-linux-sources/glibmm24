/* init.cc
 *
 * Copyright (C) 2007 The gtkmm team
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

#include "init.h"
#include <glibmm/init.h>

namespace Gio
{

void
init()
{
  static bool s_init = false;
  if (!s_init)
  {
    Glib::init();
    Gio::wrap_init();
    s_init = true;
  }
}

} // namespace Gio
