# compat library

cinc = include_directories('include')
subdir('compat')

# dbcompat library

dbinc = include_directories('dbinclude')
subdir('dbcompat')

# standalone toplevel projects

subdir('awk')
subdir('ed')
subdir('grep')
subdir('m4')
subdir('patch')
subdir('sed')
subdir('sh')
subdir('tip')
subdir('which')

if not get_option('zlib').disabled() and zlib.found()
    subdir('gzip')
endif

if ncurses.found()
    subdir('nvi')
endif

# tool collections

subdir('bc')
subdir('coreutils')
subdir('diffutils')
subdir('findutils')
subdir('miscutils')
