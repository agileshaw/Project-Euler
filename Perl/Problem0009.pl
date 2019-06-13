# Problem0009 - Special Pythagorean triplet
#
# https://github.com/agileshaw/Project-Euler

use strict;
use warnings;

sub product;

my $result = product();
print "The product of the special pythagorean triplet is: $result\n";

sub product 
{
    for my $i (0..1000) {
        for my $j (($i+1)..1000) {
            for my $k (($j+1)..1000) {
                if (($i*$i + $j*$j == $k*$k) && ($i + $j + $k == 1000)) {
                    return ($i*$j*$k);
                }
            }
        }
    }  
}
