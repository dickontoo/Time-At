package Time::At;

use 5.024001;
use strict;
use warnings;
use Carp;

require Exporter;
use AutoLoader;

our @ISA = qw(Exporter);

# Items to export into callers namespace by default. Note: do not export
# names by default without a very good reason. Use EXPORT_OK instead.
# Do not simply export all your public functions/methods/constants.

# This allows declaration	use Time::At ':all';
# If you do not need this, moving things directly into @EXPORT or @EXPORT_OK
# will save memory.
our %EXPORT_TAGS = ( 'all' => [ qw(
	
) ] );

our @EXPORT_OK = ( @{ $EXPORT_TAGS{'all'} } , 'parsetime');

our @EXPORT = qw(
	
);

our $VERSION = '0.01';

sub AUTOLOAD {
    # This AUTOLOAD is used to 'autoload' constants from the constant()
    # XS function.

    my $constname;
    our $AUTOLOAD;
    ($constname = $AUTOLOAD) =~ s/.*:://;
    croak "&Time::At::constant not defined" if $constname eq 'constant';
    my ($error, $val) = constant($constname);
    if ($error) { croak $error; }
    {
	no strict 'refs';
	# Fixed between 5.005_53 and 5.005_61
#XXX	if ($] >= 5.00561) {
#XXX	    *$AUTOLOAD = sub () { $val };
#XXX	}
#XXX	else {
	    *$AUTOLOAD = sub { $val };
#XXX	}
    }
    goto &$AUTOLOAD;
}

require XSLoader;
XSLoader::load('Time::At', $VERSION);

# Preloaded methods go here.
sub parsetime
{
	my ($now, @strings) = @_;
	my $ptrs = pack 'P' x @strings, @strings;
	$ptrs .= pack 'LL', 0, 0;
	$now = time if ($now eq 'now');
	return _parsetime($now, $#strings, $ptrs);
}

# Autoload methods go after =cut, and are processed by the autosplit program.

1;
__END__
# Below is stub documentation for your module. You'd better edit it!

=head1 NAME

Time::At - Perl extension for parsing C<at(1)>-style timespecs.

=head1 SYNOPSIS

  use Time::At;
  my $weekendstart = Time::At::parsetime(time, 'teatime friday');

=head1 DESCRIPTION

Parses timespecs in the same manner as C<at(1)> does.  See its manpage for
details.

All I've done is write a trivial XS wrapper around the lex / yacc output of
Debian's C<at(1)> version 3.1.20 source.  The very nice hack in the Perl
C<parsetime()> function was courtesy of 'tye' at
L<http://www.perlmonks.org/?node_id=681230>.  The rationale for this module
is that I want to be able to tell my house that I'm going away for the
weekend and will be back on Monday morning at 0900, without all the tedious
effort involved in parsing a string like that.

Is it thread safe?  Who knows.  If you're worried, lock it.

parsetime takes two parameters: a base time (which may be 'now'), and a
timespec string.  It returns a time_t suitable for passing to C<localtime()>
et al.

=head2 EXPORT

None by default.

=head1 SEE ALSO

at(1)

=head1 AUTHOR

Dickon Hood, E<lt>dickon@fluff.orgE<gt>

=head1 COPYRIGHT AND LICENSE

Copyright (C) 2016 by Dickon Hood

This library is free software; you can redistribute it and/or modify
it under the GPLv2 or later.


=cut

