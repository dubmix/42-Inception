FROM debian:latest

#latest!!

RUN apt-get update && apt-get install -y nodejs
RUN apt-get install -y npm
RUN npm install -g next
RUN yes | npx create-next-app myapp 

COPY periodic_table.html /myapp/public/

WORKDIR /myapp

EXPOSE 1313

#CMD ["bash"]
CMD ["npm", "run", "dev"]
