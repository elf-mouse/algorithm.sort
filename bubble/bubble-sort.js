const sort = (arr) => {
  const l = arr.length;
  for (let i = 0; i < l; i++) {
    for (let j = 0; j < l - i; j++) {
      if (arr[j] > arr[j + 1]) {
        const t = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = t;
      }
    }
  }

  return arr;
};
