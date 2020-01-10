// -*- c++ -*-
// Generated by gmmproc 2.42.0 -- DO NOT MODIFY!
#ifndef _GIOMM_ENUMS_H
#define _GIOMM_ENUMS_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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
#include <glibmm/value.h>


namespace Gio
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 *  @var DataStreamByteOrder DATA_STREAM_BYTE_ORDER_BIG_ENDIAN
 *  Selects Big Endian byte order.
 * 
 *  @var DataStreamByteOrder DATA_STREAM_BYTE_ORDER_LITTLE_ENDIAN
 *  Selects Little Endian byte order.
 * 
 *  @var DataStreamByteOrder DATA_STREAM_BYTE_ORDER_HOST_ENDIAN
 *  Selects endianness based on host machine's architecture.
 * 
 *  @enum DataStreamByteOrder
 * 
 * DataStreamByteOrder is used to ensure proper endianness of streaming data sources
 * across various machine architectures.
 * @ingroup giommEnums
 */
enum DataStreamByteOrder
{
  DATA_STREAM_BYTE_ORDER_BIG_ENDIAN,
  DATA_STREAM_BYTE_ORDER_LITTLE_ENDIAN,
  DATA_STREAM_BYTE_ORDER_HOST_ENDIAN
};


/** 
 *  @var DataStreamNewlineType DATA_STREAM_NEWLINE_TYPE_LF
 *  Selects "LF" line endings, common on most modern UNIX platforms.
 * 
 *  @var DataStreamNewlineType DATA_STREAM_NEWLINE_TYPE_CR
 *  Selects "CR" line endings.
 * 
 *  @var DataStreamNewlineType DATA_STREAM_NEWLINE_TYPE_CR_LF
 *  Selects "CR, LF" line ending, common on Microsoft Windows.
 * 
 *  @var DataStreamNewlineType DATA_STREAM_NEWLINE_TYPE_ANY
 *  Automatically try to handle any line ending type.
 * 
 *  @enum DataStreamNewlineType
 * 
 * DataStreamNewlineType is used when checking for or setting the line endings for a given file.
 * @ingroup giommEnums
 */
enum DataStreamNewlineType
{
  DATA_STREAM_NEWLINE_TYPE_LF,
  DATA_STREAM_NEWLINE_TYPE_CR,
  DATA_STREAM_NEWLINE_TYPE_CR_LF,
  DATA_STREAM_NEWLINE_TYPE_ANY
};


