[6] (∗2) What happens when you read and write beyond the bounds of an array. Do a few experiments involving a global array of ints , a local array of ints, an array of ints allocated by new,
and a member array of ints. Try reading and writing just beyond the end and far beyond the
end. Try the same for just before and far before the beginning. See what happens for different optimizer levels. Then try hard never to do out-of-range access by mistake.
