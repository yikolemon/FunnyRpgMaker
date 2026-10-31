/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049836e */

/* Library Function - Single Match
    void (__cdecl** __cdecl get_global_action_nolock(int))(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_func_void_int ** __cdecl get_global_action_nolock(int param_1)

{
  if (param_1 == 2) {
    return (_func_void_int **)&DAT_00521ee0;
  }
  if (param_1 != 6) {
    if (param_1 == 0xf) {
      return (_func_void_int **)&DAT_00521eec;
    }
    if (param_1 == 0x15) {
      return (_func_void_int **)&DAT_00521ee4;
    }
    if (param_1 != 0x16) {
      return (_func_void_int **)0x0;
    }
  }
  return (_func_void_int **)&DAT_00521ee8;
}

