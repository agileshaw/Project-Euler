# Problem0014 - Longest Collatz sequence
#
# https://github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $result;
my $count;
my $max = 0;
sub collatz;

for my $i (2..1000000) {
    $count = collatz($i);
    if ($count > $max) {
        $max = $count;
        $result = $i;
    }
}

print "The number which generates the longest collatz sequence is: $result\n";

sub collatz
{
    my $num = shift;
    my $tmp = $num;
    my $count = 0;

    while ($tmp != 1) {
        if ($tmp % 2 == 0) {
            $tmp /= 2;
        } else {
            $tmp = 3 * $tmp + 1;
        }
        $count++;
    }

    return $count;
}