# Number Guessing Game in C

A simple command-line game where the user tries to guess a randomly generated number between 1 and 100 within a limited number of attempts.

## Features

- Random number generation between 1–100
- User gets **5 attempts** to guess the number
- Feedback after each guess:
  - Too high or too low
  - Invalid input handling
- Congratulatory message on success
- Failure message if all attempts are used
- Clean and user-friendly console interface


## How It Works

- The program uses `rand()` seeded with the current time to generate a random number.
- The player has 5 valid chances to guess the number.
- If the guess is out of range (1–100), the program prompts again without using up a try.
- The game ends when the number is guessed or all tries are used.

### Prerequisites

- A C compiler (e.g., `gcc`)
