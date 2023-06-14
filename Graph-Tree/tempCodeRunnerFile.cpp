bool cyclePath(int child,int par)
{
    visited[child]=true;
    path.push_back(child);
    for(auto x:graph[child])
    {
        if(!visited[x])
        {
            if(cyclePath(x,child))
                return true;
        }else if(par!=x)
        {
            path.push_back(x);
            return true;
        }
    }
    path.pop_back();
        return false;
}