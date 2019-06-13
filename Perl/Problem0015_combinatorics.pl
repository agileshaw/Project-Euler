# Problem0015 - Lattice paths
# 
# https://github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $size = 20;
my $result = 1;

foreach my $i (1..20) {
	$result *= 2*$size + 1 - $i;
	$result /= $i;
}

print "The number of lattice paths is: $result\n";