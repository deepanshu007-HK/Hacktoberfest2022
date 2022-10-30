void updateValueUtil(int tree[], int ss, int se, int i, 
                     int diff, int si)
{
    
    if (i < ss || i > se)
        return;
   
   
    st[si] = st[si] + diff;
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
