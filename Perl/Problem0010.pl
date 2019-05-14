# Problem0010 - Summation of primes
#
# https://github.com/agileshaw/Project-Euler

my $num = 2;
my $sum = 0;
my $check;
sub checkPrime;

while ($num < 2000000) {
    $check = checkPrime($num);

    if ($check == 1) {
        $sum += $num;
        print "The sum of all the primes below two million is: $sum\n";
    }

    $num += 1;
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