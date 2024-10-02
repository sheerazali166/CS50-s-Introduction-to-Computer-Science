//
//  command_line.c
//  Shorts
//
//  Created by Sheeraz on 10/2/24.
//

#include "command_line.h"

int mainFive(void) {
    
    // Program 14
    
    printf("-------------Program 14-------------\n");
    
    // Using the Linux Command Line
    
    // The CS50 IDE is a cloud-based machine running
    // Ubuntu, one of the many flavors of the Linux OS.
    
    // Many Mordern Linux distribution have graphical
    // user interfaces (GUI) to allow easy mouse-based
    // navigation
    
    // Still, as a programmer you'll likely be using your
    // terminal window frequently, and you can do many
    // of the same tasks with keyboard commands.
    
    // Let's have a look at some of the most important of
    // these keyboard based commands for working
    // within the IDE or any UNIX-based system.
    
    // ls
         // Short for "list" this command will give you a readout of
         // all the files and folders in your current directory.
    
    // cd <directory>
    
        // Short for "change directory", this command change your
        // current directory to <directory>, which you specify,
        // in your workspace or on your operating system.
    
        // The shorthand name for the current directory is .
        
        // The shorthand name for the present directory of the
        // current directory is ..
    
        // if ever curious about the name of the current directory,
        // though the terminal prompt will often tell you, you can
        // type pwd (present working directory)
    
    
    // mkdir <directory>
    
        // Short for "make directory" this command will create a
        // new subdirectory called <directory> located in the
        // current directory
    
    // cp <source> <destination>
    
        // Short for "copy" this command will allow you to create a
        // duplicate of the file you specify as <source>, which it
        // will save in <destination>.
    
        // if you wish to copy entire directories, you'll need to
        // modify the command slightly:
    
        // cp -r <source directory> <destination directory>
        // The "-r" stands for recursive, and tell cp to dive down
        // into the directory and copy everything inside of it
        // (including any subdirectories it might contain).
    
        // she is taking revenge or doing social work for lame girls?
    
    // rm <file>
    
        // Short for "remove", this command will delete <file>
        // after it asks you to confirm (y/n) you want to delete it.
    
        // You can skip the confirmation by typing:
        // rm -f <file>
        // But use at your own puril! There's no undo.
        
        // To delete intire directories you need to use the -r flag,
        // just as was the case with cp.
    
        // rm -r <directory>
        
        // You can also combine the -r and -f flags into -rf.
        // again, careful! There's no undo!
    
        // mv <source> <destination>
        
            // Short for "move" this command will allow you to
            // effectively rename a file, moving it from <source> to
            // <destination>.
    
    
        // To be sure, there are many more basic command
        // line utilities at your disposal, and we'll discuss
        // many of them in the future in CS50
        
        // if you wish to explore other interesting ones before
        // we see them in the class, read up on:
    
    
        // ----------------------------------- //
        //     chmod         ln         touch  //
        // ----------------------------------- //
        //     rmdir         man         diff  //
        // ----------------------------------- //
        //     sudo          clear      telnet //
        // ----------------------------------- //
     
        // Please strong your army female puppies are responsible
        // all of that they don't need money after maturity they also
        // demand for respect if you die happily for revenge why didn't you die
        // for your own country?
    

    return 0;
}
