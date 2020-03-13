bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int y = yourLeft;
    if(yourRight>y)
    {
        y = yourRight;
    }
    int j = friendsRight;
    if(friendsLeft>j)
    {
        j = friendsLeft;
    }
    return(y==j&&yourRight+yourLeft==friendsLeft+friendsRight);
}
