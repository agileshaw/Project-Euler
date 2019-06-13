# Problem0007 - 10001st prime
#
# https://github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $num = 1;
my $count = 0;
my $check;

while ($count < 10001) {
    $num += 1;
    $check = 1;

    for my $i (2..int(sqrt($num))) {
        if ($num % $i == 0) {
            $check = 0;
        }
    }
    
    if ($check == 1) {
        $count++;
    }
}

print "The 10001st prime is: $num\n";
