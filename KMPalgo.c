
int seek_substring_KMP ( char s [], char p [])     
{
	int i , j , N , M ;    
	N = strlen ( s );  
	M = strlen ( p );  

    // Dynamic array of length M 
int * d = ( int * ) malloc ( M * sizeof ( int ));	     

	// Calculation of the prefix function 
d [ 0 ] = 0 ;	  
	for ( i = 1 , j = 0 ; i < M ; i ++ )         
	{
		while ( j > 0 && p [ j ] != p [ i ])      
			j = d [ j -1 ];  
		if ( p [ j ] == p [ i ])  
			j ++ ;
		d [ i ] = j ;  
	}

	// Search 
for ( i = 0 , j = 0 ; i < N ; i ++ )	         
	{
		while ( j > 0 && p [ j ] != s [ i ])      
			j = d [ j - 1 ];    
		if ( p [ j ] == s [ i ])  
            j ++ ;
		if ( j == M )  
        {
		    free ( d );
            return i - j + 1 ;     
        }
	}
    free ( d );
	return -1 ; 
}