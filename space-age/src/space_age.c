#include "space_age.h"
#include <stdio.h>

static const float seconds[] = {
31557600.0,
7600543.82,
19414149.05,
59354032.69,
374355659.12, 
929292362.88,
2651370019.33, 
5200418560.03};

float convert_planet_age(planets planet, long age_seconds){
  return age_seconds / seconds[planet];
}
