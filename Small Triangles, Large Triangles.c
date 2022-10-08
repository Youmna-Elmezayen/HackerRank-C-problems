// main is given as starter code

void sort_by_area(triangle* tr, int n) {
	float *areas = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        float p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        areas[i] = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (areas[j] > areas[j + 1])
            {
                float tempA = areas[j];
                areas[j] = areas[j + 1];
                areas[j + 1] = tempA;
                
                triangle tempT = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = tempT;
            }
        }
    }
    free(areas);
}