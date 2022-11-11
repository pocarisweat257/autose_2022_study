/*----------MACRO----------*/
#define SIN_DEGREE(x) sin((x) * (M_PI / 180.0))
#define COS_DEGREE(x) cos((x) * (M_PI / 180.0))
#define TAN_DEGREE(x) tan((x) * (M_PI / 180.0))

#ifndef MAX
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#else
#warning Duplicated definition of MAX
#endif

/*--------CONSTANT---------*/
typedef enum
{
    DEVICE_ERROR = -1,
    DEVICE_INITIALIZING,
    DEVICE_RUNNING,
    DEVICE_WAITING,
    DEVICE_DISABLED
} Device_Status;

Device_Status get_device_status(int device_number);

typedef enum
{
    Person_BloodType_A,
    Person_BloodType_B,
    Person_BloodType_O,
    Person_BloodType_AB
} Person_BloodType;

typedef struct person
{
    char * name;
    int age;
    Person_BloodType blood_type;
} Person;

Person man1;
Person woman1;

