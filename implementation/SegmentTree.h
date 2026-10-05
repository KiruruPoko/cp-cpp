struct SegmentTree {
	// typedef int T;
	static constexpr int unit = INT_MIN;
	int f(int a, int b) { return max(a, b); } // (any associative fn)
	vector<int> s; int n;
	SegmentTree(int n = 0, int def = unit) : s(2*n, def), n(n) {}
	void update(int pos, int val) {
		for (s[pos += n] = val; pos /= 2;)
			s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
	}
	int query(int b, int e) { // query [b, e)
		int ra = unit, rb = unit;
		for (b += n, e += n; b < e; b /= 2, e /= 2) {
			if (b % 2) ra = f(ra, s[b++]);
			if (e % 2) rb = f(s[--e], rb);
		}
		return f(ra, rb);
	}
};
/*
 * Description: Zero-indexed max-tree. Bounds are inclusive to the left and exclusive to the right.
 * Can be changed by modifying T, f and unit.
*/