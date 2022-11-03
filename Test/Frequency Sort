typedef pair<int,int> pii;
vector<int> itemsSort(vector<int> items) {
    int n=items.size();
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    unordered_map<int,int> m;
    for(auto i:items){
        m[i]++;
    }
    for(auto p:m){
        pq.push({p.second,p.first});
    }
    vector<int>res;
    while(pq.size()>0){
        int val=pq.top().second,f=pq.top().first;
        for(int i=0;i<f;i++){
            res.push_back(val);
        }
        pq.pop();
    }
    return res;
}
