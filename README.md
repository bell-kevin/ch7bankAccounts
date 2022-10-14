# ch7bankAccounts

Create a project that uses a structure to describe accounts in a bank. Each account has an ID which is an integer, a type which is the string "Checking" or "Savings", and a balance which is a double. Write 3 functions. The first is "withdraw", which needs parameters for the amount to be withdrawn and the specific account, which needs to be passed by reference. Before subtracting the amount from the balance, verify that there is enough money in the account; if not, do not change the balance but print an error message. The second function is "deposit", which need the same parameters for the amount to be deposited and the specific account, which needs to be passed by reference. The third function is "display", which is void and prints out information about the account. 

The main function will create 2 accounts using initialization list, one a checking account and one savings account. For each one, ask how much the user wants to withdraw and deposit, and display the account after each transaction.

Example of the program running:

![Ch 7 Bank Account running](https://github.com/bell-kevin/ch7bankAccounts/blob/main/Screenshot%20from%202022-10-13%2021-30-46.png)

Example of the program with errors in withdrawal amounts:

![Ch 7 Bank Acct with errors](https://github.com/bell-kevin/ch7bankAccounts/blob/main/Screenshot%20from%202022-10-13%2021-32-06.png)

Run the project twice, once with valid input and once with invalid input for withdrawals, and take screenshots, as shown here.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
