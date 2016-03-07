Feature: line-count
  Scenario: an empty file
    Given a file named "file.txt" with:
    """
    """
    Given I run `line-count file.txt` interactively
    Then the output should contain exactly "0"
    Then the exit status should be 0

  Scenario: a file with 2 lines
    Given a file named "file.txt" with:
    """
    one
    two
    """
    Given I run `line-count file.txt` interactively
    Then the output should contain exactly "2"
    Then the exit status should be 0

  Scenario: no file at all
    Given I run `line-count` interactively
    Then the output should contain exactly "error no file provided"
    Then the exit status should be 1
