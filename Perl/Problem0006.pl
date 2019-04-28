# Problem0006 - Sum square difference
# 
# https://github.com/agileshaw/Project-Euler

my $start = 1;
my $end = 100;
sub sumOfSquares;
sub squareOfSums;

my $sum = sumOfSquares($start, $end);
my $square = squareOfSums($start, $end);
my $difference = abs($square - $sum);

print "The difference is: $difference\n";

sub sumOfSquares
{
    my ($num1, $num2) = @_;
    my $sum = 0;

    for my $i ($num1..$num2) {
        $sum += $i * $i;
    }
    
    return $sum;
}

sub squareOfSums
{
    my ($num1, $num2) = @_;
    my $sum = 0;
    my $square;

    for my $i ($num1..$num2) {
        $sum += $i;
    }
    
    $square = $sum * $sum;

    return $square;
}