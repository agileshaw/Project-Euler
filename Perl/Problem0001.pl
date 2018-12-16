# Problem0001 - Multiples of 3 and 5
# 
# https://github.com/agileshaw/Project-Euler

#usr/bin/env perl
use strict;

my $sum = 0;
my $i = 0;

for ($i; $i < 1000; $i++) {
    if ($i % 3 == 0 || $i % 5 == 0) {
        $sum += $i;
    }
}
print "The sum is: $sum\n";