package Time::At;

require Exporter;
require DynaLoader;

@ISA = qw/Exporter DynaLoader/;
@EXPROT = qw/parsetime/;

bootstrap Time::At;
1;
