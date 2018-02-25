class
class User {
protected:
    const int id;
    const string name;
}

class Audio : virtual User {

};

class Video : virtual User {

};

class Image : virtual User {

};

class Text : virtual User {
    string
};

class Message : Audio, Video, Image, Text{
    void print() {

    }
};