/** 
 *  @var ErrorEnum IO_ERROR_FAILED
 *  Generic error condition for when an operation fails and no more specific IOErrorEnum value is defined.
 * 
 *  @var ErrorEnum IO_ERROR_NOT_FOUND
 *  File not found.
 * 
 *  @var ErrorEnum IO_ERROR_EXISTS
 *  File already exists.
 * 
 *  @var ErrorEnum IO_ERROR_IS_DIRECTORY
 *  File is a directory.
 * 
 *  @var ErrorEnum IO_ERROR_NOT_DIRECTORY
 *  File is not a directory.
 * 
 *  @var ErrorEnum IO_ERROR_NOT_EMPTY
 *  File is a directory that isn't empty.
 * 
 *  @var ErrorEnum IO_ERROR_NOT_REGULAR_FILE
 *  File is not a regular file.
 * 
 *  @var ErrorEnum IO_ERROR_NOT_SYMBOLIC_LINK
 *  File is not a symbolic link.
 * 
 *  @var ErrorEnum IO_ERROR_NOT_MOUNTABLE_FILE
 *  File cannot be mounted.
 * 
 *  @var ErrorEnum IO_ERROR_FILENAME_TOO_LONG
 *  Filename is too many characters.
 * 
 *  @var ErrorEnum IO_ERROR_INVALID_FILENAME
 *  Filename is invalid or contains invalid characters.
 * 
 *  @var ErrorEnum IO_ERROR_TOO_MANY_LINKS
 *  File contains too many symbolic links.
 * 
 *  @var ErrorEnum IO_ERROR_NO_SPACE
 *  No space left on drive.
 * 
 *  @var ErrorEnum IO_ERROR_INVALID_ARGUMENT
 *  Invalid argument.
 * 
 *  @var ErrorEnum IO_ERROR_PERMISSION_DENIED
 *  Permission denied.
 * 
 *  @var ErrorEnum IO_ERROR_NOT_SUPPORTED
 *  Operation (or one of its parameters) not supported.
 * 
 *  @var ErrorEnum IO_ERROR_NOT_MOUNTED
 *  File isn't mounted.
 * 
 *  @var ErrorEnum IO_ERROR_ALREADY_MOUNTED
 *  File is already mounted.
 * 
 *  @var ErrorEnum IO_ERROR_CLOSED
 *  File was closed.
 * 
 *  @var ErrorEnum IO_ERROR_CANCELLED
 *  Operation was cancelled. See Cancellable.
 * 
 *  @var ErrorEnum IO_ERROR_PENDING
 *  Operations are still pending.
 * 
 *  @var ErrorEnum IO_ERROR_READ_ONLY
 *  File is read only.
 * 
 *  @var ErrorEnum IO_ERROR_CANT_CREATE_BACKUP
 *  Backup couldn't be created.
 * 
 *  @var ErrorEnum IO_ERROR_WRONG_ETAG
 *  File's Entity Tag was incorrect.
 * 
 *  @var ErrorEnum IO_ERROR_TIMED_OUT
 *  Operation timed out.
 * 
 *  @var ErrorEnum IO_ERROR_WOULD_RECURSE
 *  Operation would be recursive.
 * 
 *  @var ErrorEnum IO_ERROR_BUSY
 *  File is busy.
 * 
 *  @var ErrorEnum IO_ERROR_WOULD_BLOCK
 *  Operation would block.
 * 
 *  @var ErrorEnum IO_ERROR_HOST_NOT_FOUND
 *  Host couldn't be found (remote operations).
 * 
 *  @var ErrorEnum IO_ERROR_WOULD_MERGE
 *  Operation would merge files.
 * 
 *  @var ErrorEnum IO_ERROR_FAILED_HANDLED
 *  Operation failed and a helper program has already interacted with the user. Do not display any error dialog.
 * 
 *  @var ErrorEnum IO_ERROR_TOO_MANY_OPEN_FILES
 *  The current process has too many files open and can't open any more. Duplicate descriptors do count toward this limit. Since 2.20.
 * 
 *  @var ErrorEnum IO_ERROR_NOT_INITIALIZED
 *  The object has not been initialized. Since 2.22.
 * 
 *  @var ErrorEnum IO_ERROR_ADDRESS_IN_USE
 *  The requested address is already in use. Since 2.22.
 * 
 *  @var ErrorEnum IO_ERROR_PARTIAL_INPUT
 *  Need more input to finish operation. Since 2.24.
 * 
 *  @var ErrorEnum IO_ERROR_INVALID_DATA
 *  The input data was invalid. Since 2.24.
 * 
 *  @var ErrorEnum IO_ERROR_DBUS_ERROR
 *  A remote object generated an error that doesn't correspond to a locally registered Error error domain. Use g_dbus_error_get_remote_error() to extract the D-Bus error name and g_dbus_error_strip_remote_error() to fix up the message so it matches what was received on the wire. Since 2.26.
 * 
 *  @var ErrorEnum IO_ERROR_HOST_UNREACHABLE
 *  Host unreachable. Since 2.26.
 * 
 *  @var ErrorEnum IO_ERROR_NETWORK_UNREACHABLE
 *  Network unreachable. Since 2.26.
 * 
 *  @var ErrorEnum IO_ERROR_CONNECTION_REFUSED
 *  Connection refused. Since 2.26.
 * 
 *  @var ErrorEnum IO_ERROR_PROXY_FAILED
 *  Connection to proxy server failed. Since 2.26.
 * 
 *  @var ErrorEnum IO_ERROR_PROXY_AUTH_FAILED
 *  Proxy authentication failed. Since 2.26.
 * 
 *  @var ErrorEnum IO_ERROR_PROXY_NEED_AUTH
 *  Proxy server needs authentication. Since 2.26.
 * 
 *  @var ErrorEnum IO_ERROR_PROXY_NOT_ALLOWED
 *  Proxy connection is not allowed by ruleset. Since 2.26.
 * 
 *  @var ErrorEnum IO_ERROR_BROKEN_PIPE
 *  Broken pipe. Since 2.36.
 * 
 *  @enum ErrorEnum
 * 
 * Error codes returned by GIO functions.
 * 
 * Note that this domain may be extended in future GLib releases. In
 * general, new error codes either only apply to new APIs, or else
 * replace IO_ERROR_FAILED in cases that were not explicitly
 * distinguished before. You should therefore avoid writing code like
 * 
 * [C example ellipted]
 * but should instead treat all unrecognized error codes the same as
 * IO_ERROR_FAILED.
 * @ingroup giommEnums
 */
