#include <stdio.h>
#include <string.h>

char gp_buff[] = "$GPRMC,103956.000,A,1009.9733,N,07618.6494,E,0.00,272.93,120517,,,D*6F" ;


//void get_lat_str(*buff);
int main(void)
{
  printf("\nnmea parsing code started... \n");
  printf("\nbuff :  %s\n", gp_buff);
  get_lat_str(gp_buff);
  return 0;
}


get_lat_str(*buff){
  char *ret ;
  unsigned char i = 0, count = 3 ;
  printf("\n\rget_lat_str\n\r");
  for(i=0;i<3;i++){
  ret = strstr(buff,",");
  }
  printf("pointer val : %s\n\r",ret);
}
