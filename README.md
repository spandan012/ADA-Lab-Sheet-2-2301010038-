# ADA-Lab-Sheet-2-2301010038-
# Sorting Algorithm Analysis

## Overview
This project implements three fundamental sorting algorithms:
- **Bubble Sort**
- **Selection Sort**
- **Insertion Sort**

Each algorithm sorts a given set of numbers in both ascending and descending order while tracking the **step count** (number of comparisons and swaps). The project also analyzes the efficiency of each algorithm by varying the input size and observing the best-case, worst-case, and average-case scenarios.

## Step Count Analysis
Step counts are measured for input sizes of **10, 20, 30, and 40** elements under three conditions:
1. **Best Case**: Already sorted input
2. **Worst Case**: Reverse sorted input
3. **Average Case**: Randomized input

The results are visualized through graphs showing step count vs. input size.

## Running the Code
### Prerequisites
- C++ Compiler (e.g., g++ for GCC)
- Python (for graph generation)
- Matplotlib library (install using `pip install matplotlib`)

### Compilation & Execution
1. Compile the C++ code:
   ```sh
   g++ sorting_analysis.cpp -o sorting
   ```
2. Run the program:
   ```sh
   ./sorting
   ```
3. (Optional) Run the Python script for graphs:
   ```sh
   python generate_graphs.py
   ```

## Graph
![Step Count Analysis](graphs/step_count_analysis.png)



## Expected Output
The sorting algorithms print the sorted arrays along with step counts for each scenario.

## Conclusion
This project helps in understanding the efficiency of different sorting algorithms and their behavior under various input conditions.

