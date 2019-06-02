# Problem0015 - Lattice paths
# 
# https://github.com/agileshaw/Project-Euler

my @grid;
my $size = 20;

foreach my $i (0..$size) {
	foreach my $j (0..$size) {
		$grid[$i][$j] = 0;
	}
}

foreach my $i (0..$size-1) {
	$grid[$i][$size] = 1;
	$grid[$size][$i] = 1;
}

for (my $i = $size-1; $i >= 0; $i--) {
	for (my $j = $size-1; $j >= 0; $j--) {
		$grid[$i][$j] = $grid[$i+1][$j] + $grid[$i][$j+1]
	}
}

print "The number of lattice paths is: $grid[0][0]\n";