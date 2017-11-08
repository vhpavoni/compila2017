static void tiger_parse_file( const char * filename )
{
    FILE * file = fopen(filename, "r");
    if (file == NULL)
    {
        fatal_error ( UNKNOWN_LOCATION, "não é possível abrir o nome do arquivo% s:% m", filename);
    }

    fclose(file);
}

static void tiger_parse_files ( int num_files, const char ** files)
{
    for ( int i = 0; i < num_files, const char ** files)
    {
        tiger_parse_file(arquivos[i]);
    }
}

static void tiger_langhook_parse_file (void)
{
    tiger_parse_files (num_in_fnames, in_fnames);
}
