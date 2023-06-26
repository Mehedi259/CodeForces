    for (int i = 0; i < n; i++)
    {
        if (b[i] > a[i])
        {
            mx = max(mx, b[i]);
            mx2 = max(mx2, a[i]);
        }
        else
        {
            mx = max(mx, a[i]);
            mx2 = max(mx2, b[i]);
        }
    }