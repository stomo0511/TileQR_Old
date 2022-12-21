#!/usr/bin/perl
open(FH,">> RL.dat");
foreach $mn ( 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000, 10500, 11000, 11500, 12000, 12500, 13000, 13500, 14000, 14500, 15000, 15500, 16000, 16500, 17000 ) {
 foreach $bs ( 50, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 ) {
    foreach $ib ( 10, 25, 50, 100, 200, 300 ) {
      if ($bs >= $ib) {
	  for ( $i=0; $i<5; $i++) {
	      $tx = `./RL $mn $mn $bs $ib`;
	      print FH $tx;
	  }
      }
    }
  }
}
close(FH);
