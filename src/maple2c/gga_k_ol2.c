/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/gga_k_ol2.mpl
  Type of functional: work_gga_x
*/

void XC(gga_k_ol2_enhance)
  (const XC(func_type) *p,  XC(gga_work_x_t) *r)
{
  double t1, t4, t6, t7, t12, t13, t20, t25;

  gga_k_ol2_params *params;
 
  assert(p->params != NULL);
  params = (gga_k_ol2_params * )(p->params);

  t1 = r->x * r->x;
  t4 = params->cc * r->x;
  t6 = 0.12599210498948731648e1 + 0.40e1 * r->x;
  t7 = 0.1e1 / t6;
  r->f = params->aa + 0.13888888888888888889e-1 * params->bb * t1 + t4 * t7;

  if(r->order < 1) return;

  t12 = t6 * t6;
  t13 = 0.1e1 / t12;
  r->dfdx = 0.27777777777777777778e-1 * params->bb * r->x + params->cc * t7 - 0.40e1 * t4 * t13;

  if(r->order < 2) return;

  t20 = 0.1e1 / t12 / t6;
  r->d2fdx2 = 0.27777777777777777778e-1 * params->bb - 0.80e1 * params->cc * t13 + 0.3200e2 * t4 * t20;

  if(r->order < 3) return;

  t25 = t12 * t12;
  r->d3fdx3 = 0.9600e2 * params->cc * t20 - 0.384000e3 * t4 / t25;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  XC(gga_k_ol2_enhance)