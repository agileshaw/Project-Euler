# Problem0017 - Number letter counts
#
# https://github.com/agileshaw/Project-Euler

my $result = 0;
sub letterCount;

foreach my $i (1..1000) {
	$result += letterCount($i);
}

print "The number letter counts is: $result\n";

sub letterCount
{	
	my $num = shift;
	my @below_twenty = ("", "one", "two", "three", "four", "five", "six", "seven", "eight", 
						"nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", 
						"seventeen", "eighteen", "nineteen");
	my @below_hundred = ("", "", "twenty", "thrity", "forty", "fifty", "sixty", "seventy",
						"eighty", "ninety");
	my @more = ("hundred", "thousand", "and");
	my $count;

	if ($num < 20) {
		$count = length($below_twenty[$num]);
	} elsif ($num < 100) {
		$count = length($below_hundred[$num/10]) + letterCount($num%10);
	} elsif ($num < 1000) {
		$count = length($below_twenty[$num/100]) + length($more[0]) + letterCount($num%100);
		if ($num % 100 != 0) {
			$count += length($more[2]);
		}
	} elsif ($num == 1000) {
		$count = length($below_twenty[1]) + length($more[1]);
	}

	return $count;
}