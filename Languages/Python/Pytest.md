
## hook functions
[Medium Article](https://paragkamble.medium.com/understanding-hooks-in-pytest-892e91edbdb7)

Functions that are registered by a pytest plugin get called at a specific point during the test execution.

> Note: Hook functions are not allowed to raise exceptions. Doing so will break the pytest run.

### Bootstrapping hooks
Hooks that are called at the beginning and end of the test run.

**Some available hooks:**
- `pytest_load_initial_conftest` : loads the initial conftest files that are used to configure the test run.
- `pytest_cmdline_parse` : allows plugins to modify commandline arguments
- `pytest_cmdline_main` : allows to modify behavior of the pytest command line script


### Initialization Hooks
These hooks are run before the execution of the test cases, but after the bootstrapping hooks.

**Some available hooks:**
- `pytest_addoption` : allows to add additional command line options to the test runner
- `pytest_configure` : is called after the parsing of the command line options and allows to some setup before the test run
- `pytest_sessionstart` : is called when the test session in starting
- `pytest_sessionfinish` : is called after all test have been run and allows to perform teardown tasks

### Collection Hooks
Functions that are called during the process of discovering and collecting the test functions/modules.

**Some available hooks:**
- `pytest_collectstart` : this hook is called when the test collection process is starting -> allows to modify the configuration or perform setup tasks before the test's collection
- `pytest_collectreport` : Executed after the test collection and allows to access the results of the collection.
- `pytest_ignore_collect` : This function is called if a test is marked as ignored -> makes it possible to overwrite the ignore behavior
- `pytest_collect_file` : Called when a test file is collected - allows to modify the discovering behavior.

### Test running hooks
These hooks can be used to modify to perform actions before or after a test run.

**Some available hooks:**
- `pytest_runtest_setup`
- `pytest_runtest_call`
- `pytest_runtest_teardown`
- `pytest_runtest_logreport`

### Reporting Hooks
These hooks are called during the test execution and allow reporting of the test results.

**Some available hooks:**
- `pytest_report_header`
- `pytest_report_teststatus`
- `pytest_terminal_summary`
- `pytest_logreport`

### Debugging/Interaction Hooks
Debugging/Interaction hooks allow the interaction with the test process to debug issues.

**Some available hooks:**
- `pytest_exception_interact`
- `pytest_enter_pdb`
- `pytest_leave_pdb`
- `pytest_keyboard_interrupt`
- `pytest_internalerror`


## Parametrization
[Medium Article](https://medium.com/opsops/deepdive-into-pytest-parametrization-cb21665c05b9)

Parametrization is a process of running the same test multiple times, but with different values.
*Example:*
```Python
@pytest.mark.parametrize("number", [1, 2, 3, 0, 42])  
def test_foo(number):  
    assert number > 0
```

