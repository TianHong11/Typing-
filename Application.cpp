//
// Created by tianh on 3/19/2023.
//

#include "Application.h"

Application::Application()
{

}

void Application::run()
{
    sf::RenderWindow window(sf::VideoMode(1000, 700, 32), "Test");
    window.setFramerateLimit(60);
    window.setVerticalSyncEnabled(false);

    window.setKeyRepeatEnabled(false);

//    FileTree tree;
//    tree.push("Directory");
//    tree.push("Directory/File1");
//    tree.push("Directory/File2");
//    tree.push("Directory/File3");

    TextInput ti;
    ti.setLabel("Name:");
    ti.setPosition(50,50);


//    FileItem fi("FileTree/folder.png", "file", {200,200});

//    FileTree tree;
//    tree.push("Directory/file1");
//    tree.push("Directory/file2");

    WordSort ws("5000-baby-girl-names.txt", ti);
    ws.setPosition({120,100});

//    Position::belowCursor(ti, ws); ////why is not working?



//    Menu menu({"menu","start", "end"});
//    Menu menu2({"Setting", "Volume", "Language"});
//    Menu menu3({"Player","1", "2"});
//
//    Position::boxRight(menu, menu2, 30);
//    Position::boxRight(menu2, menu3, 30);


    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
//            tree.addEventHandler(window,event);
//            fi.addEventHandler(window, event);
//            tree.addEventHandler(window,event);
            ti.addEventHandler(window, event);
////            History::eventHandler(window,event);
////            fileItem.addEventHandler(window,event);
//
            if(event.type == sf::Event::TextEntered)
            {
                ws.priority(ti.getString());

            }

//            menu.addEventHandler(window,event);
//            menu2.addEventHandler(window, event);
//            menu3.addEventHandler(window,event);
        }
        Position::belowCursor(ti, ws);
        ws.setPosition({120,100});
//
        ti.update();
//
        window.clear(sf::Color::Black);

//        window.draw(fi);
//        window.draw(tree);
        window.draw(ti);
        window.draw(ws);

//        window.draw(fileItem);

//        window.draw(menu);
//        window.draw(menu2);
//        window.draw(menu3);
        window.display();
    }
}
