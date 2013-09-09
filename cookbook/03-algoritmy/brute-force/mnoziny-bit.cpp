//prvky, z ktorých idem robiť množiny
vector<int> prvky;
for(int i=0; i<(1<<prvky.size()); i++) {
    //spracujem ďalšiu množinu reprezentovanú číslom i
    for(int j=0; j<prvky.size(); j++) {
        if(i&(1<<j)) {
            //množina i obsahuje j-ty prvok
        }
        else {
            //množina i neobsahuje j-ty prvok
        }
    }
}
