# Problem0001 - Multiples of 3 and 5
# 
# https://github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $sum = 0;

foreach my $i (0..999) {
    if ($i % 3 == 0 || $i % 5 == 0) {
        $sum += $i;
    }
}

print "The sum is: $sum\n";