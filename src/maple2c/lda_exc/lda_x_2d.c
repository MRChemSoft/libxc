/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_x_2d.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t2, t4, t5, t6;


  t1 = M_SQRT2;
  t2 = sqrt(M_PI);
  t4 = t1 / t2;
  t5 = sqrt(rho[0]);
  t6 = t4 * t5;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.4e1 / 0.3e1 * t6;

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -0.2e1 * t6;

  if(order < 2) return;


  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t4 / t5;

  if(order < 3) return;


  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t4 / t5 / rho[0] / 0.2e1;

  if(order < 4) return;



}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t2, t3, t4;


  t1 = sqrt(M_PI);
  t2 = 0.1e1 / t1;
  t3 = sqrt(rho[0]);
  t4 = t2 * t3;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.8e1 / 0.3e1 * t4;

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -0.4e1 * t4;

  if(order < 2) return;


  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.2e1 * t2 / t3;

  if(order < 3) return;


  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t2 / t3 / rho[0];

  if(order < 4) return;



}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t11, t12, t13, t14, t16, t17;
  double t19, t21, t22, t23, t24, t25, t26, t27;
  double t29, t32, t36, t38, t42, t46, t48, t50;
  double t51, t52, t56, t57, t59, t62, t63, t66;
  double t69, t74, t75, t77, t80, t83, t86, t90;
  double t94, t98, t101, t104, t108, t112, t115, t120;
  double t121, t128, t129, t130, t132, t135, t152, t154;
  double t186, t198, t224;


  t1 = M_SQRT2;
  t2 = sqrt(M_PI);
  t3 = 0.1e1 / t2;
  t4 = t1 * t3;
  t5 = rho[0] - rho[1];
  t6 = rho[0] + rho[1];
  t7 = 0.1e1 / t6;
  t8 = t5 * t7;
  t9 = 0.1e1 + t8;
  t10 = sqrt(t9);
  t11 = t10 * t9;
  t12 = 0.1e1 - t8;
  t13 = sqrt(t12);
  t14 = t13 * t12;
  t16 = t11 / 0.2e1 + t14 / 0.2e1;
  t17 = sqrt(t6);
  t19 = t4 * t16 * t17;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.4e1 / 0.3e1 * t19;

  if(order < 1) return;


  t21 = 0.2e1 * t19;
  t22 = t17 * t6;
  t23 = t22 * t1;
  t24 = t6 * t6;
  t25 = 0.1e1 / t24;
  t26 = t5 * t25;
  t27 = t7 - t26;
  t29 = -t27;
  t32 = 0.3e1 / 0.4e1 * t10 * t27 + 0.3e1 / 0.4e1 * t13 * t29;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t21 - 0.4e1 / 0.3e1 * t23 * t3 * t32;

  t36 = -t7 - t26;
  t38 = -t36;
  t42 = t3 * (0.3e1 / 0.4e1 * t10 * t36 + 0.3e1 / 0.4e1 * t13 * t38);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t21 - 0.4e1 / 0.3e1 * t23 * t42;

  if(order < 2) return;


  t46 = t4 * t32 * t17;
  t48 = 0.1e1 / t17;
  t50 = t4 * t16 * t48;
  t51 = 0.1e1 / t10;
  t52 = t27 * t27;
  t56 = 0.1e1 / t24 / t6;
  t57 = t5 * t56;
  t59 = -0.2e1 * t25 + 0.2e1 * t57;
  t62 = 0.1e1 / t13;
  t63 = t29 * t29;
  t66 = -t59;
  t69 = 0.3e1 / 0.8e1 * t51 * t52 + 0.3e1 / 0.4e1 * t10 * t59 + 0.3e1 / 0.8e1 * t62 * t63 + 0.3e1 / 0.4e1 * t13 * t66;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.4e1 * t46 - t50 - 0.4e1 / 0.3e1 * t23 * t3 * t69;

  t74 = t17 * t1;
  t75 = t74 * t42;
  t77 = t51 * t36;
  t80 = t10 * t5;
  t83 = t62 * t38;
  t86 = t13 * t5;
  t90 = t3 * (0.3e1 / 0.8e1 * t77 * t27 + 0.3e1 / 0.2e1 * t80 * t56 + 0.3e1 / 0.8e1 * t83 * t29 - 0.3e1 / 0.2e1 * t86 * t56);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = -0.2e1 * t46 - t50 - 0.2e1 * t75 - 0.4e1 / 0.3e1 * t23 * t90;

  t94 = t36 * t36;
  t98 = 0.2e1 * t25 + 0.2e1 * t57;
  t101 = t38 * t38;
  t104 = -t98;
  t108 = t3 * (0.3e1 / 0.8e1 * t51 * t94 + 0.3e1 / 0.4e1 * t10 * t98 + 0.3e1 / 0.8e1 * t62 * t101 + 0.3e1 / 0.4e1 * t13 * t104);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -0.4e1 * t75 - t50 - 0.4e1 / 0.3e1 * t23 * t108;

  if(order < 3) return;


  t112 = t4 * t69 * t17;
  t115 = t4 * t32 * t48;
  t120 = t4 * t16 / t22 / 0.2e1;
  t121 = 0.1e1 / t11;
  t128 = t24 * t24;
  t129 = 0.1e1 / t128;
  t130 = t5 * t129;
  t132 = 0.6e1 * t56 - 0.6e1 * t130;
  t135 = 0.1e1 / t14;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.6e1 * t112 - 0.3e1 * t115 + t120 - 0.4e1 / 0.3e1 * t23 * t3 * (-0.3e1 / 0.16e2 * t121 * t52 * t27 + 0.9e1 / 0.8e1 * t51 * t27 * t59 + 0.3e1 / 0.4e1 * t10 * t132 - 0.3e1 / 0.16e2 * t135 * t63 * t29 + 0.9e1 / 0.8e1 * t62 * t29 * t66 - 0.3e1 / 0.4e1 * t13 * t132);

  t152 = t48 * t1 * t42;
  t154 = 0.4e1 * t74 * t90;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = -0.2e1 * t112 - 0.2e1 * t115 + t120 - t152 - t154 - 0.4e1 / 0.3e1 * t23 * t3 * (-0.3e1 / 0.16e2 * t121 * t36 * t52 + 0.3e1 / 0.2e1 * t51 * t5 * t56 * t27 + 0.3e1 / 0.8e1 * t77 * t59 + 0.3e1 / 0.2e1 * t10 * t56 - 0.9e1 / 0.2e1 * t80 * t129 - 0.3e1 / 0.16e2 * t135 * t38 * t63 - 0.3e1 / 0.2e1 * t62 * t5 * t56 * t29 + 0.3e1 / 0.8e1 * t83 * t66 - 0.3e1 / 0.2e1 * t13 * t56 + 0.9e1 / 0.2e1 * t86 * t129);

  t186 = t74 * t108;
  t198 = -0.2e1 * t56 - 0.6e1 * t130;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = -0.2e1 * t152 - t154 - t115 + t120 - 0.2e1 * t186 - 0.4e1 / 0.3e1 * t23 * t3 * (-0.3e1 / 0.16e2 * t121 * t94 * t27 + 0.3e1 / 0.2e1 * t77 * t57 + 0.3e1 / 0.8e1 * t51 * t98 * t27 + 0.3e1 / 0.4e1 * t10 * t198 - 0.3e1 / 0.16e2 * t135 * t101 * t29 - 0.3e1 / 0.2e1 * t83 * t57 + 0.3e1 / 0.8e1 * t62 * t104 * t29 - 0.3e1 / 0.4e1 * t13 * t198);

  t224 = -0.6e1 * t56 - 0.6e1 * t130;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -0.3e1 * t152 - 0.6e1 * t186 + t120 - 0.4e1 / 0.3e1 * t23 * t3 * (-0.3e1 / 0.16e2 * t121 * t94 * t36 + 0.9e1 / 0.8e1 * t77 * t98 + 0.3e1 / 0.4e1 * t10 * t224 - 0.3e1 / 0.16e2 * t135 * t101 * t38 + 0.9e1 / 0.8e1 * t83 * t104 - 0.3e1 / 0.4e1 * t13 * t224);

  if(order < 4) return;



}
