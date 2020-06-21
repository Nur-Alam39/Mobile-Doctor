/* Save the file to disk. */
    void save(void)
    {
        struct address *info;
        FILE *fp;
        fp = fopen("mlist", "wb");
        if(!fp)
        {
            printf("Cannot open file.\n");
            exit(1);
        }
        printf("\nSaving File\n");
        info = start;
        while(info)
        {
            fwrite(info, sizeof(struct address), 1, fp);
            info = info->next; /* get next address */
        }
        fclose(fp);
    }
