run:
	docker compose exec -it app bash -c "g++ /tmp/main.cc && ./a.out > /tmp/tmp/test1.ppm"
clean:
	rm ./tmp/*
