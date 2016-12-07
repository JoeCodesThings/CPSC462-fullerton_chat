#include <mysql.h>
#include <stdio.h>
#include <stdlib.h>

class Server
{
public:
	struct connection_details
	{
		char *server;
		char *user;
		char *password;
		unsigned int database;
	};
	Server(char *server_, char *user_, char *password_, unsigned int database_);
	~Server();
	MYSQL* connect(struct connection_details mysql_details);
	MYSQL_RES* do_query(MYSQL *connection, char *sql_query);
	void clear_query(MYSQL_RES * res);
	void close(MYSQL* connection);

private:
	connection_details myDetails;
};

Server::Server(char *server_, char *user_, char *password_, unsigned int database_)
{
	myDetails.server = server_;
	myDetails.user = user_;
	myDetails.password = password_;
	myDetails.database = database_;
}


Server::~Server()
{
}

MYSQL* Server::connect(struct connection_details mysql_details)
{
	// first of all create a mysql instance and initialize the variables within
	MYSQL *connection = mysql_init(NULL);

	// connect to the database with the details attached.
	if (!mysql_real_connect(connection, mysql_details.server, mysql_details.user, mysql_details.password, mysql_details.database, 0, NULL)) {
		printf("Conection error : %s\n", mysql_error(connection));
		exit(1);
	}
	return connection;
}

MYSQL_RES* Server::do_query(MYSQL *connection, char *sql_query)
{
	// send the query to the database
	if (mysql_query(connection, sql_query))
	{
		printf("MySQL query error : %s\n", mysql_error(connection));
		exit(1);
	}

	return mysql_use_result(connection);
}

void Server::clear_query(MYSQL_RES * res)
{
	mysql_free_result(res);
}

void Server::close(MYSQL* connection)
{
	mysql_close(connection);
}
