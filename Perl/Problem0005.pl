# Problem0004 - Largest palindrome product
# 
# https://github.com/agileshaw/Project-Euler

my $result = 1;
sub gcd;
sub lcm;

foreach my $i (1..20) {
    $result = lcm($result, $i)
}

print "The smallest multiple is: $result\n";

sub gcd
{
    my ($num1, $num2) = @_;
    my $divisor = 1;
    my $k = 1;

    while ($k <= $num1 && $k <= $num2) {
        if ($num1 % $k == 0 && $num2 % $k == 0) {
            $divisor = $k;
        }
        $k += 1;
    }
    return $divisor;
}

sub lcm
{
    my ($num1, $num2) = @_;
    my $multiple;

    $multiple = ($num1 * $num2) / gcd($num1, $num2);

    return $multiple;
}