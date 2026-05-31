    c1=(struct complex*)malloc(sizeof(struct complex));
    c2=(struct complex*)malloc(sizeof(struct complex));
    if (c1 == NULL || c2 == NULL) {
    printf("Memory allocation failed\n");
    return 1;
    }