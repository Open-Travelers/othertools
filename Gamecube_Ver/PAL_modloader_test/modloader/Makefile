
all: ./injection/main.dol ./loader/loader.packet

./injection/main.dol:
	make -C ./injection/
./loader/loader.packet:
	make -C ./loader/

cleanup:
	make -C ./injection/ cleanup
	make -C ./loader/ cleanup
	
clean:
	make -C ./injection/ clean
	make -C ./loader/ clean

install: ./injection/main.dol ./loader/loader.packet
	cp ./injection/main.dol ../extract/sys/main.dol
	cp ./loader/loader.packet ../extract/files/load
	