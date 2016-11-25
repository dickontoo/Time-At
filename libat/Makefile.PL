use ExtUtils::MakeMaker;

$Verbose = 1;
WriteMakefile(
	NAME => 'Time::At::libat',
	SKIP => [qw/all static static_lib dynamic dynamic_lib test/],
	DEFINE            => '-DNEED_YYWRAP -fPIC', # e.g., '-DHAVE_SOMETHING'
	clean => {'FILES' => 'libat$(LIB_EXT)'},
);

sub MY::top_targets {
	'
all :: static

pure_all :: static

static :: libat$(LIB_EXT)

libat$(LIB_EXT): $(O_FILES)
	$(AR) cr libat$(LIB_EXT) $(O_FILES)
	$(RANLIB) libat$(LIB_EXT)
';
}
