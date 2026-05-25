# Day 21 - String Parsing Drills

## Quiz Me
- What does `.find()` return?
- What are the two arguments `.substr()` takes? What does each one mean?
- How do you extract the middle piece of `"alex:55:toronto"`?
- What function converts a string to an integer?
- If the colon is at position 4, where does the value start?

## Key Concepts Answers
- `.find()` returns the index (position) of the character you're looking for inside the string. `"jonah:87".find(':')` returns 5.
- `.substr(start, length)`. start is where you begin cutting. length is how many characters you take. not where you stop, how many you take. that distinction matters.
- find the first colon, find the second colon starting from `fColon + 1`. extract the middle with `substr(fColon + 1, sColon - fColon - 1)`. the length is just the gap between the two colons.
- `std::stoi()`. pass it the string, get back an int.
- position 5. always `colonPos + 1` to skip past the colon itself.

## My Understanding
three drills today. single colon string, extract name and value. same thing with a year. then two colons, extract three pieces. the jump from one colon to two colons was where it got hard.

the thing that unlocked it was drawing the string out with a number under every character and counting the characters I wanted. then the math wrote itself. `substr` takes a start and a length, not a start and an end. once that clicked the rest followed.

## Mistakes I Fixed
- passed the second colon position as the length argument to substr. length and position are different things. length is how many characters, position is where something sits in the string.
- forgot `colon + 1` skips the colon itself. starting at `colon` includes the colon in the output.

## Key Insight
draw the string. number every character. count what you want. then figure out the math from the picture. start and length both come naturally from counting. don't try to derive the formula in your head, derive it from the visual.

## My Takeaway
`.find()` gives you a position. `.substr()` takes a start and a length. `std::stoi()` converts the result to an int. those three methods together can chop any `key:value` string. tomorrow maps, then combine all three and the scores.txt spec is done.

## Summary
three string parsing drills. single colon extraction, double colon extraction, middle piece math. chop the sentence pattern is in my hands. file I/O warm up was clean too.