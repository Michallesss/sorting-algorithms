# sorting-algorithms

<ul>
  <li>Quick Sort</li>
  <li>Bubble Sort</li>
  <li>Merge Sort</li>
  <li>Selection Sort</li>
</ul>

## Quick Sort:
<b>Description:</b> Pick a random element as a pivot point and partition the list around this element. All numbers that are less than the pivot element go to the left of the pivot point and all numbers that are greater than the pivot element go to the right of the pivot point. Recursively repeat the partitioning of the list and its sub-lists until the list is sorted. For this program, the initial leftIndex == 0 and the initial rightIndex == len(lst)-1.<br>
<b>Time complexity:</b> <i>O(n log(n)) average and O(n²) worst. Memory: O(log(n)).</i>

## Bubble Sort:
<b>Description:</b> Start at the beginning of the list and swap the first two elements if the first is greater than the second. Then, go to the next pair, making continuous sweeps of the list and so on until the list is sorted.<br>
<b>Runtime:</b> <i>O(n²) average and worst case. Memory: O(1)</i>

## Merge Sort:
<b>Description:</b> Merge sort uses the divide and conquer method and is a recursive algorithm. Although it is more difficult to implement than other algorithms, it is very time efficient. It divides the list in half, sorts each of those halves, and then merges them back together. Each half has the same sorting algorithm applied to it. This splitting into halves continues until you are just merging two single element lists.<br>
<b>Runtime:</b> <i>O(n log(n)) average and worst case. Space complexity O(n).</i>

## Selection Sort:
<b>Description:</b> Find the smallest element using a linear scan and move it to the front (swapping it with the front element). Then, find the second smallest and move it tot he second position in the list, using once again a linear scan. Continue to do this until the list is sorted.<br>
<b>Runtime:</b> <i>O(n²) average and worst case, Memory: O(1)</i>

## Runtimes:
<img src="https://lankydanblog.files.wordpress.com/2017/04/bigo.png?w=616" alt="">

##

##### Resources from: https://ericgustin.medium.com/the-four-sorting-algorithms-you-need-to-know-9dd14f6ba13b
