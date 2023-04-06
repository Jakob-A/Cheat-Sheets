
There are different kinds in python of how code should be documented. In this document I show some examples, all copied from [Real Python: Documenting Python Code](https://realpython.com/documenting-python-code/#docstring-formats) 

## [Epytext](http://epydoc.sourceforge.net/epytext.html) Example

```Python
"""Gets and prints the spreadsheet's header columns

@type file_loc: str
@param file_loc: The file location of the spreadsheet
@type print_cols: bool
@param print_cols: A flag used to print the columns to the console
    (default is False)
@rtype: list
@returns: a list of strings representing the header columns
"""
```

## [NumPy/SciPy Docstring](https://numpydoc.readthedocs.io/en/latest/format.html) Example

```Python
"""Gets and prints the spreadsheet's header columns

Parameters
----------
file_loc : str
    The file location of the spreadsheet
print_cols : bool, optional
    A flag used to print the columns to the console (default is False)

Returns
-------
list
    a list of strings representing the header columns
"""
```

## [reStructuredText](http://docutils.sourceforge.net/rst.html) Example

```Python
"""Gets and prints the spreadsheet's header columns

:param file_loc: The file location of the spreadsheet
:type file_loc: str
:param print_cols: A flag used to print the columns to the console
    (default is False)
:type print_cols: bool
:returns: a list of strings representing the header columns
:rtype: list
"""
```

## [Google Docstring](https://github.com/google/styleguide/blob/gh-pages/pyguide.md#38-comments-and-docstrings) Example

```Python
"""Gets and prints the spreadsheet's header columns

Args:
    file_loc (str): The file location of the spreadsheet
    print_cols (bool): A flag used to print the columns to the console
        (default is False)

Returns:
    list: a list of strings representing the header columns
"""
```