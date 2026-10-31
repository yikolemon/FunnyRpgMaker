/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484000 */

undefined4 __cdecl FUN_00484000(char param_1,char param_2)

{
  undefined4 in_EAX;
  
  if ((DAT_0051bef4 == '\0') || (param_2 == '\0')) {
    ___acrt_uninitialize(param_1);
    in_EAX = FUN_00485850(param_1);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

