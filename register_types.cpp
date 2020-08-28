#include "register_types.h"

#include "core/class_db.h"
#include "gdnative/gdnative.h"
#include "gd_videodecoder.h"

// Defined in gdnative_api_struct.gen.cpp
extern const godot_gdnative_core_api_struct api_struct;
// Register all formats
extern "C" void av_register_all(void);

void register_gd_ffmpeg_types() {
	av_register_all();
	gdffmpeg_init(&api_struct);
}

void unregister_gd_ffmpeg_types() {
	gdffmpeg_terminate(&api_struct);
}
