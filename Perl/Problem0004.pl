# Problem0004 - Largest palindrome product
# 
# https://github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $result = 0;

foreach my $i (100..999) {
    foreach my $j($i..999){
        my $num = $i * $j;
        if (($num == reverse($num)) && ($result < $num)) {
            $result = $num;
        }
    }
}

print "The largest palindrome product is: $result\n";
