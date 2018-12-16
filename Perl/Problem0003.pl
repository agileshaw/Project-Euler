# Problem0003 - Largest prime factor
# 
# https://github.com/agileshaw/Project-Euler

my $num = 600851475143;
my $factor;
my $i;
my $flag = 0;

while ($flag == 0)
{
    $i = 2;
    while ($num % $i != 0 && $i < $num)
    {
        $i++;
    }    
    if ($num % $i == 0)
    {
        $num /= $i;
        $factor = $i;
    } else
    {
        $flag = 1;
    }    
}
print "The largest factor is: $factor\n"