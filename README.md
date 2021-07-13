# [Codecov](https://codecov.io) C/C++ Example
[![FOSSA Status](https://app.fossa.com/api/projects/git%2Bgithub.com%2Fcodecov%2Fexample-c.svg?type=shield)](https://app.fossa.com/projects/git%2Bgithub.com%2Fcodecov%2Fexample-c?ref=badge_shield)


## Guide
### GitHub Actions Setup

Add to your workflow.
```yml
- name: Upload reports to Codecov
  run: |
    curl -Os https://uploader.codecov.io/latest/linux/codecov
    chmod +x codecov
    ./codecov -t ${CODECOV_TOKEN}
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


## License
[![FOSSA Status](https://app.fossa.com/api/projects/git%2Bgithub.com%2Fcodecov%2Fexample-c.svg?type=large)](https://app.fossa.com/projects/git%2Bgithub.com%2Fcodecov%2Fexample-c?ref=badge_large)
