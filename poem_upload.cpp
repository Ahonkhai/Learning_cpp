#include <iostream>
#include <cstring>
#include <vector>
#include <thread>
#include <chrono>


using namespace std;

int main()
{

    vector<string> name = {"David", "john"};
    cout << name[0] << '\n';

    // Placeholders
    vector<string> poems = {"Roses are red, Violets are blue, Sugar is sweet, And so are you.",
                            "The sun sets, The stars appear, Night falls, And you're near.",
                            "In the stillness of night, Dreams take flight, In the soft moonlight, Everything feels right.",
                            "The wind whispers, Through the trees, A lullaby, Carried on the breeze.",
                            "The morning dew, Glistens bright, Nature awakens, In the first light"};
    cout << poems[4] << '\n';

    for (const auto &poems : poems)
    {
        cout << poems << endl;
    }

    // this_thread::sleep_for(chrono::seconds(10));
//  i am very unsure of my code
        return 0;
}

//  "Poem 1: Roses are red,\nViolets are blue,\nSugar is sweet,\nAnd so are you.",
//         "Poem 2: The sun sets,\nThe stars appear,\nNight falls,\nAnd you're near.",
//         "Poem 3: In the stillness of night,\nDreams take flight,\nIn the soft moonlight,\nEverything feels right.",
//         "Poem 4: The wind whispers,\nThrough the trees,\nA lullaby,\nCarried on the breeze.",
//         "Poem 5: The morning dew,\nGlistens bright,\nNature awakens,\nIn the first light."