vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> rotatedArray(n);

    // Calculate the effective rotation index
    int rotationIndex = d % n;

    // Perform left rotation
    for (int i = 0; i < n; ++i) {
        int rotatedIndex = (i + rotationIndex) % n;
        rotatedArray[i] = arr[rotatedIndex];
    }

    return rotatedArray;
}
