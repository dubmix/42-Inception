#!/bin/sh

service mariadb start

if [ -d "/var/lib/mysql/$MYSQL_DATABASE" ]; then
	echo "Database already exists"
else
	echo "DB_NAME: $DB_NAME"
	mysql -uroot -e "CREATE DATABASE IF NOT EXISTS $DB_NAME;"
	mysql -uroot -e "CREATE USER IF NOT EXISTS '$DB_USER'@'%' IDENTIFIED BY '$DB_PASSWORD';"
	mysql -uroot -e "GRANT ALL PRIVILEGES ON $DB_NAME.* TO '$DB_USER'@'%';"
	mysql -uroot -e "FLUSH PRIVILEGES;"
fi

service mariadb stop

exec "$@"
