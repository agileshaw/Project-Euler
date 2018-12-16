# Problem0002 - Even Fibonacci numbers
#
# https://github.com/agileshaw/Project-Euler

#usr/bin/env perl
use strict;

my $sum = 0;
my $tmp1 = 0;
my $tmp2 = 1;
my $fib = $tmp1 + $tmp2;
my $limit = 4000000;
my $total;

while ($fib < $limit) {
    if ($fib % 2 == 0) {
        $total += $fib;
    }
    $tmp1 = $tmp2;
    $tmp2 = $fib;
    $fib = $tmp1 + $tmp2;
}

print "The sum is: $total\n"
