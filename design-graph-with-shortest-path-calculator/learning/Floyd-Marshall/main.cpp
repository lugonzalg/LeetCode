#include<vector>
#include<iostream>
#include<chrono>
#include<memory>
#include<climits>
#include<cstring>

using namespace std;

int main() {
	std::vector<std::vector<int>> edges = {
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10},
		{1, 2, 3},
		{2, 3, 5},
		{3, 4, 2},
		{4, 1, 1},
		{1, 3, 10}
    };

	size_t n = edges.size();

	auto start_time = std::chrono::high_resolution_clock::now();
	auto matrix = make_unique<unique_ptr<int[]>[]>(n);
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; i++)
			matrix[i][j] = INT_MAX;
		matrix[i][i] = 0;
	}


	auto end_time = std::chrono::high_resolution_clock::now();
	cout << "elapsed time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() << endl;

	start_time = std::chrono::high_resolution_clock::now();

	matrix = new int*[n];
	for (size_t i = 0; i < n; i++) {
		matrix[i] = new int[n];
		memset(matrix[i], UINT8_MAX, n);
		matrix[i][i] = 0;
	}

	end_time = std::chrono::high_resolution_clock::now();
	cout << "elapsed time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() << endl;

	start_time = std::chrono::high_resolution_clock::now();
	vector<vector<int>> vv(n, vector<int>(n, INT_MAX));
	//for (auto node: edges)
	//	vv[node[0]][node[1]] = node[2];

	end_time = std::chrono::high_resolution_clock::now();
	cout << "elapsed time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() << endl;

	start_time = std::chrono::high_resolution_clock::now();
	vector<vector<int>> v2(n);
	for (size_t i = 0; i < n; i++) {
		vector<int>	v(n);
		v2[i] = v;
		for (size_t j = 0; j < n; j++)
			v2[i][j] = !!(j - i) * INT_MAX;
	}
	end_time = std::chrono::high_resolution_clock::now();
	cout << "elapsed time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() << endl;

	start_time = std::chrono::high_resolution_clock::now();
	vector<vector<int>> v3(n);
	for (size_t i = 0; i < n; i++) {
		vector<int>	v(n);
		v3[i] = v;
		for (size_t j = 0; j < n; j++) {
			v3[i][j] = INT_MAX;
		v3[i][i] = 0;
		}
	}

	end_time = std::chrono::high_resolution_clock::now();
	cout << "elapsed time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() << endl;
	return 0;
}
