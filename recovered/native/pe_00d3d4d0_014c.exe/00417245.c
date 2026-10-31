/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00417245 */

undefined8 __cdecl FUN_00417245(byte *param_1,byte *param_2,undefined8 param_3,size_t param_4)

{
  undefined8 uVar1;
  
  if ((int)param_4 < 0) {
    param_4 = 6;
  }
  else if (999999999 < param_4) {
    return CONCAT44(0x84,param_2);
  }
  uVar1 = FUN_00415c17(param_1,param_2,(uint)param_3,(uint)((ulonglong)param_3 >> 0x20),param_4);
  return uVar1;
}

