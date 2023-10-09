FROM debian:bullseye

RUN apt-get update && apt-get -y install \
	php \
	php-cgi \
	php-mysql \
	php-fpm \
	php-pdo \
	php-gd php-cli \
	php-mbstring \
	redis \
	php-redis \
	&& rm -rf /var/lib/apt/lists/*

EXPOSE 9000

COPY www.conf /

CMD ["bash"]
