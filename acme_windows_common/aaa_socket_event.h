#pragma once

#if 0

/// This class represents happenings for socket communication.
class CLASS_DECL_ACME socket_event :
   public happening
{
public:

	/// internal member which is true when a socket is ready to read
	bool m_bRead;
	bool m_bActive;

	/// internal member holding the socket handle
	unsigned int m_iSocket;

	/// internal member which is true if this happening is used by a thread
	/// which waits for socket connections
	bool m_bUsedBySocketWaiterThread;

	///  \brief		constructor with passed socket handle and read state
	///  \lparam		socket socket handle (default: -1)
	///  \lparam		read true if socket should be ready to read (default: true)
	socket_event(::matter * pobject, unsigned int socket = -1, bool read = true);

	///  \brief		destructor
	virtual ~socket_event();

	///  \brief		conversion operator for read state as boolean
	virtual operator bool ();
	void	set_active(bool active = true);


	///  \brief		socket handle setter
	///  \lparam		socket socket handle
	void SetSocketHandle(unsigned int socket);
	//void SetSocketHandle(const SocketBase& socket) { socket_ = socket.get_handle_(); }   // MBO: alternative solution
	//void ChangeSocketHandle(SOCKET socket);


	void init_wait();
	void exit_wait();
	void SetUsedBySocketWaiterThread();
};


#endif
