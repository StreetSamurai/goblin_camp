[![Build Status](https://travis-ci.com/y2s82/goblin_camp.svg?branch=master)](https://travis-ci.com/y2s82/goblin_camp)
[![Build status](https://ci.appveyor.com/api/projects/status/75p0qey231mif0at?svg=true)](https://ci.appveyor.com/project/y2s82/goblin-camp)
<a href="https://scan.coverity.com/projects/y2s82-goblin_camp">
  <img alt="Coverity Scan Build Status"
       src="https://scan.coverity.com/projects/17220/badge.svg"/>
</a>
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/9ce43a8ad3284f28888078e434f50ba9)](https://www.codacy.com/app/y2s82/goblin_camp?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=y2s82/goblin_camp&amp;utm_campaign=Badge_Grade)

# Goblin Camp Stone Soup

A git-based fork of [Goblin Camp](https://bitbucket.org/genericcontainer/goblin-camp), a [Dwarf-Fortress](http://www.bay12games.com/dwarves/) clone.

This fork aims to investigate and identify possible performance bottleneck of the concept through exploring the Goblin Camp code.
One of the forseeable outcome is to introduce multithreading, but the project aims to explore other aspects of performance improvements as well.

# Projects
If you are interested in getting involved, we have several projects and bunch of issues in place.  Feel free to browse around and choose the one you feel at home, or make suggestions through issues and make a PR based on it.  Some of the projects are as follows:
## Boost-free goblins
This aims to minimize or eliminate Boost libraries from the repository and make the program rely more on STL.  You can find more information in [REMOVING_BOOST.md](REMOVING_BOOST.md) and in the project page.
## Documentation
This repository is folked from a mercurial-based repository.  As such, some of the documentation naming and styles are different.  Feel free to update the documentation to fit the git-style.
## Continuous Integratioin tools
Not all of our CI system are configured properly.  Feel free to contribute to configure them to build in different architectures and environments.
