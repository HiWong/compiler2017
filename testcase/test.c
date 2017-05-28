int[] b;

void sort(int[] a,int l,int r)
{
	if(r-l==1) return;
	int m=(l+r)/2;
	sort(a,l,m);
	sort(a,m,r);
	int p=l;
	int q=m;

	int i=0;
	while(p<m && q<r)
		if(a[p]>a[q])
			b[i++]=a[q++];
		else
			b[i++]=a[p++];
	while(p<m) b[i++]=a[p++];
	while(q<r) b[i++]=a[q++];
	for(i=l;i<r;i++)
		a[i]=b[i-l];
	return;
}
int main()
{
	int n;
	int[] a;
	n=getInt();
	a=new int[n];
        b = new int[n];
	int i;
	for(i=0;i<n;i++)
		a[i]=n-i;
	sort(a,0,n);
	i=n/2;
	println(toString(a[i]-i));
	return 0;
}


/*!! metadata:
=== comment ===
mergesort-515030910633-xianzangyueyang.txt
naive mergesort
=== input ===
2000000
=== assert ===
output
=== timeout ===
4.0
=== output ===
1
=== phase ===
optim extended
=== is_public ===
True

!!*/

