int main(){
    random_device rd;
    mt19937 random(rd());

    uniform_int_distribution<> dist(1,100);

    cout<<dist(random);

    return 0;
}