enum ErrorEnum
{
  IO_ERROR_FAILED,
  IO_ERROR_NOT_FOUND,
  IO_ERROR_EXISTS,
  IO_ERROR_IS_DIRECTORY,
  IO_ERROR_NOT_DIRECTORY,
  IO_ERROR_NOT_EMPTY,
  IO_ERROR_NOT_REGULAR_FILE,
  IO_ERROR_NOT_SYMBOLIC_LINK,
  IO_ERROR_NOT_MOUNTABLE_FILE,
  IO_ERROR_FILENAME_TOO_LONG,
  IO_ERROR_INVALID_FILENAME,
  IO_ERROR_TOO_MANY_LINKS,
  IO_ERROR_NO_SPACE,
  IO_ERROR_INVALID_ARGUMENT,
  IO_ERROR_PERMISSION_DENIED,
  IO_ERROR_NOT_SUPPORTED,
  IO_ERROR_NOT_MOUNTED,
  IO_ERROR_ALREADY_MOUNTED,
  IO_ERROR_CLOSED,
  IO_ERROR_CANCELLED,
  IO_ERROR_PENDING,
  IO_ERROR_READ_ONLY,
  IO_ERROR_CANT_CREATE_BACKUP,
  IO_ERROR_WRONG_ETAG,
  IO_ERROR_TIMED_OUT,
  IO_ERROR_WOULD_RECURSE,
  IO_ERROR_BUSY,
  IO_ERROR_WOULD_BLOCK,
  IO_ERROR_HOST_NOT_FOUND,
  IO_ERROR_HOST_WAS_NOT_FOUND = IO_ERROR_HOST_NOT_FOUND,
  IO_ERROR_WOULD_MERGE,
  IO_ERROR_FAILED_HANDLED,
  IO_ERROR_TOO_MANY_OPEN_FILES,
  IO_ERROR_NOT_INITIALIZED,
  IO_ERROR_ADDRESS_IN_USE,
  IO_ERROR_PARTIAL_INPUT,
  IO_ERROR_INVALID_DATA,
  IO_ERROR_DBUS_ERROR,
  IO_ERROR_HOST_UNREACHABLE,
  IO_ERROR_NETWORK_UNREACHABLE,
  IO_ERROR_CONNECTION_REFUSED,
  IO_ERROR_PROXY_FAILED,
  IO_ERROR_PROXY_AUTH_FAILED,
  IO_ERROR_PROXY_NEED_AUTH,
  IO_ERROR_PROXY_NOT_ALLOWED,
  IO_ERROR_BROKEN_PIPE
};


/** 
 *  @var SocketFamily SOCKET_FAMILY_INVALID
 *  No address family.
 * 
 *  @var SocketFamily SOCKET_FAMILY_IPV4
 *  The IPv4 family.
 * 
 *  @var SocketFamily SOCKET_FAMILY_IPV6
 *  The IPv6 family.
 * 
 *  @var SocketFamily SOCKET_FAMILY_UNIX
 *  The UNIX domain family.
 * 
 *  @enum SocketFamily
 * 
 * The protocol family of a SocketAddress. (These values are
 * identical to the system defines Af::INET, Af::INET6 and Af::UNIX,
 * if available.)
 * 
 * @newin{2,22}
 * @ingroup giommEnums
 */
