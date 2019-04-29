# Problem0007 - 10001st prime
#
# https://github.com/agileshaw/Project-Euler

my $num = 2;
my $count = 0;
my $check;

while ($count < 10001) {
    $check = 1;
    foreach my $i (2..int(sqrt($num))) {
        if ($num % $i == 0) {
            $check = 0;
        }
    }
    if ($check == 1) {
        $count++;
    }
    if ($count == 10001) {
        print "The 10001st prime is: $num\n";
    }
    $num += 1;
}
    