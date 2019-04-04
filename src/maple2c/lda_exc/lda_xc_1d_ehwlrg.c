/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_xc_1d_ehwlrg.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t4, t5, t6, t8, t13, t15, t16;
  double t22, t23, t25, t29;

  lda_xc_1d_ehwlrg_params *params;
 
  assert(p->params != NULL);
  params = (lda_xc_1d_ehwlrg_params * )(p->params);

  t1 = rho[0] * rho[0];
  t4 = params->a2 * rho[0] + params->a3 * t1 + params->a1;
  t5 = pow(rho[0], params->alpha);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t4 * t5;

  if(order < 1) return;


  t6 = rho[0] * params->a3;
  t8 = 0.2e1 * t6 + params->a2;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = rho[0] * t8 * t5 + t4 * t5 * params->alpha + (t4 * t5);

  if(order < 2) return;


  t13 = t8 * t5;
  t15 = 0.1e1 / rho[0];
  t16 = params->alpha * t15;
  t22 = params->alpha * params->alpha;
  t23 = t22 * t15;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = (t4 * t5) * t16 + (t4 * t5) * t23 + 0.2e1 * t13 * params->alpha + 0.2e1 * t6 * t5 + 0.2e1 * t13;

  if(order < 3) return;


  t25 = params->a3 * t5;
  t29 = 0.1e1 / t1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = (t4 * t5) * t22 * params->alpha * t29 - (t4 * t5) * params->alpha * t29 + 0.3e1 * t13 * t16 + 0.3e1 * t13 * t23 + 0.6e1 * t25 * params->alpha + 0.6e1 * t25;

  if(order < 4) return;



}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t4, t5, t6, t8, t13, t15, t16;
  double t22, t23, t25, t29;

  lda_xc_1d_ehwlrg_params *params;
 
  assert(p->params != NULL);
  params = (lda_xc_1d_ehwlrg_params * )(p->params);

  t1 = rho[0] * rho[0];
  t4 = params->a2 * rho[0] + params->a3 * t1 + params->a1;
  t5 = pow(rho[0], params->alpha);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t4 * t5;

  if(order < 1) return;


  t6 = rho[0] * params->a3;
  t8 = 0.2e1 * t6 + params->a2;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = rho[0] * t8 * t5 + t4 * t5 * params->alpha + (t4 * t5);

  if(order < 2) return;


  t13 = t8 * t5;
  t15 = 0.1e1 / rho[0];
  t16 = params->alpha * t15;
  t22 = params->alpha * params->alpha;
  t23 = t22 * t15;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = (t4 * t5) * t16 + (t4 * t5) * t23 + 0.2e1 * t13 * params->alpha + 0.2e1 * t6 * t5 + 0.2e1 * t13;

  if(order < 3) return;


  t25 = params->a3 * t5;
  t29 = 0.1e1 / t1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = (t4 * t5) * t22 * params->alpha * t29 - (t4 * t5) * params->alpha * t29 + 0.3e1 * t13 * t16 + 0.3e1 * t13 * t23 + 0.6e1 * t25 * params->alpha + 0.6e1 * t25;

  if(order < 4) return;



}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t3, t5, t6, t7, t9, t14, t16;
  double t17, t23, t24, t26, t30;

  lda_xc_1d_ehwlrg_params *params;
 
  assert(p->params != NULL);
  params = (lda_xc_1d_ehwlrg_params * )(p->params);

  t1 = rho[0] + rho[1];
  t3 = t1 * t1;
  t5 = params->a2 * t1 + params->a3 * t3 + params->a1;
  t6 = pow(t1, params->alpha);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t5 * t6;

  if(order < 1) return;


  t7 = params->a3 * t1;
  t9 = params->a2 + 0.2e1 * t7;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t1 * t9 * t6 + t5 * t6 * params->alpha + (t5 * t6);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = vrho[0];

  if(order < 2) return;


  t14 = t9 * t6;
  t16 = 0.1e1 / t1;
  t17 = params->alpha * t16;
  t23 = params->alpha * params->alpha;
  t24 = t23 * t16;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = (t5 * t6) * t17 + (t5 * t6) * t24 + 0.2e1 * t14 * params->alpha + 0.2e1 * t7 * t6 + 0.2e1 * t14;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = v2rho2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = v2rho2[1];

  if(order < 3) return;


  t26 = params->a3 * t6;
  t30 = 0.1e1 / t3;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = (t5 * t6) * t23 * params->alpha * t30 - (t5 * t6) * params->alpha * t30 + 0.3e1 * t14 * t17 + 0.3e1 * t14 * t24 + 0.6e1 * t26 * params->alpha + 0.6e1 * t26;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = v3rho3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = v3rho3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = v3rho3[2];

  if(order < 4) return;



}
