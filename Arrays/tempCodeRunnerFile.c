
int main () {
  // 75 Search an Element in 2-D array
  int arr[] = {{1,2},{4,5}};

  int ele;
  printf("Enter the element you want to search: ");
  scanf("%d",&ele);

  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      if(ele == arr[i][j]) {
        printf("Element found in %d row %d column",i, j);
      }
      else{
        printf("Element not found");
      }
    }
  }

  return 0;
}