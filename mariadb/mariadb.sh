#!/bin/sh

service mariadb start

exec "$@"
