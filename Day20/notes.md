# Day 20 - File I/O Writing + Copy Drills

## Quiz Me
- What does the `<<` operator actually do when used with a stream?
- Why use `"\n"` instead of `std::endl` by default?
- What does RAII mean and how did it show up in yesterdays code?
- In a file copy program, why do you need two separate `if (!file)` checks?
- Whats wrong with `for (int i = 0; i <= 10; i++)` if the spec says "write numbers 1 through 10"?

## Key Concepts Answers
- `<<` sends data into a stream. left to right. the arrow points the direction the data flows. cout, ofstream, any stream, same operator same direction.
- `std::endl` writes a newline and flushes the buffer. `"\n"` just writes a newline and lets the buffer flush on its own. flushing is a system call so its slower in tight loops. default to `"\n"`, use endl only when you need to force the output right now.
- RAII means an object cleans itself up when it goes out of scope. yesterday I had `file.close()` at the end and it wasnt needed because ifstreams destructor closes the file automatically. the object owns the resource and releases it when it dies.
- two checks because two different things can fail for two different reasons. input.txt could be missing, output.txt could fail to open because of permissions or disk full. you want the error message to tell you which one.
- that loop writes 0 through 10 which is 11 numbers, not 1 through 10. off by one. should be `i = 1; i <= 10`.

## My Understanding
today I drilled writing files and copying files. the warm up was reading a file which I had locked from yesterday. then drill 4 was writing numbers 1 to 10 to a file with ofstream. drill 5 was reading one file and writing the contents to another which is just both patterns at once.

the win was drill 5. when I got stuck I realized the body of the loop was literally just the drill 4 write pattern with a different variable. ifstream and ofstream are mirror images of each other so once I had both patterns separately the combo wasnt new code, just gluing them together.

also for the first time I felt like I was thinking in code instead of translating English into code. it happened during the warm up when I tried writing a manual `while (true)` version of the read loop. the manual version had bugs but the instinct to try it was the part that mattered.

## Mistakes I Fixed
- off by one in drill 4. wrote `i = 0; i <= 10` which gives 11 numbers. spec wanted 10. fixed to `i = 1; i <= 10`.
- doubled newline in drill 4 with `"\n" << std::endl`. fixed by picking one.
- forgot the console print in drill 4 the first time. spec said print "Done writing to out.txt" and I skipped it.
- in the manual read loop attempt I wrote `return false` in `int main()` and put it outside the if so the loop only ran once. should have been `break` inside an else.
- named the line variable `lines` plural when it only holds one line at a time. small thing but names matter.

## Key Insight
streams are streams. cout, ifstream, ofstream, all the same `<<` operator going the same direction. data flows into the stream. once you have that mental model, console output and file output and network output later all use the same pattern.

also off by one errors are not a "pay attention" problem. theyre the most common bug in all of programming. the fix is habit not focus. say your loop boundaries out loud, mentally run first and last iteration, check actual output against the spec not against what you expected.

## My Takeaway
two patterns locked today, write and copy. one mental model locked, streams. one habit started, default to `"\n"` not `std::endl`. tomorrow is string parsing drills which is the last block before I can rebuild yesterdays scores.txt program cold.

## Summary
three drills. warm up was a read I already had. drill 4 wrote numbers 1 to 10 to a file with ofstream and caught my own off by one after running it. drill 5 copied input.txt to output.txt by combining read and write in one program.