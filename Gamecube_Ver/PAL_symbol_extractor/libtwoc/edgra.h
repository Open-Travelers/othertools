#ifndef _edgra_h_
#define _edgra_h_
#include "common.h"
extern unk edgra_clumps_used;
extern unk edgra_units_used;
extern unk edgra_next_clump;
extern unk edgra_nearest;
extern unk edgra_cam_pos;
extern unk edgra_mtl;
extern unk edgra_mtl_zoff;
extern unk edgra_cam_dist;
extern unk edgra_cam_ax;
extern unk edgra_cam_ay;
extern unk edgra_radius;
extern unk edgra_instance_type;
extern unk edgra_clump_size;
extern void edgraClumpsReset(void /* TODO */);
extern void edgraFileLoad(void /* TODO */);
extern void edgraInitAllClumps(void /* TODO */);
extern void edgraDetermineNearestClump(void /* TODO */);
#endif
