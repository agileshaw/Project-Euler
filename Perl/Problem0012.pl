# Problem0012 - Highly divisible triangular number
#
# https://github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $count = 0;
my $natural = 1;
my $result = 0;
sub numOfFactors;

while ($count < 500) {
    $result += $natural;
    $natural++;
    $count = numOfFactors($result);
}

print "The highly divisible triangular number is: $result\n";

sub numOfFactors
{
    my $num = shift;
    my $root = int(sqrt($num));
    my $count = 0;

    for my $i (1..$root) {
        if ($num % $i == 0) {
            $count += 2;
        }
    }

    if ($root * $root == $num) {
        $count--;
    }

    return $count;
}