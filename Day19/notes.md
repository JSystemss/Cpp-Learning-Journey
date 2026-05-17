# Day 19 - File I/O Drills

## Quiz Me
- Why do you use `while` instead of `do while` when reading a file with getline?
- What does `if (!file)` actually check?
- Why do you need `<string>` even if you already have `<iostream>`?
- What's wrong with using a full absolute path like `C:\\Users\\...` in a real project?

## Key Concepts Answers
- `while (std::getline(file, line))` reads first, then decides whether to enter the loop. `do while` runs the body first and then checks, which means you use `line` before it has anything in it. that gives you a blank print at the start and an off-by-one count.
- `if (!file)` checks if the stream is in a bad state. ifstream has a built in conversion to bool so you can just test the object directly.
- iostream gives you cin and cout but doesn't guarantee the full std::string definition. the moment you declare a std::string yourself you need <string>.
- absolute paths only work on your own machine. anyone who clones the repo cant run the code. use relative paths so the file just sits next to the exe.

## My Understanding
today I re tested file I/O from a blank screen and froze. I knew what the concepts were but I couldn't pull them out cold. so we restarted with micro drills. three small specs, each one its own rewrite from scratch. by drill 3 the pattern was in my hands.

the big lesson was the do while bug in drill 2. I wrote `do { print line } while (getline)` and it printed an empty line at the top and counted 4 instead of 3. walked through it step by step and saw that do while runs the body before the first read so line is still empty. switched to while and it worked.

## Mistakes I Fixed
- pointed ifstream at a folder instead of a file in drill 1. debugged it by reading the error message and adding the filename back.
- used do while for file reading in drill 2. fixed by switching to while so the read happens before the body.
- spelled "successfully" wrong twice. one c two c, two s, two l.

## Key Insight
when reading from a file, the loop condition has to be the read itself. `while (std::getline(file, line))`. always. if you use do while you will print or count something that isn't there.

## My Takeaway
saying "I know it" and writing it cold from a blank screen are two different skills. I had the first one, not the second. drills fix that. it felt slow today but I left with file reading actually locked in instead of fake locked in.

## Summary
three drills today. open a file and check it opened. read every line. count the lines. all written cold from scratch, no copying between drills. ready for ofstream and writing tomorrow.