# [Codecov](https://codecov.io) C/C++ Example

## Guide
### Travis Setup

Add to your `.travis.yml` file.
```yml
language: c
after_success:
  - bash <(curl -s https://codecov.io/bash)
```

### Produce Coverage Reports
C/C++ output `gcov` reports for all your files covered. To create these files all you need to do is to add the `-coverage` flag to `gcc` or `clang` when building.
```
clang -coverage -O0 hello.c -o hello
./hello
gcov hello.c
```

## Caveats
### Private Repo
Repository tokens are required for (a) all private repos, (b) public repos not using Travis-CI, CircleCI or AppVeyor. Find your repository token at Codecov and provide via appending `-t <your upload token>` to you where you upload reports.

## Links
- [Community Boards](https://community.codecov.io)
- [Support](https://codecov.io/support)
- [Documentation](https://docs.codecov.io)
