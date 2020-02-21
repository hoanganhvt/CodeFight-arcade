std::vector<std::string> addBorder(std::vector<std::string> picture) {
    for(int i = 0; i < picture.size();i++)
    {
        string s = "*";
        picture[i]+=s;
        s+=picture[i];
        picture[i] = s;
    }
     string str;
    for(int i = 0; i < picture[0].length();i++)
    {

        str+="*";
    }
    picture.push_back(str);
    picture.insert(picture.begin(),str);
    return picture;
    
}
