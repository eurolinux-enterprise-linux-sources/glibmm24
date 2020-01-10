// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_SOCKETCLIENT_H
#define _GIOMM_SOCKETCLIENT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 Jonathon Jongsma
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
#include <giomm/asyncresult.h>
#include <giomm/cancellable.h>
#include <giomm/socketconnectable.h>
#include <giomm/enums.h>
#include <giomm/socket.h>
#include <giomm/socketconnection.h>
#include <giomm/proxyresolver.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GSocketClient GSocketClient;
typedef struct _GSocketClientClass GSocketClientClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class SocketClient_Class; } // namespace Gio
namespace Gio
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 * Describes an event occurring on a SocketClient. See the
 * SocketClient::signal_event() signal for more details.
 * 
 * Additional values may be added to this type in the future.
 * 
 * @newin{2,32}
 * @ingroup giommEnums
 */
enum SocketClientEvent
{
  /** The client is doing a DNS lookup.
   */
  SOCKET_CLIENT_RESOLVING,
  /** The client has completed a DNS lookup.
   */
  SOCKET_CLIENT_RESOLVED,
  /** The client is connecting to a remote
   * host (either a proxy or the destination server).
   */
  SOCKET_CLIENT_CONNECTING,
  /** The client has connected to a remote
   * host.
   */
  SOCKET_CLIENT_CONNECTED,
  /** The client is negotiating
   * with a proxy to connect to the destination server.
   */
  SOCKET_CLIENT_PROXY_NEGOTIATING,
  /** The client has negotiated
   * with the proxy server.
   */
  SOCKET_CLIENT_PROXY_NEGOTIATED,
  /** The client is performing a
   * TLS handshake.
   */
  SOCKET_CLIENT_TLS_HANDSHAKING,
  /** The client has performed a
   * TLS handshake.
   */
  SOCKET_CLIENT_TLS_HANDSHAKED,
  /** The client is done with a particular
   * SocketConnectable.
   */
  SOCKET_CLIENT_COMPLETE
};

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gio::SocketClientEvent> : public Glib::Value_Enum<Gio::SocketClientEvent>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{


/** Helper for connecting to a network service.
 *
 * @see SocketConnection, SocketListener
 *
 * SocketClient is a high-level utility class for connecting to a
 * network host using a connection oriented socket type.
 *
 * You create a SocketClient object, set any options you want, then
 * call a sync or async connect operation, which returns a SocketConnection
 * subclass on success.
 *
 * The type of the SocketConnection object returned depends on the type of
 * the underlying socket that is in use. For instance, for a TCP/IP connection
 * it will be a TcpConnection.
 *
 * @newin{2,24}
 * @ingroup NetworkIO
 */

class SocketClient : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef SocketClient CppObjectType;
  typedef SocketClient_Class CppClassType;
  typedef GSocketClient BaseObjectType;
  typedef GSocketClientClass BaseClassType;

private:  friend class SocketClient_Class;
  static CppClassType socketclient_class_;

private:
  // noncopyable
  SocketClient(const SocketClient&);
  SocketClient& operator=(const SocketClient&);

protected:
  explicit SocketClient(const Glib::ConstructParams& construct_params);
  explicit SocketClient(GSocketClient* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~SocketClient();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GSocketClient*       gobj()       { return reinterpret_cast<GSocketClient*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GSocketClient* gobj() const { return reinterpret_cast<GSocketClient*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GSocketClient* gobj_copy();

private:


protected:
  SocketClient();

public:
  
  static Glib::RefPtr<SocketClient> create();

  
  /** Gets the socket family of the socket client.
   * 
   * See g_socket_client_set_family() for details.
   * 
   * @newin{2,22}
   * @return A SocketFamily.
   */
  SocketFamily get_family() const;
  
  /** Sets the socket family of the socket client.
   * If this is set to something other than SOCKET_FAMILY_INVALID
   * then the sockets created by this object will be of the specified
   * family.
   * 
   * This might be useful for instance if you want to force the local
   * connection to be an ipv4 socket, even though the address might
   * be an ipv6 mapped to ipv4 address.
   * 
   * @newin{2,22}
   * @param family A SocketFamily.
   */
  void set_family(SocketFamily family);
  
  /** Gets the socket type of the socket client.
   * 
   * See g_socket_client_set_socket_type() for details.
   * 
   * @newin{2,22}
   * @return A SocketFamily.
   */
  SocketType get_socket_type() const;
  
  /** Sets the socket type of the socket client.
   * The sockets created by this object will be of the specified
   * type.
   * 
   * It doesn't make sense to specify a type of SOCKET_TYPE_DATAGRAM,
   * as GSocketClient is used for connection oriented services.
   * 
   * @newin{2,22}
   * @param type A SocketType.
   */
  void set_socket_type(SocketType type);
  
  /** Gets the protocol name type of the socket client.
   * 
   * See g_socket_client_set_protocol() for details.
   * 
   * @newin{2,22}
   * @return A SocketProtocol.
   */
  SocketProtocol get_protocol() const;
  
  /** Sets the protocol of the socket client.
   * The sockets created by this object will use of the specified
   * protocol.
   * 
   * If @a protocol is %0 that means to use the default
   * protocol for the socket family and type.
   * 
   * @newin{2,22}
   * @param protocol A SocketProtocol.
   */
  void set_protocol(SocketProtocol protocol);
  
  /** Gets the local address of the socket client.
   * 
   * See g_socket_client_set_local_address() for details.
   * 
   * @newin{2,22}
   * @return A SocketAddress or <tt>0</tt>. Do not free.
   */
  Glib::RefPtr<SocketAddress> get_local_address();
  
  /** Gets the local address of the socket client.
   * 
   * See g_socket_client_set_local_address() for details.
   * 
   * @newin{2,22}
   * @return A SocketAddress or <tt>0</tt>. Do not free.
   */
  Glib::RefPtr<const SocketAddress> get_local_address() const;
  
  /** Sets the local address of the socket client.
   * The sockets created by this object will bound to the
   * specified address (if not <tt>0</tt>) before connecting.
   * 
   * This is useful if you want to ensure that the local
   * side of the connection is on a specific port, or on
   * a specific interface.
   * 
   * @newin{2,22}
   * @param address A SocketAddress, or <tt>0</tt>.
   */
  void set_local_address(const Glib::RefPtr<SocketAddress>& address);

  
  /** Tries to resolve the @a connectable and make a network connection to it.
   * 
   * Upon a successful connection, a new SocketConnection is constructed
   * and returned.  The caller owns this new object and must drop their
   * reference to it when finished with it.
   * 
   * The type of the SocketConnection object returned depends on the type of
   * the underlying socket that is used. For instance, for a TCP/IP connection
   * it will be a TcpConnection.
   * 
   * The socket created will be the same family as the address that the
   *  @a connectable resolves to, unless family is set with g_socket_client_set_family()
   * or indirectly via g_socket_client_set_local_address(). The socket type
   * defaults to SOCKET_TYPE_STREAM but can be set with
   * g_socket_client_set_socket_type().
   * 
   * If a local address is specified with g_socket_client_set_local_address() the
   * socket will be bound to this address before connecting.
   * 
   * @newin{2,22}
   * @param connectable A SocketConnectable specifying the remote address.
   * @param cancellable Optional Cancellable object, <tt>0</tt> to ignore.
   * @return A SocketConnection on success, <tt>0</tt> on error.
   */
  Glib::RefPtr<SocketConnection> connect(const Glib::RefPtr<SocketConnectable>& connectable, const Glib::RefPtr<Cancellable>& cancellable);

  /// A connect() convenience overload.
  Glib::RefPtr<SocketConnection> connect(const Glib::RefPtr<SocketConnectable>& connectable);

  
  /** This is a helper function for g_socket_client_connect().
   * 
   * Attempts to create a TCP connection to the named host.
   * 
   *  @a host_and_port may be in any of a number of recognized formats; an IPv6
   * address, an IPv4 address, or a domain name (in which case a DNS
   * lookup is performed).  Quoting with [] is supported for all address
   * types.  A port override may be specified in the usual way with a
   * colon.  Ports may be given as decimal numbers or symbolic names (in
   * which case an /etc/services lookup is performed).
   * 
   * If no port override is given in @a host_and_port then @a default_port will be
   * used as the port number to connect to.
   * 
   * In general, @a host_and_port is expected to be provided by the user (allowing
   * them to give the hostname, and a port override if necessary) and
   *  @a default_port is expected to be provided by the application.
   * 
   * In the case that an IP address is given, a single connection
   * attempt is made.  In the case that a name is given, multiple
   * connection attempts may be made, in turn and according to the
   * number of address records in DNS, until a connection succeeds.
   * 
   * Upon a successful connection, a new SocketConnection is constructed
   * and returned.  The caller owns this new object and must drop their
   * reference to it when finished with it.
   * 
   * In the event of any failure (DNS error, service not found, no hosts
   * connectable) <tt>0</tt> is returned and @a error (if non-<tt>0</tt>) is set
   * accordingly.
   * 
   * @newin{2,22}
   * @param host_and_port The name and optionally port of the host to connect to.
   * @param default_port The default port to connect to.
   * @param cancellable A Cancellable, or <tt>0</tt>.
   * @return A SocketConnection on success, <tt>0</tt> on error.
   */
  Glib::RefPtr<SocketConnection> connect_to_host(const Glib::ustring& host_and_port, guint16 default_port, const Glib::RefPtr<Cancellable>& cancellable);

  /// A connect_to_host() convenience overload.
  Glib::RefPtr<SocketConnection> connect_to_host(const Glib::ustring& host_and_port, guint16 default_port);

  
  /** Attempts to create a TCP connection to a service.
   * 
   * This call looks up the SRV record for @a service at @a domain for the
   * "tcp" protocol.  It then attempts to connect, in turn, to each of
   * the hosts providing the service until either a connection succeeds
   * or there are no hosts remaining.
   * 
   * Upon a successful connection, a new SocketConnection is constructed
   * and returned.  The caller owns this new object and must drop their
   * reference to it when finished with it.
   * 
   * In the event of any failure (DNS error, service not found, no hosts
   * connectable) <tt>0</tt> is returned and @a error (if non-<tt>0</tt>) is set
   * accordingly.
   * @param domain A domain name.
   * @param service The name of the service to connect to.
   * @param cancellable A Cancellable, or <tt>0</tt>.
   * @return A SocketConnection if successful, or <tt>0</tt> on error.
   */
  Glib::RefPtr<SocketConnection> connect_to_service(const Glib::ustring& domain, const Glib::ustring& service, const Glib::RefPtr<Cancellable>& cancellable);

  /// A connect_to_service() convenience overload.
  Glib::RefPtr<SocketConnection> connect_to_service(const Glib::ustring& domain, const Glib::ustring& service);

  
  /** This is a helper function for g_socket_client_connect().
   * 
   * Attempts to create a TCP connection with a network URI.
   * 
   *  @a uri may be any valid URI containing an "authority" (hostname/port)
   * component. If a port is not specified in the URI, @a default_port
   * will be used. TLS will be negotiated if SocketClient::property_tls() is <tt>true</tt>.
   * (SocketClient does not know to automatically assume TLS for
   * certain URI schemes.)
   * 
   * Using this rather than g_socket_client_connect() or
   * g_socket_client_connect_to_host() allows SocketClient to
   * determine when to use application-specific proxy protocols.
   * 
   * Upon a successful connection, a new SocketConnection is constructed
   * and returned.  The caller owns this new object and must drop their
   * reference to it when finished with it.
   * 
   * In the event of any failure (DNS error, service not found, no hosts
   * connectable) <tt>0</tt> is returned and @a error (if non-<tt>0</tt>) is set
   * accordingly.
   * 
   * @newin{2,26}
   * @param uri A network URI.
   * @param default_port The default port to connect to.
   * @param cancellable A Cancellable, or <tt>0</tt>.
   * @return A SocketConnection on success, <tt>0</tt> on error.
   */
  Glib::RefPtr<SocketConnection> connect_to_uri(const Glib::ustring& uri, guint16 default_port, const Glib::RefPtr<Cancellable>& cancellable);

  /// A connect_to_uri() convenience overload.
  Glib::RefPtr<SocketConnection> connect_to_uri(const Glib::ustring& uri, guint16 default_port);

  
  /** This is the asynchronous version of g_socket_client_connect().
   * 
   * When the operation is finished @a slot will be
   * called. You can then call g_socket_client_connect_finish() to get
   * the result of the operation.
   * 
   * @newin{2,22}
   * @param connectable A SocketConnectable specifying the remote address.
   * @param cancellable A Cancellable, or <tt>0</tt>.
   * @param slot A SlotAsyncReady.
   * @param user_data User data for the callback.
   */

  void connect_async(const Glib::RefPtr<SocketConnectable>& connectable, const Glib::RefPtr<Cancellable>& cancellable, const SlotAsyncReady& slot);

  /** This is the asynchronous version of connect().
   * When the operation is finished @a slot will be called. You can then call finish() to get the result of the operation.
   *
   * @param connectable A SocketConnectable specifying the remote address.
   * @param slot A callback slot to call after the operation completes.
   */
  void connect_async(const Glib::RefPtr<SocketConnectable>& connectable, const SlotAsyncReady& slot);
 

  /** Finishes an async connect operation. See g_socket_client_connect_async()
   * 
   * @newin{2,22}
   * @param result A AsyncResult.
   * @return A SocketConnection on success, <tt>0</tt> on error.
   */
  Glib::RefPtr<SocketConnection> connect_finish(const Glib::RefPtr<AsyncResult>& result);


  /** This is the asynchronous version of g_socket_client_connect_to_host().
   * 
   * When the operation is finished @a slot will be
   * called. You can then call g_socket_client_connect_to_host_finish() to get
   * the result of the operation.
   * 
   * @newin{2,22}
   * @param host_and_port The name and optionally the port of the host to connect to.
   * @param default_port The default port to connect to.
   * @param cancellable A Cancellable, or <tt>0</tt>.
   * @param slot A SlotAsyncReady.
   * @param user_data User data for the callback.
   */

  void connect_to_host_async(const Glib::ustring& host_and_port, guint16 default_port, const Glib::RefPtr<Cancellable>& cancellable, const SlotAsyncReady& slot);

  /** This is the asynchronous version of connect_to_host().
   * When the operation is finished @a slot will be called. You can then call connect_to_host_finish() to get the result of the operation.
   *
   * @param host_and_port The name and optionally the port of the host to connect to.
   * @param default_port The default port to connect to.
   * @param slot A callback slot to call after the opration completes.
   */
  void connect_to_host_async(const Glib::ustring& host_and_port, guint16 default_port, const SlotAsyncReady& slot);
  

  /** Finishes an async connect operation. See g_socket_client_connect_to_host_async()
   * 
   * @newin{2,22}
   * @param result A AsyncResult.
   * @return A SocketConnection on success, <tt>0</tt> on error.
   */
  Glib::RefPtr<SocketConnection> connect_to_host_finish(const Glib::RefPtr<AsyncResult>& result);


  /** This is the asynchronous version of
   * g_socket_client_connect_to_service().
   * 
   * @newin{2,22}
   * @param domain A domain name.
   * @param service The name of the service to connect to.
   * @param cancellable A Cancellable, or <tt>0</tt>.
   * @param slot A SlotAsyncReady.
   * @param user_data User data for the callback.
   */

  void connect_to_service_async(const Glib::ustring& domain, const Glib::ustring& service, const Glib::RefPtr<Cancellable>& cancellable, const SlotAsyncReady& slot);

  /** This is the asynchronous version of connect_to_service().
   *
   * @param domain A domain name.
   * @param service The name of the service to connect to
   * @param slot A callback slot to call after the opration completes.
   */
  void connect_to_service_async(const Glib::ustring& domain, const Glib::ustring& service, const SlotAsyncReady& slot);
  

  /** Finishes an async connect operation. See g_socket_client_connect_to_service_async()
   * 
   * @newin{2,22}
   * @param result A AsyncResult.
   * @return A SocketConnection on success, <tt>0</tt> on error.
   */
  Glib::RefPtr<SocketConnection> connect_to_service_finish(const Glib::RefPtr<AsyncResult>& result);


  /** This is the asynchronous version of g_socket_client_connect_to_uri().
   * 
   * When the operation is finished @a slot will be
   * called. You can then call g_socket_client_connect_to_uri_finish() to get
   * the result of the operation.
   * 
   * @newin{2,26}
   * @param uri A network uri.
   * @param default_port The default port to connect to.
   * @param cancellable A Cancellable, or <tt>0</tt>.
   * @param slot A SlotAsyncReady.
   * @param user_data User data for the callback.
   */

  void connect_to_uri_async(const Glib::ustring& uri, guint16 default_port, const Glib::RefPtr<Cancellable>& cancellable, const SlotAsyncReady& slot);

  /** This is the asynchronous version of connect_to_uri().
   *
   * @param uri A network URI.
   * @param default_port The default port to connect to.
   * @param slot A callback slot to call after the opration completes.
   */
  void connect_to_uri_async(const Glib::ustring& uri, guint16 default_port, const SlotAsyncReady& slot);
  

  /** Finishes an async connect operation. See g_socket_client_connect_to_uri_async()
   * 
   * @newin{2,26}
   * @param result A AsyncResult.
   * @return A SocketConnection on success, <tt>0</tt> on error.
   */
  Glib::RefPtr<SocketConnection> connect_to_uri_finish(const Glib::RefPtr<AsyncResult>& result);


  /** Gets the proxy enable state; see g_socket_client_set_enable_proxy()
   * 
   * @newin{2,26}
   * @return Whether proxying is enabled.
   */
  bool get_enable_proxy() const;
  
  /** Sets whether or not @a client attempts to make connections via a
   * proxy server. When enabled (the default), SocketClient will use a
   * ProxyResolver to determine if a proxy protocol such as SOCKS is
   * needed, and automatically do the necessary proxy negotiation.
   * 
   * See also g_socket_client_set_proxy_resolver().
   * 
   * @newin{2,26}
   * @param enable Whether to enable proxies.
   */
  void set_enable_proxy(bool enable);


  /** Gets whether @a client creates TLS connections. See
   * g_socket_client_set_tls() for details.
   * 
   * @newin{2,28}
   * @return Whether @a client uses TLS.
   */
  bool get_tls() const;
  
  /** Sets whether @a client creates TLS (aka SSL) connections. If @a tls is
   * <tt>true</tt>, @a client will wrap its connections in a TlsClientConnection
   * and perform a TLS handshake when connecting.
   * 
   * Note that since SocketClient must return a SocketConnection,
   * but TlsClientConnection is not a SocketConnection, this
   * actually wraps the resulting TlsClientConnection in a
   * TcpWrapperConnection when returning it. You can use
   * g_tcp_wrapper_connection_get_base_io_stream() on the return value
   * to extract the TlsClientConnection.
   * 
   * If you need to modify the behavior of the TLS handshake (eg, by
   * setting a client-side certificate to use, or connecting to the
   * TlsConnection::signal_accept_certificate() signal), you can connect to
   *  @a client's SocketClient::signal_event() signal and wait for it to be
   * emitted with SOCKET_CLIENT_TLS_HANDSHAKING, which will give you
   * a chance to see the TlsClientConnection before the handshake
   * starts.
   * 
   * @newin{2,28}
   * @param tls Whether to use TLS.
   */
  void set_tls(bool tls =  true);
  
  /** Gets the TLS validation flags used creating TLS connections via
   *  @a client.
   * 
   * @newin{2,28}
   * @return The TLS validation flags.
   */
  TlsCertificateFlags get_tls_validation_flags() const;
  
  /** Sets the TLS validation flags used when creating TLS connections
   * via @a client. The default value is TLS_CERTIFICATE_VALIDATE_ALL.
   * 
   * @newin{2,28}
   * @param flags The validation flags.
   */
  void set_tls_validation_flags(TlsCertificateFlags flags);

  
  /** Gets the ProxyResolver being used by @a client. Normally, this will
   * be the resolver returned by g_proxy_resolver_get_default(), but you
   * can override it with g_socket_client_set_proxy_resolver().
   * 
   * @newin{2,36}
   * @return The ProxyResolver being used by
   *  @a client.
   */
  Glib::RefPtr<ProxyResolver> get_proxy_resolver();
  
  /** Gets the ProxyResolver being used by @a client. Normally, this will
   * be the resolver returned by g_proxy_resolver_get_default(), but you
   * can override it with g_socket_client_set_proxy_resolver().
   * 
   * @newin{2,36}
   * @return The ProxyResolver being used by
   *  @a client.
   */
  Glib::RefPtr<const ProxyResolver> get_proxy_resolver() const;
  
  /** Overrides the ProxyResolver used by @a client. You can call this if
   * you want to use specific proxies, rather than using the system
   * default proxy settings.
   * 
   * Note that whether or not the proxy resolver is actually used
   * depends on the setting of SocketClient::property_enable_proxy(), which is not
   * changed by this function (but which is <tt>true</tt> by default)
   * 
   * @newin{2,36}
   * @param proxy_resolver A ProxyResolver, or <tt>0</tt> for the
   * default.
   */
  void set_proxy_resolver(const Glib::RefPtr<ProxyResolver>& proxy_resolver);

  
  /** Gets the I/O timeout time for sockets created by @a client.
   * 
   * See g_socket_client_set_timeout() for details.
   * 
   * @newin{2,26}
   * @return The timeout in seconds.
   */
  guint get_timeout() const;
  
  /** Sets the I/O timeout for sockets created by @a client. @a timeout is a
   * time in seconds, or 0 for no timeout (the default).
   * 
   * The timeout value affects the initial connection attempt as well,
   * so setting this may cause calls to g_socket_client_connect(), etc,
   * to fail with IO_ERROR_TIMED_OUT.
   * 
   * @newin{2,26}
   * @param timeout The timeout.
   */
  void set_timeout(guint timeout);

  
  /** Enable proxy protocols to be handled by the application. When the
   * indicated proxy protocol is returned by the ProxyResolver,
   * SocketClient will consider this protocol as supported but will
   * not try to find a Proxy instance to handle handshaking. The
   * application must check for this case by calling
   * g_socket_connection_get_remote_address() on the returned
   * SocketConnection, and seeing if it's a ProxyAddress of the
   * appropriate type, to determine whether or not it needs to handle
   * the proxy handshaking itself.
   * 
   * This should be used for proxy protocols that are dialects of
   * another protocol such as HTTP proxy. It also allows cohabitation of
   * proxy protocols that are reused between protocols. A good example
   * is HTTP. It can be used to proxy HTTP, FTP and Gopher and can also
   * be use as generic socket proxy through the HTTP CONNECT method.
   * 
   * When the proxy is detected as being an application proxy, TLS handshake
   * will be skipped. This is required to let the application do the proxy
   * specific handshake.
   * @param protocol The proxy protocol.
   */
  void add_application_proxy(const Glib::ustring& protocol);


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The sockets address family to use for socket construction.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SocketFamily > property_family() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The sockets address family to use for socket construction.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SocketFamily > property_family() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The local address constructed sockets will be bound to.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<SocketAddress> > property_local_address() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The local address constructed sockets will be bound to.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SocketAddress> > property_local_address() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The protocol to use for socket construction, or 0 for default.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SocketProtocol > property_protocol() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The protocol to use for socket construction, or 0 for default.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SocketProtocol > property_protocol() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The sockets type to use for socket construction.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SocketType > property_type() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The sockets type to use for socket construction.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SocketType > property_type() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The I/O timeout for sockets, or 0 for none.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_timeout() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The I/O timeout for sockets, or 0 for none.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_timeout() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Enable proxy support.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_enable_proxy() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Enable proxy support.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_enable_proxy() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to create TLS connections.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_tls() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to create TLS connections.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_tls() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** TLS validation flags to use.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< TlsCertificateFlags > property_tls_validation_flags() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** TLS validation flags to use.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< TlsCertificateFlags > property_tls_validation_flags() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The proxy resolver to use.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<ProxyResolver> > property_proxy_resolver() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The proxy resolver to use.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ProxyResolver> > property_proxy_resolver() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


/**
   * @par Slot Prototype:
   * <tt>void on_my_%event(SocketClientEvent event, const Glib::RefPtr<SocketConnectable>& connectable, const Glib::RefPtr<IOStream>& connection)</tt>
   *
   * Emitted when @a client's activity on @a connectable changes state.
   * Among other things, this can be used to provide progress
   * information about a network connection in the UI. The meanings of
   * the different @a event values are as follows:
   * 
   * <dl>
   * <dt>SOCKET_CLIENT_RESOLVING:</dt>
   * <dd>
   *  @a client is about to look up @a connectable in DNS.
   *  @a connection will be <tt>0</tt>.
   * </dd>
   * <dt>SOCKET_CLIENT_RESOLVED:</dt>
   * <dd>
   *  @a client has successfully resolved @a connectable in DNS.
   *  @a connection will be <tt>0</tt>.
   * </dd>
   * <dt>SOCKET_CLIENT_CONNECTING:</dt>
   * <dd>
   *  @a client is about to make a connection to a remote host;
   * either a proxy server or the destination server itself.
   *  @a connection is the SocketConnection, which is not yet
   * connected.
   * </dd>
   * <dt>SOCKET_CLIENT_CONNECTED:</dt>
   * <dd>
   *  @a client has successfully connected to a remote host.
   *  @a connection is the connected SocketConnection.
   * </dd>
   * <dt>SOCKET_CLIENT_PROXY_NEGOTIATING:</dt>
   * <dd>
   *  @a client is about to negotiate with a proxy to get it to
   * connect to @a connectable. @a connection is the
   * SocketConnection to the proxy server.
   * </dd>
   * <dt>SOCKET_CLIENT_PROXY_NEGOTIATED:</dt>
   * <dd>
   *  @a client has negotiated a connection to @a connectable through
   * a proxy server. @a connection is the stream returned from
   * g_proxy_connect(), which may or may not be a
   * SocketConnection.
   * </dd>
   * <dt>SOCKET_CLIENT_TLS_HANDSHAKING:</dt>
   * <dd>
   *  @a client is about to begin a TLS handshake. @a connection is a
   * TlsClientConnection.
   * </dd>
   * <dt>SOCKET_CLIENT_TLS_HANDSHAKED:</dt>
   * <dd>
   *  @a client has successfully completed the TLS handshake.
   *  @a connection is a TlsClientConnection.
   * </dd>
   * <dt>SOCKET_CLIENT_COMPLETE:</dt>
   * <dd>
   *  @a client has either successfully connected to @a connectable
   * (in which case @a connection is the SocketConnection that
   * it will be returning to the caller) or has failed (in which
   * case @a connection is <tt>0</tt> and the client is about to return
   * an error).
   * </dd>
   * </dl>
   * 
   * Each event except SOCKET_CLIENT_COMPLETE may be emitted
   * multiple times (or not at all) for a given connectable (in
   * particular, if @a client ends up attempting to connect to more than
   * one address). However, if @a client emits the SocketClient::signal_event()
   * signal at all for a given connectable, that it will always emit
   * it with SOCKET_CLIENT_COMPLETE when it is done.
   * 
   * Note that there may be additional SocketClientEvent values in
   * the future; unrecognized @a event values should be ignored.
   * 
   * @newin{2,32}
   * @param event The event that is occurring.
   * @param connectable The SocketConnectable that @a event is occurring on.
   * @param connection The current representation of the connection.
   */

  Glib::SignalProxy3< void,SocketClientEvent,const Glib::RefPtr<SocketConnectable>&,const Glib::RefPtr<IOStream>& > signal_event();


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
   * @relates Gio::SocketClient
   */
  Glib::RefPtr<Gio::SocketClient> wrap(GSocketClient* object, bool take_copy = false);
}


#endif /* _GIOMM_SOCKETCLIENT_H */

