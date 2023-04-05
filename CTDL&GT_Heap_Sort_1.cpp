void heap(int a[],int n,int i){
  int lar = i;
  int lef = 2 * i + 1;
  int rig = 2 * i + 2;
  if(lef < n && a[lef] > a[lar])
    lar = lef;
  if(rig < n && a[rig] > a[lar])
    lar = rig;
  if(lar != i){
  swap(a[i],a[lar]);
    heap(a,n,lar);
  }
