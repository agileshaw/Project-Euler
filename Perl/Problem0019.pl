# Problem0019 - Counting Sundays
#
# https: // github.com/agileshaw/Project-Euler

use strict;
use warnings;

my $count = 0;
my $weekday = 0;
sub totalDays;

for my $year (1900..2000) {
    for my $month (1..12) {
        for my $day (1..totalDays($month, $year)+1) {
            $weekday = ($weekday + 1) % 7;
            if (($weekday == 0) && ($day == 1) && ($year != 1900)) {
                $count++;
            }
        }
    }
}

print "The total number of Sundays is: $count\n";

sub totalDays
{
    my ($month, $year) = @_;
    my $num = 31;

    if ($month == 2) {
        if (($year % 400 == 0 )|| (($year % 4 == 0) && ($year % 100 != 0))) {
            $num = 29;
        } else {
            $num = 28;
        }
    } elsif (($month == 4) && ($month == 6) && ($month == 9) && ($month == 11)) {
        $num = 30
    } 

    return $num
}