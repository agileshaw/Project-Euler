# Problem0021 - Amicable numbers
#
# https: // github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $result = 0;
my $size = 10000;
my @array=(0) x $size;
sub divisorSum;

foreach my $i (2..$size-1) {
	$array[$i] = divisorSum($i);
}

foreach my $i (1..$size-1) {
	my $j = $array[$i];
	if (($j < $size) && ($array[$j] == $i) && ($i != $j)) {
		$result += $i;
	}
}

print "The sum of amicable numbers is: $result\n";

sub divisorSum
{
	my $num = shift;
	my $sum = 1;

	foreach my $i (2..int(sqrt($num+1))) {
		if ($num % $i == 0) {
			if ($num / $i == $i) {
				$sum += $i
			} else {
				$sum += ($i + $num/$i)
			}
		}
	}

	return $sum;
}