#include<stdio.h>
#include<string.h>
// Using struct 

struct student
{
    char name[50];
    int id;
    int num_classes;
};

// Union
union dimensions{
    float radius;
    struct 
    {
        float width;
        float height;
    }rectangle;
    
};
struct shape{
    enum{CIRCLE,RECTANGLE} type;
    union dimensions d;
};
int main(){

// create a new student
struct student students[3];

strcpy(students[0].name, "Alice");
students[0].id = 435;
students[0].num_classes = 5;

printf("Name: %s\n", students[0].name);
printf("ID: %d\n", students[0].id);
printf("Number of classes: %d\n", students[0].num_classes);

//Using Union 

struct shape s;
  s.type = RECTANGLE;
  s.d.rectangle.width = 10;
  s.d.rectangle.height = 20.0;

  //s.type = CIRCLE;
  s.d.radius = 5.0;


  switch (s.type) {
    case CIRCLE:
      printf("Circle: radius = %f\n", s.d.radius);
      break;
    case RECTANGLE:
      printf("Rectangle: width = %d, height = %.2f\n", s.d.rectangle.width, s.d.rectangle.height);
      break;


}

}

