# Problem0004 - Largest palindrome product
# 
# https://github.com/agileshaw/Project-Euler

my $result = 0;
sub reverse;

foreach my $i (100..999) {
    foreach my $j($i..999){
        my $num = $i * $j;
        if ($num == reverse($num) && $result < $num) {
            $result = $num;
        }
    }
}

print "The largest palindrome product is: $result\n";

sub reverse
{
    my $num = shift;
    my $rev = 0;

    while ($num != 0) {
        $rev *= 10;
        $rev += $num % 10;
        $num /= 10;
    }

    return $rev;
}