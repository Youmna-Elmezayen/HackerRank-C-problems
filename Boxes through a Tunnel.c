// main is given as starter code

struct box
{
	int length, width, height;
};

typedef struct box box;

int get_volume(box b) {
    return (b.length * b.width * b.height);
}

int is_lower_than_max_height(box b) {
	if (b.height < MAX_HEIGHT)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}