const sort = (arr) => {
  const l = arr.length;
  for (let i = 0; i < l; i++) {
    for (let j = i + 1; j <= l; j++) {
      if (arr[i] > arr[j]) {
        const t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
      }
    }
  }

  return arr;
};
