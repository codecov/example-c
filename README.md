# [Codecov][1] C/C++ Example

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
### Private Repos
Add to your `.travis.yml` file.
```yml
after_success:
  - bash <(curl -s https://codecov.io/bash) -t uuid-repo-token
```
## Support

### Contact
- Intercom (in-app messanger)
- Email: support@codecov.io
- Slack: slack.codecov.io
- [gh/codecov/support](https://github.com/codecov/support)

1. More documentation at https://docs.codecov.io
2. Configure codecov through the `codecov.yml`  https://docs.codecov.io/docs/codecov-yaml



[1]: https://codecov.io/
[2]: https://github.com/codecov/example-php/blob/master/.travis.yml#L15
[3]: https://github.com/codecov/example-php/blob/master/.travis.yml#L18
[4]: https://github.com/codecov/codecov-python
