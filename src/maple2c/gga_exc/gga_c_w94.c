/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_c_w94.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t4, t5, t7, t9, t10;
  double t11, t12, t13, t16, t17, t20, t22, t23;
  double t24, t25, t30, t32, t33, t34, t35, t37;
  double t39, t40, t42, t50, t52, t53, t57, t61;
  double t62, t63, t66, t67, t69, t73, t76, t77;
  double t83, t90, t96, t98, t102, t105, t106, t109;
  double t115, t117, t138, t200;


  t1 = sqrt(sigma[0]);
  t2 = t1 * sigma[0];
  t3 = rho[0] * rho[0];
  t4 = t3 * t3;
  t5 = 0.1e1 / t4;
  t7 = POW_1_3(rho[0]);
  t9 = 0.1e1 / t7 / rho[0];
  t10 = t1 * t9;
  t11 = pow(t10, 0.1e1 / 0.16e2);
  t12 = t11 * t11;
  t13 = t12 * t11;
  t16 = t3 * rho[0];
  t17 = 0.1e1 / t16;
  t20 = M_CBRT3;
  t22 = POW_1_3(0.1e1 / M_PI);
  t23 = t20 * t22;
  t24 = M_CBRT4;
  t25 = t24 * t24;
  t30 = 0.118e2 + 0.150670e0 * t13 * t2 * t5 + 0.11020000000000000000e-1 * sigma[0] * t17 + t23 * t25 / t7 / 0.4e1;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.1e1 / t30;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t32 = t30 * t30;
  t33 = 0.1e1 / t32;
  t34 = rho[0] * t33;
  t35 = t7 * t7;
  t37 = 0.1e1 / t35 / t3;
  t39 = t13 * sigma[0] * t37;
  t40 = t39 * t1;
  t42 = 0.1e1 / t7 / t3;
  t50 = -0.64034750000000000000e0 * t40 * t42 - 0.33060000000000000000e-1 * sigma[0] * t5 - t23 * t25 * t9 / 0.12e2;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t34 * t50 + (-0.1e1 / t30);

  t52 = 0.1e1 / t1;
  t53 = t39 * t52;
  t57 = 0.24013031250000000000e0 * t53 * t9 + 0.11020000000000000000e-1 * t17;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t34 * t57;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t61 = 0.1e1 / t32 / t30;
  t62 = rho[0] * t61;
  t63 = t50 * t50;
  t66 = t13 * t10;
  t67 = t66 * sigma[0];
  t69 = 0.1e1 / t35 / t4;
  t73 = 0.1e1 / t7 / t16;
  t76 = t4 * rho[0];
  t77 = 0.1e1 / t76;
  t83 = 0.18676802083333333333e1 * t67 * t69 + 0.14941441666666666667e1 * t40 * t73 + 0.13224000000000000000e0 * sigma[0] * t77 + t23 * t25 * t42 / 0.9e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t33 * t50 + t34 * t83 - 0.2e1 * t62 * t63;

  t90 = 0.1e1 / t35 / t16;
  t96 = -0.70038007812500000000e0 * t66 * t90 - 0.32017375000000000000e0 * t53 * t42 - 0.33060000000000000000e-1 * t5;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -0.2e1 * t62 * t57 * t50 + t33 * t57 + t34 * t96;

  t98 = t57 * t57;
  t102 = t66 / sigma[0];
  t105 = 0.1e1 / t2;
  t106 = t39 * t105;
  t109 = 0.26264252929687500000e0 * t102 * t37 - 0.12006515625000000000e0 * t106 * t9;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t34 * t109 - 0.2e1 * t62 * t98;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t115 = t32 * t32;
  t117 = rho[0] / t115;
  t138 = 0.1e1 / t4 / t3;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.6e1 * t61 * t63 + 0.3e1 * t33 * t83 + 0.6e1 * t117 * t63 * t50 - 0.6e1 * t62 * t50 * t83 + t34 * (-0.29571603298611111111e1 * t13 * t2 / t4 / t16 - 0.13073761458333333333e2 * t67 / t35 / t76 - 0.49804805555555555557e1 * t40 / t7 / t4 - 0.66120000000000000000e0 * sigma[0] * t138 - 0.7e1 / 0.27e2 * t23 * t25 * t73);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -0.4e1 * t61 * t57 * t50 + 0.2e1 * t33 * t96 + 0.6e1 * t117 * t57 * t63 - 0.4e1 * t62 * t96 * t50 - 0.2e1 * t62 * t57 * t83 + t34 * (0.11089351236979166667e1 * t13 * t138 * t1 + 0.35019003906250000000e1 * t66 * t69 + 0.74707208333333333333e0 * t53 * t73 + 0.13224000000000000000e0 * t77);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -0.2e1 * t61 * t98 + 0.6e1 * t117 * t98 * t50 - 0.4e1 * t62 * t57 * t96 + t33 * t109 - 0.2e1 * t62 * t109 * t50 + t34 * (-0.41585067138671875000e0 * t13 * t52 * t77 - 0.35019003906250000000e0 * t102 * t90 + 0.16008687500000000000e0 * t106 * t42);

  t200 = sigma[0] * sigma[0];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.6e1 * t117 * t98 * t57 - 0.6e1 * t62 * t57 * t109 + t34 * (0.15594400177001953125e0 * t13 * t105 * t5 - 0.39396379394531250000e0 * t66 / t200 * t37 + 0.18009773437500000000e0 * t39 / t1 / t200 * t9);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{


  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = 0.0e0;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t4, t6, t9, t10, t11;
  double t13, t14, t16, t17, t18, t19, t20, t21;
  double t23, t25, t26, t27, t28, t29, t32, t33;
  double t36, t38, t39, t40, t41, t46, t47, t49;
  double t50, t51, t52, t53, t55, t57, t58, t59;
  double t60, t61, t63, t67, t68, t69, t70, t72;
  double t74, t75, t77, t85, t87, t88, t89, t90;
  double t92, t96, t97, t98, t101, t105, t107, t108;
  double t109, t111, t113, t115, t116, t117, t118, t119;
  double t123, t124, t125, t127, t128, t132, t133, t134;
  double t136, t137, t138, t141, t142, t144, t145, t146;
  double t147, t149, t150, t151, t153, t158, t159, t162;
  double t163, t164, t166, t170, t173, t174, t180, t182;
  double t184, t185, t187, t188, t189, t192, t193, t195;
  double t196, t197, t200, t201, t202, t204, t205, t208;
  double t214, t224, t225, t226, t228, t229, t230, t232;
  double t236, t237, t238, t241, t244, t246, t247, t249;
  double t252, t254, t255, t256, t257, t260, t263, t267;
  double t269, t270, t273, t276, t281, t282, t284, t285;
  double t286, t288, t296, t299, t305, t308, t309, t311;
  double t312, t313, t315, t317, t332, t340, t341, t343;
  double t345, t347, t349, t350, t352, t354, t357, t358;
  double t359, t360, t364, t365, t366, t367, t368, t369;
  double t370, t372, t374, t376, t379, t380, t382, t384;
  double t386, t387, t388, t393, t403, t407, t408, t412;
  double t416, t418, t419, t421, t423, t432, t435, t437;
  double t438, t446, t448, t452, t455, t457, t458, t462;
  double t466, t469, t472, t475, t477, t480, t482, t491;
  double t500, t507, t509, t523, t529, t532, t535, t536;
  double t537, t538, t540, t541, t543, t544, t552, t553;
  double t563, t564, t572, t582, t584, t591, t605, t618;
  double t619, t644, t660, t670, t674, t676, t677, t682;
  double t684, t686, t688, t698, t702, t705, t707, t709;
  double t711, t716, t717, t721, t723, t724, t729, t731;
  double t733, t735, t742, t745, t746, t749, t752, t759;
  double t761, t763, t767, t769, t772, t783, t789, t792;
  double t827, t828, t835, t838, t839, t840, t847, t849;
  double t851, t853, t857, t858, t860, t867, t870, t873;
  double t874, t875, t879, t882, t888, t890, t891, t895;
  double t898, t901, t902, t903, t907, t910, t916, t943;
  double t945, t948, t953;


  t1 = rho[0] - rho[1];
  t2 = rho[0] + rho[1];
  t3 = 0.1e1 / t2;
  t4 = t1 * t3;
  t6 = Heaviside(-0.2e1 * t4);
  t9 = -0.2e1 * t4 * t6 + t4;
  t10 = POW_1_3(t9);
  t11 = t10 * t10;
  t13 = -t11 * t9 + 0.1e1;
  t14 = sqrt(t13);
  t16 = sigma[0] + 0.2e1 * sigma[1] + sigma[2];
  t17 = sqrt(t16);
  t18 = t17 * t16;
  t19 = t2 * t2;
  t20 = t19 * t19;
  t21 = 0.1e1 / t20;
  t23 = POW_1_3(t2);
  t25 = 0.1e1 / t23 / t2;
  t26 = t17 * t25;
  t27 = pow(t26, 0.1e1 / 0.16e2);
  t28 = t27 * t27;
  t29 = t28 * t27;
  t32 = t19 * t2;
  t33 = 0.1e1 / t32;
  t36 = M_CBRT3;
  t38 = POW_1_3(0.1e1 / M_PI);
  t39 = t36 * t38;
  t40 = M_CBRT4;
  t41 = t40 * t40;
  t46 = 0.118e2 + 0.150670e0 * t29 * t18 * t21 + 0.11020000000000000000e-1 * t16 * t33 + t39 * t41 / t23 / 0.4e1;
  t47 = 0.1e1 / t46;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -t14 * t47;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t49 = 0.1e1 / t14;
  t50 = t2 * t49;
  t51 = t47 * t11;
  t52 = 0.1e1 / t19;
  t53 = t1 * t52;
  t55 = 0.2e1 * t3 * t6;
  t57 = 0.2e1 * t53 * t6;
  t58 = 0.0;
  t59 = -t3 + t53;
  t60 = 0.2e1 * t59;
  t61 = t58 * t60;
  t63 = -t4 * t61 + t3 - t53 - t55 + t57;
  t67 = t2 * t14;
  t68 = t46 * t46;
  t69 = 0.1e1 / t68;
  t70 = t23 * t23;
  t72 = 0.1e1 / t70 / t19;
  t74 = t29 * t16 * t72;
  t75 = t74 * t17;
  t77 = 0.1e1 / t23 / t19;
  t85 = -0.64034750000000000000e0 * t75 * t77 - 0.33060000000000000000e-1 * t16 * t21 - t39 * t41 * t25 / 0.12e2;
  t87 = t67 * t69 * t85;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = (-t14 * t47) + 0.5e1 / 0.6e1 * t50 * t51 * t63 + t87;

  t88 = t3 + t53;
  t89 = 0.2e1 * t88;
  t90 = t58 * t89;
  t92 = -t4 * t90 - t3 - t53 + t55 + t57;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = (-t14 * t47) + 0.5e1 / 0.6e1 * t50 * t51 * t92 + t87;

  t96 = 0.1e1 / t17;
  t97 = t74 * t96;
  t98 = t97 * t25;
  t101 = 0.24013031250000000000e0 * t98 + 0.11020000000000000000e-1 * t33;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t67 * t69 * t101;

  t105 = 0.48026062500000000000e0 * t98 + 0.22040000000000000000e-1 * t33;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = t67 * t69 * t105;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = vsigma[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t107 = t49 * t47;
  t108 = t11 * t63;
  t109 = t107 * t108;
  t111 = t14 * t69;
  t113 = 0.2e1 * t111 * t85;
  t115 = 0.1e1 / t14 / t13;
  t116 = t2 * t115;
  t117 = t10 * t9;
  t118 = t47 * t117;
  t119 = t63 * t63;
  t123 = t50 * t69;
  t124 = t108 * t85;
  t125 = t123 * t124;
  t127 = 0.1e1 / t10;
  t128 = t47 * t127;
  t132 = 0.2e1 * t52;
  t133 = t1 * t33;
  t134 = 0.2e1 * t133;
  t136 = 0.4e1 * t52 * t6;
  t137 = t3 * t58;
  t138 = t137 * t60;
  t141 = 0.4e1 * t133 * t6;
  t142 = t53 * t61;
  t144 = 0.0;
  t145 = -t59;
  t146 = t144 * t145;
  t147 = t146 * t60;
  t149 = t52 - t133;
  t150 = 0.4e1 * t149;
  t151 = t58 * t150;
  t153 = -t4 * t147 - t4 * t151 - t132 + t134 + t136 - 0.2e1 * t138 - t141 + 0.2e1 * t142;
  t158 = 0.1e1 / t68 / t46;
  t159 = t85 * t85;
  t162 = 0.2e1 * t67 * t158 * t159;
  t163 = t29 * t26;
  t164 = t163 * t16;
  t166 = 0.1e1 / t70 / t20;
  t170 = 0.1e1 / t23 / t32;
  t173 = t20 * t2;
  t174 = 0.1e1 / t173;
  t180 = 0.18676802083333333333e1 * t164 * t166 + 0.14941441666666666667e1 * t75 * t170 + 0.13224000000000000000e0 * t16 * t174 + t39 * t41 * t77 / 0.9e1;
  t182 = t67 * t69 * t180;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.5e1 / 0.3e1 * t109 + t113 + 0.25e2 / 0.36e2 * t116 * t118 * t119 - 0.5e1 / 0.3e1 * t125 + 0.5e1 / 0.9e1 * t50 * t128 * t119 + 0.5e1 / 0.6e1 * t50 * t51 * t153 - t162 + t182;

  t184 = t11 * t92;
  t185 = t107 * t184;
  t187 = t116 * t47;
  t188 = t117 * t92;
  t189 = t188 * t63;
  t192 = t184 * t85;
  t193 = t123 * t192;
  t195 = t50 * t47;
  t196 = t127 * t92;
  t197 = t196 * t63;
  t200 = t137 * t89;
  t201 = t53 * t90;
  t202 = t146 * t89;
  t204 = t1 * t1;
  t205 = t204 * t21;
  t208 = -t4 * t202 + 0.4e1 * t205 * t58 + t134 + t138 - t141 + t142 - t200 + t201;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = 0.5e1 / 0.6e1 * t109 + t113 + 0.5e1 / 0.6e1 * t185 + 0.25e2 / 0.36e2 * t187 * t189 - 0.5e1 / 0.6e1 * t193 + 0.5e1 / 0.9e1 * t195 * t197 + 0.5e1 / 0.6e1 * t50 * t51 * t208 - 0.5e1 / 0.6e1 * t125 - t162 + t182;

  t214 = t92 * t92;
  t224 = -t88;
  t225 = t144 * t224;
  t226 = t225 * t89;
  t228 = -t52 - t133;
  t229 = 0.4e1 * t228;
  t230 = t58 * t229;
  t232 = -t4 * t226 - t4 * t230 + t132 + t134 - t136 - t141 + 0.2e1 * t200 + 0.2e1 * t201;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.5e1 / 0.3e1 * t185 + t113 + 0.25e2 / 0.36e2 * t116 * t118 * t214 - 0.5e1 / 0.3e1 * t193 + 0.5e1 / 0.9e1 * t50 * t128 * t214 + 0.5e1 / 0.6e1 * t50 * t51 * t232 - t162 + t182;

  t236 = t111 * t101;
  t237 = t101 * t11;
  t238 = t237 * t63;
  t241 = t158 * t101;
  t244 = 0.2e1 * t67 * t241 * t85;
  t246 = 0.1e1 / t70 / t32;
  t247 = t163 * t246;
  t249 = t97 * t77;
  t252 = -0.70038007812500000000e0 * t247 - 0.32017375000000000000e0 * t249 - 0.33060000000000000000e-1 * t21;
  t254 = t67 * t69 * t252;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t236 - 0.5e1 / 0.6e1 * t123 * t238 - t244 + t254;

  t255 = t111 * t105;
  t256 = t105 * t11;
  t257 = t256 * t63;
  t260 = t158 * t105;
  t263 = 0.2e1 * t67 * t260 * t85;
  t267 = -0.14007601562500000000e1 * t247 - 0.64034750000000000000e0 * t249 - 0.66120000000000000000e-1 * t21;
  t269 = t67 * t69 * t267;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = t255 - 0.5e1 / 0.6e1 * t123 * t257 - t263 + t269;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = v2rhosigma[0];

  t270 = t237 * t92;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t236 - 0.5e1 / 0.6e1 * t123 * t270 - t244 + t254;

  t273 = t256 * t92;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = t255 - 0.5e1 / 0.6e1 * t123 * t273 - t263 + t269;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = v2rhosigma[3];

  t276 = t101 * t101;
  t281 = t163 / t16;
  t282 = t281 * t72;
  t284 = 0.1e1 / t18;
  t285 = t74 * t284;
  t286 = t285 * t25;
  t288 = 0.26264252929687500000e0 * t282 - 0.12006515625000000000e0 * t286;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = -0.2e1 * t67 * t158 * t276 + t67 * t69 * t288;

  t296 = 0.52528505859375000000e0 * t282 - 0.24013031250000000000e0 * t286;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = -0.2e1 * t67 * t260 * t101 + t67 * t69 * t296;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = v2sigma2[0];

  t299 = t105 * t105;
  t305 = 0.10505701171875000000e1 * t282 - 0.48026062500000000000e0 * t286;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = -0.2e1 * t67 * t158 * t299 + t67 * t69 * t305;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = v2sigma2[1];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = v2sigma2[2];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t308 = t11 * t153;
  t309 = t107 * t308;
  t311 = t115 * t47;
  t312 = t117 * t119;
  t313 = t311 * t312;
  t315 = t14 * t158;
  t317 = 0.6e1 * t315 * t159;
  t332 = 0.1e1 / t20 / t19;
  t340 = t67 * t69 * (-0.29571603298611111111e1 * t29 * t18 / t20 / t32 - 0.13073761458333333333e2 * t164 / t70 / t173 - 0.49804805555555555557e1 * t75 / t23 / t20 - 0.66120000000000000000e0 * t16 * t332 - 0.7e1 / 0.27e2 * t39 * t41 * t170);
  t341 = t50 * t158;
  t343 = t341 * t108 * t159;
  t345 = t127 * t119;
  t347 = t123 * t345 * t85;
  t349 = t49 * t69;
  t350 = t349 * t124;
  t352 = t107 * t345;
  t354 = t13 * t13;
  t357 = t2 / t14 / t354;
  t358 = t9 * t9;
  t359 = t47 * t358;
  t360 = t119 * t63;
  t364 = 0.6e1 * t33;
  t365 = t1 * t21;
  t366 = 0.6e1 * t365;
  t367 = t33 * t6;
  t368 = 0.12e2 * t367;
  t369 = t52 * t58;
  t370 = t369 * t60;
  t372 = t3 * t144;
  t374 = t372 * t145 * t60;
  t376 = t137 * t150;
  t379 = 0.12e2 * t365 * t6;
  t380 = t133 * t61;
  t382 = t53 * t147;
  t384 = t53 * t151;
  t386 = 0.0;
  t387 = t145 * t145;
  t388 = t386 * t387;
  t393 = -0.2e1 * t144 * t149;
  t403 = t364 - t366 - t368 + 0.6e1 * t370 - 0.3e1 * t374 - 0.3e1 * t376 + t379 - 0.6e1 * t380 + 0.3e1 * t382 + 0.3e1 * t384 - t4 * t388 * t60 - t4 * t393 * t60 - 0.2e1 * t4 * t146 * t150 - t4 * t58 * (-0.12e2 * t33 + 0.12e2 * t365);
  t407 = t68 * t68;
  t408 = 0.1e1 / t407;
  t412 = 0.6e1 * t67 * t408 * t159 * t85;
  t416 = 0.6e1 * t67 * t158 * t85 * t180;
  t418 = 0.3e1 * t111 * t180;
  t419 = t116 * t69;
  t421 = t419 * t312 * t85;
  t423 = t47 * t10;
  t432 = t123 * t308 * t85;
  t435 = t123 * t108 * t180;
  t437 = 0.1e1 / t117;
  t438 = t47 * t437;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.5e1 / 0.2e1 * t309 + 0.25e2 / 0.12e2 * t313 - t317 + t340 + 0.5e1 * t343 - 0.5e1 / 0.3e1 * t347 - 0.5e1 * t350 + 0.5e1 / 0.3e1 * t352 + 0.125e3 / 0.72e2 * t357 * t359 * t360 + 0.5e1 / 0.6e1 * t50 * t51 * t403 + t412 - t416 + t418 - 0.25e2 / 0.12e2 * t421 + 0.25e2 / 0.18e2 * t116 * t423 * t360 + 0.25e2 / 0.12e2 * t187 * t117 * t63 * t153 - 0.5e1 / 0.2e1 * t432 - 0.5e1 / 0.2e1 * t435 - 0.5e1 / 0.27e2 * t50 * t438 * t360 + 0.5e1 / 0.3e1 * t195 * t127 * t63 * t153;

  t446 = t11 * t208;
  t448 = 0.5e1 / 0.3e1 * t107 * t446;
  t452 = t349 * t192;
  t455 = 0.10e2 / 0.9e1 * t107 * t197;
  t457 = 0.25e2 / 0.18e2 * t311 * t189;
  t458 = t369 * t89;
  t462 = 0.2e1 * t372 * t145 * t89;
  t466 = 0.2e1 * t33;
  t469 = t133 * t90;
  t472 = 0.2e1 * t53 * t202;
  t475 = 0.4e1 * t367;
  t477 = t21 * t58 * t1;
  t480 = t204 * t174 * t58;
  t482 = -t4 * t388 * t89 - t4 * t393 * t89 + 0.8e1 * t205 * t146 - t366 + t374 + t376 + t379 - 0.4e1 * t380 + t382 + t384 + 0.2e1 * t458 - t462 + t466 - 0.2e1 * t469 + t472 - t475 + 0.12e2 * t477 - 0.20e2 * t480;
  t491 = t418 + t448 + 0.5e1 / 0.9e1 * t352 + t412 + 0.5e1 / 0.6e1 * t309 + 0.25e2 / 0.36e2 * t313 + t340 - t317 - 0.5e1 / 0.3e1 * t452 + t455 + t457 + 0.5e1 / 0.6e1 * t50 * t51 * t482 - t416 - 0.10e2 / 0.3e1 * t350 + 0.25e2 / 0.18e2 * t187 * t117 * t208 * t63;
  t500 = t357 * t47;
  t507 = 0.5e1 / 0.3e1 * t123 * t446 * t85;
  t509 = t123 * t184 * t180;
  t523 = t341 * t184 * t159;
  t529 = t63 * t85;
  t532 = 0.25e2 / 0.18e2 * t419 * t188 * t529;
  t535 = 0.10e2 / 0.9e1 * t123 * t196 * t529;
  t536 = 0.25e2 / 0.36e2 * t187 * t188 * t153 + 0.10e2 / 0.3e1 * t343 - 0.5e1 / 0.9e1 * t347 - 0.25e2 / 0.36e2 * t421 - 0.5e1 / 0.6e1 * t432 - 0.5e1 / 0.3e1 * t435 + 0.125e3 / 0.72e2 * t500 * t358 * t92 * t119 - t507 - 0.5e1 / 0.6e1 * t509 + 0.10e2 / 0.9e1 * t195 * t127 * t208 * t63 + 0.5e1 / 0.9e1 * t195 * t196 * t153 + 0.25e2 / 0.18e2 * t187 * t10 * t92 * t119 + 0.5e1 / 0.3e1 * t523 - 0.5e1 / 0.27e2 * t195 * t437 * t92 * t119 - t532 - t535;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t536 + t491;

  t537 = t117 * t214;
  t538 = t311 * t537;
  t540 = t127 * t214;
  t541 = t107 * t540;
  t543 = t11 * t232;
  t544 = t107 * t543;
  t552 = t372 * t224 * t89;
  t553 = t53 * t226;
  t563 = t137 * t229;
  t564 = t53 * t230;
  t572 = -t466 - t366 + t475 - 0.2e1 * t370 + t462 - 0.8e1 * t477 + t379 - 0.2e1 * t380 - 0.4e1 * t469 + t472 - 0.8e1 * t480 - t552 + t553 - t4 * t386 * t145 * t224 * t89 - 0.2e1 * t205 * t144 * t89 + 0.4e1 * t205 * t225 - t563 + t564 - t4 * t146 * t229 - t4 * t58 * (0.4e1 * t33 + 0.12e2 * t365);
  t582 = 0.25e2 / 0.36e2 * t538 + 0.5e1 / 0.9e1 * t541 + 0.5e1 / 0.6e1 * t544 + 0.5e1 / 0.6e1 * t50 * t51 * t572 + t418 + t448 + t412 + t340 - t317 - 0.10e2 / 0.3e1 * t452 + t455 + t457 - t416 - 0.5e1 / 0.3e1 * t350 + 0.25e2 / 0.36e2 * t187 * t117 * t232 * t63;
  t584 = t123 * t543 * t85;
  t591 = t123 * t540 * t85;
  t605 = t419 * t537 * t85;
  t618 = -0.5e1 / 0.6e1 * t584 + 0.5e1 / 0.9e1 * t195 * t127 * t232 * t63 - 0.5e1 / 0.9e1 * t591 - 0.5e1 / 0.27e2 * t195 * t437 * t214 * t63 + 0.10e2 / 0.9e1 * t195 * t196 * t208 + 0.125e3 / 0.72e2 * t500 * t358 * t214 * t63 - 0.25e2 / 0.36e2 * t605 + 0.25e2 / 0.18e2 * t187 * t10 * t214 * t63 + 0.25e2 / 0.18e2 * t187 * t188 * t208 + 0.5e1 / 0.3e1 * t343 - 0.5e1 / 0.6e1 * t435 - t507 - 0.5e1 / 0.3e1 * t509 + 0.10e2 / 0.3e1 * t523 - t532 - t535;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t618 + t582;

  t619 = t214 * t92;
  t644 = t224 * t224;
  t660 = -t364 - t366 + t368 - 0.6e1 * t458 + 0.3e1 * t552 + 0.3e1 * t563 + t379 - 0.6e1 * t469 + 0.3e1 * t553 + 0.3e1 * t564 - t4 * t386 * t644 * t89 + 0.2e1 * t4 * t144 * t228 * t89 - 0.2e1 * t4 * t225 * t229 - t4 * t58 * (0.12e2 * t33 + 0.12e2 * t365);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -0.5e1 / 0.27e2 * t50 * t438 * t619 + 0.5e1 / 0.3e1 * t195 * t196 * t232 + 0.25e2 / 0.12e2 * t187 * t188 * t232 + 0.25e2 / 0.18e2 * t116 * t423 * t619 - 0.5e1 / 0.2e1 * t584 - 0.5e1 / 0.3e1 * t591 - 0.25e2 / 0.12e2 * t605 + 0.125e3 / 0.72e2 * t357 * t359 * t619 + 0.5e1 / 0.6e1 * t50 * t51 * t660 - t317 + t340 - 0.5e1 / 0.2e1 * t509 + 0.5e1 * t523 + t412 - t416 - 0.5e1 * t452 + 0.25e2 / 0.12e2 * t538 + 0.5e1 / 0.3e1 * t541 + 0.5e1 / 0.2e1 * t544 + t418;

  t670 = t349 * t238;
  t674 = 0.4e1 * t315 * t101 * t85;
  t676 = 0.2e1 * t111 * t252;
  t677 = t101 * t117;
  t682 = t341 * t237 * t529;
  t684 = t252 * t11;
  t686 = t123 * t684 * t63;
  t688 = t101 * t127;
  t698 = 0.6e1 * t67 * t408 * t101 * t159;
  t702 = 0.4e1 * t67 * t158 * t252 * t85;
  t705 = 0.2e1 * t67 * t241 * t180;
  t707 = t29 * t332 * t17;
  t709 = t163 * t166;
  t711 = t97 * t170;
  t716 = t67 * t69 * (0.11089351236979166667e1 * t707 + 0.35019003906250000000e1 * t709 + 0.74707208333333333333e0 * t711 + 0.13224000000000000000e0 * t174);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -0.5e1 / 0.3e1 * t670 - t674 + t676 - 0.25e2 / 0.36e2 * t419 * t677 * t119 + 0.10e2 / 0.3e1 * t682 - 0.5e1 / 0.3e1 * t686 - 0.5e1 / 0.9e1 * t123 * t688 * t119 - 0.5e1 / 0.6e1 * t123 * t237 * t153 + t698 - t702 - t705 + t716;

  t717 = t349 * t257;
  t721 = 0.4e1 * t315 * t105 * t85;
  t723 = 0.2e1 * t111 * t267;
  t724 = t105 * t117;
  t729 = t341 * t256 * t529;
  t731 = t267 * t11;
  t733 = t123 * t731 * t63;
  t735 = t105 * t127;
  t742 = t408 * t105;
  t745 = 0.6e1 * t67 * t742 * t159;
  t746 = t158 * t267;
  t749 = 0.4e1 * t67 * t746 * t85;
  t752 = 0.2e1 * t67 * t260 * t180;
  t759 = t67 * t69 * (0.22178702473958333333e1 * t707 + 0.70038007812500000000e1 * t709 + 0.14941441666666666667e1 * t711 + 0.26448000000000000000e0 * t174);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[1] = -0.5e1 / 0.3e1 * t717 - t721 + t723 - 0.25e2 / 0.36e2 * t419 * t724 * t119 + 0.10e2 / 0.3e1 * t729 - 0.5e1 / 0.3e1 * t733 - 0.5e1 / 0.9e1 * t123 * t735 * t119 - 0.5e1 / 0.6e1 * t123 * t256 * t153 + t745 - t749 - t752 + t759;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[2] = v3rho2sigma[0];

  t761 = t349 * t270;
  t763 = t92 * t63;
  t767 = t92 * t85;
  t769 = t341 * t237 * t767;
  t772 = t123 * t684 * t92;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[3] = -0.5e1 / 0.6e1 * t670 - t674 + t676 - 0.5e1 / 0.6e1 * t761 - 0.25e2 / 0.36e2 * t419 * t677 * t763 + 0.5e1 / 0.3e1 * t769 - 0.5e1 / 0.6e1 * t772 - 0.5e1 / 0.9e1 * t123 * t688 * t763 - 0.5e1 / 0.6e1 * t123 * t237 * t208 + 0.5e1 / 0.3e1 * t682 + t698 - t702 - t705 - 0.5e1 / 0.6e1 * t686 + t716;

  t783 = t349 * t273;
  t789 = t341 * t256 * t767;
  t792 = t123 * t731 * t92;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[4] = -0.5e1 / 0.6e1 * t717 - t721 + t723 - 0.5e1 / 0.6e1 * t783 - 0.25e2 / 0.36e2 * t419 * t724 * t763 + 0.5e1 / 0.3e1 * t789 - 0.5e1 / 0.6e1 * t792 - 0.5e1 / 0.9e1 * t123 * t735 * t763 - 0.5e1 / 0.6e1 * t123 * t256 * t208 + 0.5e1 / 0.3e1 * t729 + t745 - t749 - t752 - 0.5e1 / 0.6e1 * t733 + t759;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[5] = v3rho2sigma[3];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[6] = -0.5e1 / 0.3e1 * t761 - t674 + t676 - 0.25e2 / 0.36e2 * t419 * t677 * t214 + 0.10e2 / 0.3e1 * t769 - 0.5e1 / 0.3e1 * t772 - 0.5e1 / 0.9e1 * t123 * t688 * t214 - 0.5e1 / 0.6e1 * t123 * t237 * t232 + t698 - t702 - t705 + t716;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[7] = -0.5e1 / 0.3e1 * t783 - t721 + t723 - 0.25e2 / 0.36e2 * t419 * t724 * t214 + 0.10e2 / 0.3e1 * t789 - 0.5e1 / 0.3e1 * t792 - 0.5e1 / 0.9e1 * t123 * t735 * t214 - 0.5e1 / 0.6e1 * t123 * t256 * t232 + t745 - t749 - t752 + t759;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[8] = v3rho2sigma[6];

  t827 = 0.2e1 * t315 * t276;
  t828 = t276 * t11;
  t835 = 0.6e1 * t67 * t408 * t276 * t85;
  t838 = 0.4e1 * t67 * t241 * t252;
  t839 = t111 * t288;
  t840 = t288 * t11;
  t847 = 0.2e1 * t67 * t158 * t288 * t85;
  t849 = t29 * t96 * t174;
  t851 = t281 * t246;
  t853 = t285 * t77;
  t857 = t67 * t69 * (-0.41585067138671875000e0 * t849 - 0.35019003906250000000e0 * t851 + 0.16008687500000000000e0 * t853);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t827 + 0.5e1 / 0.3e1 * t341 * t828 * t63 + t835 - t838 + t839 - 0.5e1 / 0.6e1 * t123 * t840 * t63 - t847 + t857;

  t858 = t105 * t101;
  t860 = 0.2e1 * t315 * t858;
  t867 = 0.6e1 * t67 * t408 * t858 * t85;
  t870 = 0.2e1 * t67 * t746 * t101;
  t873 = 0.2e1 * t67 * t260 * t252;
  t874 = t111 * t296;
  t875 = t296 * t11;
  t879 = t158 * t296;
  t882 = 0.2e1 * t67 * t879 * t85;
  t888 = t67 * t69 * (-0.83170134277343750000e0 * t849 - 0.70038007812500000000e0 * t851 + 0.32017375000000000000e0 * t853);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[1] = -t860 + 0.5e1 / 0.3e1 * t341 * t858 * t108 + t867 - t870 - t873 + t874 - 0.5e1 / 0.6e1 * t123 * t875 * t63 - t882 + t888;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[2] = v3rhosigma2[0];

  t890 = 0.2e1 * t315 * t299;
  t891 = t299 * t11;
  t895 = t408 * t299;
  t898 = 0.6e1 * t67 * t895 * t85;
  t901 = 0.4e1 * t67 * t260 * t267;
  t902 = t111 * t305;
  t903 = t305 * t11;
  t907 = t158 * t305;
  t910 = 0.2e1 * t67 * t907 * t85;
  t916 = t67 * t69 * (-0.16634026855468750000e1 * t849 - 0.14007601562500000000e1 * t851 + 0.64034750000000000000e0 * t853);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[3] = -t890 + 0.5e1 / 0.3e1 * t341 * t891 * t63 + t898 - t901 + t902 - 0.5e1 / 0.6e1 * t123 * t903 * t63 - t910 + t916;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[4] = v3rhosigma2[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[5] = v3rhosigma2[2];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[6] = -t827 + 0.5e1 / 0.3e1 * t341 * t828 * t92 + t835 - t838 + t839 - 0.5e1 / 0.6e1 * t123 * t840 * t92 - t847 + t857;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[7] = -t860 + 0.5e1 / 0.3e1 * t341 * t858 * t184 + t867 - t870 - t873 + t874 - 0.5e1 / 0.6e1 * t123 * t875 * t92 - t882 + t888;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[8] = v3rhosigma2[6];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[9] = -t890 + 0.5e1 / 0.3e1 * t341 * t891 * t92 + t898 - t901 + t902 - 0.5e1 / 0.6e1 * t123 * t903 * t92 - t910 + t916;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[10] = v3rhosigma2[7];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[11] = v3rhosigma2[8];

  t943 = t29 * t284 * t21;
  t945 = t16 * t16;
  t948 = t163 / t945 * t72;
  t953 = t74 / t17 / t945 * t25;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.6e1 * t67 * t408 * t276 * t101 - 0.6e1 * t67 * t241 * t288 + t67 * t69 * (0.15594400177001953125e0 * t943 - 0.39396379394531250000e0 * t948 + 0.18009773437500000000e0 * t953);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[1] = 0.6e1 * t67 * t742 * t276 - 0.4e1 * t67 * t879 * t101 - 0.2e1 * t67 * t260 * t288 + t67 * t69 * (0.31188800354003906250e0 * t943 - 0.78792758789062500000e0 * t948 + 0.36019546875000000000e0 * t953);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[2] = v3sigma3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[3] = 0.6e1 * t67 * t895 * t101 - 0.4e1 * t67 * t260 * t296 - 0.2e1 * t67 * t907 * t101 + t67 * t69 * (0.62377600708007812500e0 * t943 - 0.15758551757812500000e1 * t948 + 0.72039093750000000000e0 * t953);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[4] = v3sigma3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[5] = v3sigma3[2];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[6] = 0.6e1 * t67 * t408 * t299 * t105 - 0.6e1 * t67 * t260 * t305 + t67 * t69 * (0.12475520141601562500e1 * t943 - 0.31517103515625000000e1 * t948 + 0.14407818750000000000e1 * t953);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[7] = v3sigma3[3];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[8] = v3sigma3[4];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[9] = v3sigma3[5];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}
