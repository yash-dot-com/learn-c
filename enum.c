// just a list of numbers identified by names 
// enums are case sensitive. 
// starts at 0 

typedef enum DayOfWeek {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} days_of_week_t;

typedef struct Event {
    char* title;
    days_of_week_t day;
} event_t;

typedef enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    PURPLE
} colors_t;

// setting default values to the enum
// by default you can put one starting value and rest will be just incremented by 1
// otherwise you can set each value to whatever you want

typedef enum StatusCode {
    SUCCESS = 200,
    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    FORBIDDEN = 403,
    NOT_FOUND = 404,
    INTERNAL_SERVER_ERROR = 500
} success_code_t;


