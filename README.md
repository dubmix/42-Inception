# Inception

This project aimed to broaden our knowledge of system administration by using the Docker CLI and `docker-compose`. In order to do so, 
we need to virtualize several Docker images, creating them in our our pesonal VM. The mandatory services we had
to set up are **Wordpress**, **NGINX** with SSL, and **MariaDB**.
In the bonus part, I have also set up **Adminer**, **NextJS** and a **static website**.

Setting up the containers network...

![inception1]

All containers up and running...

![inception2]

Wordpress accessible through the web browser of your choice and ready to use!

![inception3]

## Usage

Warning: `Makefile` is configured for `Linux` use only.

> - Launch docker-compose with `make`. A `data` repository will be automatically created on your host to make the database persistent
> - Access Wordpress at `https://pdelannoy.42.fr`
> - Access Adminer at `https://pdelannoy.42.fr/adminer`
> - Access NextJS at `https://pdelannoy.42.fr/nextjs`
> - Access the website at `https://pdelannoy.42.fr/website`
> - To stop all containers, use `make down`
> - To remove all images, use `make clean`
