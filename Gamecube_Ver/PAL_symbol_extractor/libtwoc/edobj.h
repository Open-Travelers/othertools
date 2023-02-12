#ifndef _edobj_h_
#define _edobj_h_
#include "common.h"
extern unk edobj_base_scene;
extern unk edobj_particle_mode;
extern unk edobj_sound_mode;
extern unk edobj_nearest;
extern unk edobj_cam_pos;
extern unk edobj_next_instance;
extern unk edobj_waypoint_mode;
extern unk edobj_copy_mode;
extern unk edobj_cursor_matrix;
extern void edobjResetAnimsToZero(void /* TODO */);
extern void edobjRegisterBaseScene(void /* TODO */);
extern void edobjObjectReset(void /* TODO */);
extern void edobjFileLoadObjects(void /* TODO */);
extern void edobjUpdateObjects(void /* TODO */);
extern void edobjRenderObjects(void /* TODO */);
extern void edobjPlayerObjectDistance(void /* TODO */);
extern void edobjParticleDestroy(void /* TODO */);
extern void edobjSoundDestroy(void /* TODO */);
extern void edobjRenderCutoffTest(void /* TODO */);
extern void edobjLookupInstanceIndex(void /* TODO */);
extern void edobjDetermineNearestObject(void /* TODO */);
extern void edobjConvertPathToAnim(void /* TODO */);
extern void edobjLookupInstance(void /* TODO */);
#endif
