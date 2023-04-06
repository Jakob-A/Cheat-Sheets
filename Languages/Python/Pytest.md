
## hook functions
[Medium Article](https://paragkamble.medium.com/understanding-hooks-in-pytest-892e91edbdb7)

Functions that are registered by a pytest plugin get called at a specific point during the test execution.

> Note: Hook functions are not allowed to raise exceptions. Doing so will break the pytest run.

### Bootstrapping hooks
Hooks that are called at the beginning and end of the test run.

**Some available hooks:**
- `pytest_load_initial_conftest` : loads the initial conftest files that are used to configure the test run.
- `pytest_cmdline_parse`: allows plugins to modify commandline arguments
- 