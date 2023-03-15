# Controlling-ABB-4600

#CV9 - Simulovanie laserového skenera a skenovanie objektu vsimulátore Gazebo

BLOK 2 zadanie 2 - 25 bodov
Cieľom zadania je riadiť robotický manipulátor ABB IRB4600 pomocou Moveit balíčka cez
C++ API takým spôsobom aby oskenoval zvolený objekt v simulovanom prostredí. Na
skenovanie bude použitý simulovaný laserový skener, ktorého jednotlivé skeny bude
potrebné spojiť do jedného mračna bodov. Najdôležitejšie je porozumieť problematike.
Zadanie vypracujte rozšírením zdrojových kódov z cvičenia 7 nasledovnými úpravami a
rozšíreniami:\
	1. Pridanie laserového skenera\
	2. Vytváranie mračna bodov\
	3. Vytvorenie gazebo sveta\
	4. Spúšťanie gazebo sveta\
	5. Zvýšenie frekvencie TF\
	6. Návrh skenovacej trajektórie\
	7. Nadradený balíček\
	
Podrobné špecifikovanie jednotlivých bodov zadania:\
	1. Upravte gazebo simuláciu tak, aby robot obsahoval simuláciu laserového skenera a
	publikoval skeny na topic. Laserový skener nech smeruje kolmo z príruby koncového
	efektora.
	
	2. Vytvorte nový ROS balíček, ktorý bude odoberať laserové skeny z topicu a bude ich
	spájať do mračna bodov vyjadreného v spoločnom súradnicovom systéme base_link.
			a. Vytvorte nový node
			b. Vytvorte novú triedu, ktorá bude obsahovať inicializátor a callback.
			c. Publikujte finálne mračno bodov na topic a zobrazte ho v Rviz.
	3. Vytvorte nový gazebo svet, kde vložíte objekt, ktorý bude skenovaný (napr.
	mars_rover)
	
	4. Upravte pôvodný launch súbor ktorý spúšťa gazebo aby spúšťal svet s roverom.
	(pridať načítanie parametra do launch)
	
	5. Upravte joint_state_publisher a robot_state_publisher tak aby TF bolo publikované s
	čo najväčšou možnou frekvenciou (aspoň 100hz).
	
	6. Navrhnite trajektórie do balíčka z minulého cvičenia tak, aby rameno oskenovalo
	časti objektu v dosahu.
			a. Pridajte zobrazenie Kolízneho objektu do Rviz v mieste skenovaného objektu
			b. Navrhnite trajektóriu a waypoints pre lineárny pohyb tak aby bola oskenovaná
			celá dostupná časť objektu.
			c. Upravte rýchlosť pohybu robota tak, aby skenovaná plocha bola rovnomerne
			pokrytá bodmi.
			
	7. Vytvorte nový balíček, ktorý bude nadradený všetkým ostatným.
			a. Bude mať dependencies na ostatné balíčky
			b. Bude obsahovať launch file, ktorý spustí ostatné potrebné komponenty