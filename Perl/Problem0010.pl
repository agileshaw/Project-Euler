# Problem0010 - Summation of primes
#
# https://github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $num;
my $sum = 0;
my $check;
sub checkPrime;

foreach $num (2..2000000) {
    $check = checkPrime($num);

    if ($check == 1) {
        $sum += $num;
    }
}

print "The sum of all the primes below two million is: $sum\n";

sub checkPrime
{
    my $num = shift;

    foreach my $i (2..int(sqrt($num))) {
        if ($num % $i == 0) {
            return 0;
        }
    }

    return 1;
}