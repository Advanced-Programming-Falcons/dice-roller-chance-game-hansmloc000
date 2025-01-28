#ifndef DICE_H
#define DICE_H

class Dice{

  public:

    Dice(int f);

    Dice(void);

    int rand_num(void);

    int get_faces(void);

    void set_faces(int f);

    void print_info(void);

  private:

     int faces;
};

#endif
