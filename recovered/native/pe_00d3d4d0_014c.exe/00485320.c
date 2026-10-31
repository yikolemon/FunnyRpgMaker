/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485320 */

/* Library Function - Single Match
    __CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  PVOID pvVar1;
  
  *param_1 = param_2;
  pvVar1 = FUN_00494580();
  param_1[1] = *(undefined4 *)((int)pvVar1 + 0x24);
  pvVar1 = FUN_00494580();
  *(undefined4 **)((int)pvVar1 + 0x24) = param_1;
  return param_1;
}

