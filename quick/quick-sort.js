const sort = (arr) => {
  if (arr.length === 0) return [];
  const [curr, ...rest] = arr;
  const left = rest.filter(item => item <= curr);
  const right = rest.filter(item => item > curr);
  return sort(left)
    .concat([curr])
    .concat(sort(right));
};
