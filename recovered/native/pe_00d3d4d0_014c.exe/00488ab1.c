/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488ab1 */

/* Library Function - Single Match
    ___acrt_uninitialize
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __cdecl ___acrt_uninitialize(char param_1)

{
  undefined1 uVar1;
  
  if (param_1 != '\0') {
    if (DAT_005216c4 != 0) {
      __flushall();
    }
    return 1;
  }
  uVar1 = ___acrt_execute_uninitializers(0x4f7c10,0x4f7c90);
  return uVar1;
}

