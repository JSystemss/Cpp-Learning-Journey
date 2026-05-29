# Day 22 - Map Drills

## Quiz Me
- How do you declare a map with string keys and int values?
- How do you add an entry to a map?
- How do you check if a key exists in a map?
- What does `scores.end()` mean?
- What is `.first` and `.second` on a map entry?
- Why is the key const in `std::pair<const std::string, int>`?
- What is the bouncer logic and when do you use it?

## Key Concepts Answers
- `std::map<std::string, int> scores;` — type is the map with key and value types inside the angle brackets, scores is just the name you give it.
- `scores["alice"] = 90;` — same as any variable assignment, just indexed by a string key instead of a number.
- `if (scores.find(name) != scores.end())` — find returns where it found the key or the end of the map if it didnt find it. not equal to end means it found it.
- `scores.end()` means the end of the map, nothing there. if find returns end it means the key doesnt exist.
- `.first` is the key, `.second` is the value. every entry in a map is a pair glued together.
- the key is const because changing a key would break the maps internal ordering. you can change values but never keys.
- bouncer logic is check if the key exists first. if it doesnt, add it. if it does, only update if the new value is higher. used whenever you want to keep the best score per name.

## My Understanding
three drills today. first one was declaring a map, inserting three entries manually, and printing everything with a range based for loop. second drill was looking up a specific key and printing it if it exists or printing not found if it doesnt. third drill was the bouncer logic — process four incoming pairs and only keep the highest score per name.

the bouncer logic took the longest. the confusion was thinking I needed to print each entry separately. the loop handles that automatically. also made the mistake of putting quotes around the variable name in find which made it search for the literal word name instead of the variable value.

the loop `for (auto& entry : scores)` goes through every pair in the map. auto lets the compiler figure out the type. the & means dont copy it. entry is just a name I gave each pair as the loop moves through. entry.first is the key, entry.second is the value.

## Mistakes I Fixed
- wrote `scores.find("name")` with quotes instead of `scores.find(name)` without. that searches for the literal string name not the variable.
- wrote `scores[name] == newScore` with double equals inside the bouncer update. == is comparison not assignment. fixed to single =.
- tried to print each entry separately with a single cout instead of using the loop.

## Key Insight
the map loop handles any size map automatically. you dont need to know the keys in advance. that is the whole point. write the loop once and it works whether the map has 3 entries or 3000.

## My Takeaway
map is a container indexed by a key you choose instead of a position. once you know declare it, insert into it, check if a key exists, and loop through it you can build almost anything with it. the bouncer logic is the piece that was missing from the scores.txt spec. tomorrow I combine file IO, string parsing, and map with bouncer logic and that spec is done.

## Summary
three map drills. insert and print, lookup with exists check, bouncer logic to keep highest score. all three patterns working. tomorrow is scores.txt cold and if it lands clean smart pointers begin.