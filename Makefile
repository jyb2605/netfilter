all:
	gcc -o netfilter_test netfilter_test.c -lnetfilter_queue

clean:
	rm -rf netfilter_test
