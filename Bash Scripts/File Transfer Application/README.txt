    addPhotos dir1 [dir2] ...
    add all photos in directories dir1 ... into $PHOTOS_DIR

    addPhotos -v dir1 [dir2] ...
    add all photos in directories dir1 ... into $PHOTOS_DIR
    with verbose output, identifying the fate of each file in dir1 ...

    addPhotos --help
    print usage message and exit

    Behaviour: 
        If the arguments to this script are incorrect, print a usage message
        See cat --help for an example (or see the usage.txt file here)

        If a directory does not exist, send the message "directory $dir does not exist" to stderr and skip it

        If a user chooses the -v option (verbose), print out information about each file processed as follows
        exactly one of the following for each file:
 
            copied $FILE_NAME
            duplicateImage $FILE_NAME

        If an image is already in our $PHOTOS_DIR (based on file contents), don't re-add it.

        Two instances of this script should not be running at the same time

        All new files added to $PHOTOS_DIR should have names distinct from files already in $PHOTOS_DIR
   


