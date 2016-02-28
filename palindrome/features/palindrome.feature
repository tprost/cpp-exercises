Feature: Palindrome CLI
  Scenario: A palindrome in standard input
    Given a file named "file.txt" with:
    """
    kayak
    """
    Given I run `palindrome < file.txt`
    Then the exit status should be 0

  Scenario: A word that isn't a palindrome in standard input
    Given a file named "file.txt" with:
    """
    dog
    """
    Given I run `palindrome < file.txt`
    Then the exit status should be 1
    
