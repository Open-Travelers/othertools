#ifndef _edanim_h_
#define _edanim_h_
#include "common.h"
extern unk edanim_base_scene;
extern unk edanim_emitrotz;
extern unk edanim_emitroty;
extern unk edanim_nearest_param_id;
extern unk edanim_particle_mode;
extern unk edanim_sound_mode;
extern unk edanim_nearest;
extern unk edanim_cam_pos;
extern unk edanim_next_param;
extern unk edanim_mtl;
extern unk edanim_mtl_zoff;
extern unk edanim_cam_dist;
extern unk edanim_cam_ax;
extern unk edanim_cam_ay;
extern unk edanim_nearest_particle;
extern unk edanim_nearest_sound;
extern unk edanim_particle_type;
extern unk edanim_sound_type;
extern void edanimRegisterBaseScene(void /* TODO */);
extern void edanimParamReset(void /* TODO */);
extern void edanimFileLoad(void /* TODO */);
extern void edanimUpdateObjects(void /* TODO */);
extern void edanimPlayerAnimDistance(void /* TODO */);
extern void edanimParticleDestroy(void /* TODO */);
extern void edanimSoundDestroy(void /* TODO */);
extern void edanimDetermineNearestAnim(void /* TODO */);
extern void edanimLookupSpecial(void /* TODO */);
extern void edanimLookupInstanceIndex(void /* TODO */);
#endif