enum SocketFamily
{
  SOCKET_FAMILY_INVALID = 0,
  SOCKET_FAMILY_UNIX = GLIB_SYSDEF_AF_UNIX,
  SOCKET_FAMILY_IPV4 = GLIB_SYSDEF_AF_INET,
  SOCKET_FAMILY_IPV6 = GLIB_SYSDEF_AF_INET6
};

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gio::SocketFamily> : public Glib::Value_Enum<Gio::SocketFamily>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{

/** 
 *  @var TlsAuthenticationMode TLS_AUTHENTICATION_NONE
 *  Client authentication not required.
 * 
 *  @var TlsAuthenticationMode TLS_AUTHENTICATION_REQUESTED
 *  Client authentication is requested.
 * 
 *  @var TlsAuthenticationMode TLS_AUTHENTICATION_REQUIRED
 *  Client authentication is required.
 * 
 *  @enum TlsAuthenticationMode
 * 
 * The client authentication mode for a TlsServerConnection.
 * 
 * @newin{2,28}
 * @ingroup giommEnums
 */
enum TlsAuthenticationMode
{
  TLS_AUTHENTICATION_NONE,
  TLS_AUTHENTICATION_REQUESTED,
  TLS_AUTHENTICATION_REQUIRED
};

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gio::TlsAuthenticationMode> : public Glib::Value_Enum<Gio::TlsAuthenticationMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{

/** 
 *  @var TlsCertificateFlags TLS_CERTIFICATE_UNKNOWN_CA
 *  The signing certificate authority is not known.
 * 
 *  @var TlsCertificateFlags TLS_CERTIFICATE_BAD_IDENTITY
 *  The certificate does not match the expected identity of the site that it was retrieved from.
 * 
 *  @var TlsCertificateFlags TLS_CERTIFICATE_NOT_ACTIVATED
 *  The certificate's activation time is still in the future.
 * 
 *  @var TlsCertificateFlags TLS_CERTIFICATE_EXPIRED
 *  The certificate has expired.
 * 
 *  @var TlsCertificateFlags TLS_CERTIFICATE_REVOKED
 *  The certificate has been revoked according to the TlsConnection's certificate revocation list.
 * 
 *  @var TlsCertificateFlags TLS_CERTIFICATE_INSECURE
 *  The certificate's algorithm is considered insecure.
 * 
 *  @var TlsCertificateFlags TLS_CERTIFICATE_GENERIC_ERROR
 *  Some other error occurred validating the certificate.
 * 
 *  @var TlsCertificateFlags TLS_CERTIFICATE_VALIDATE_ALL
 *  The combination of all of the above flags.
 * 
 *  @enum TlsCertificateFlags
 * 
 * A set of flags describing TLS certification validation. This can be
 * used to set which validation steps to perform (eg, with
 * g_tls_client_connection_set_validation_flags()), or to describe why
 * a particular certificate was rejected (eg, in
 * TlsConnection::signal_accept_certificate()).
 * 
 * @newin{2,28}
 * @ingroup giommEnums
 * @par Bitwise operators:
 * <tt>%TlsCertificateFlags operator|(TlsCertificateFlags, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags operator&(TlsCertificateFlags, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags operator^(TlsCertificateFlags, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags operator~(TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags& operator|=(TlsCertificateFlags&, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags& operator&=(TlsCertificateFlags&, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags& operator^=(TlsCertificateFlags&, TlsCertificateFlags)</tt><br>
 */
enum TlsCertificateFlags
{
  TLS_CERTIFICATE_UNKNOWN_CA = (1 << 0),
  TLS_CERTIFICATE_BAD_IDENTITY = (1 << 1),
  TLS_CERTIFICATE_NOT_ACTIVATED = (1 << 2),
  TLS_CERTIFICATE_EXPIRED = (1 << 3),
  TLS_CERTIFICATE_REVOKED = (1 << 4),
  TLS_CERTIFICATE_INSECURE = (1 << 5),
  TLS_CERTIFICATE_GENERIC_ERROR = (1 << 6),
  TLS_CERTIFICATE_VALIDATE_ALL = 0x007f
};

/** @ingroup giommEnums */
inline TlsCertificateFlags operator|(TlsCertificateFlags lhs, TlsCertificateFlags rhs)
  { return static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline TlsCertificateFlags operator&(TlsCertificateFlags lhs, TlsCertificateFlags rhs)
  { return static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline TlsCertificateFlags operator^(TlsCertificateFlags lhs, TlsCertificateFlags rhs)
  { return static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline TlsCertificateFlags operator~(TlsCertificateFlags flags)
  { return static_cast<TlsCertificateFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup giommEnums */
inline TlsCertificateFlags& operator|=(TlsCertificateFlags& lhs, TlsCertificateFlags rhs)
  { return (lhs = static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline TlsCertificateFlags& operator&=(TlsCertificateFlags& lhs, TlsCertificateFlags rhs)
  { return (lhs = static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline TlsCertificateFlags& operator^=(TlsCertificateFlags& lhs, TlsCertificateFlags rhs)
  { return (lhs = static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gio::TlsCertificateFlags> : public Glib::Value_Flags<Gio::TlsCertificateFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{


} // namespace Gio


#endif /* _GIOMM_ENUMS_H */

