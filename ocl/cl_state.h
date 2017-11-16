#ifndef CL_STATE_H
#define CL_STATE_H
#include <CL/cl.h>

typedef struct __clState {
  cl_context context;
  cl_kernel kernel;
  cl_kernel *extra_kernels;
  size_t n_extra_kernels;
  cl_command_queue commandQueue;
  cl_program program;
  cl_mem outputBuffer;
  cl_mem CLbuffer0;
  cl_mem MidstateBuf;
  cl_mem padbuffer8;
  cl_mem buffer1;
  cl_mem buffer2;
  cl_mem buffer3;
  unsigned char cldata[256];
  bool goffset;
  cl_uint vwidth;
  size_t max_work_size;
  size_t wsize;
  size_t compute_shaders;
} _clState;

#endif // !CL_STATE_H

