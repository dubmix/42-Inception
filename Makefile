all:
	@if ! [ -d "/home/pdelanno/data" ]; then \
		mkdir /home/pdelanno/data; \
		mkdir /home/pdelanno/data/wordpress; \
		mkdir /home/pdelanno/data/mysql; \
		echo "Data volumes created"; \
	fi
	@docker-compose -f ./src/docker-compose.yml up -d

down:
	@docker-compose -f ./src/docker-compose.yml down

re:
	@docker-compose -f ./src/docker-compose.yml up -d

clean:
	@docker system prune -a -f

.PHONY: all re down clean
