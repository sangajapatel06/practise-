string encode(string src)
{
    //Your code here
    int i;
    for (i = 0; i < src.size(); i++)
    {
        int c = 1;
        while (i < src.size() - 1 && src[i] == src[i + 1])
        {
            c++;
            i++;
        }
        cout << src[i] << c;
    }
}