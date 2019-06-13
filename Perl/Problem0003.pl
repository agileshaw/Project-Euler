# Problem0003 - Largest prime factor
# 
# https://github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $num = 600851475143;
my $factor;
my $flag = 0;

while ($flag == 0)
{
    my $i = 2;
    while ($num % $i != 0 && $i < $num) {
        $i++;
    }    
    if ($num % $i == 0) {
        $num /= $i;
        $factor = $i;
    } else {
        $flag = 1;
    }    
}

print "The largest factor is: $factor\n"