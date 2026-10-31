/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00415775 */

undefined8 __cdecl FUN_00415775(byte *param_1,byte *param_2,float param_3,size_t param_4)

{
  undefined4 uVar1;
  byte *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xffffffd8;
  if ((int)param_4 < 0) {
    param_4 = 6;
  }
  else {
    uVar1 = 0x84;
    if (999999999 < param_4) goto LAB_004157d2;
  }
  FUN_0040e692(&local_10,param_1,param_2,SUB84((double)param_3,0),
               (uint)((ulonglong)(double)param_3 >> 0x20),param_4);
  param_2 = local_10;
  uVar1 = local_c;
LAB_004157d2:
  if (DAT_0050e8c0 != (local_8 ^ (uint)&stack0xffffffd8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xffffffd8);
  }
  return CONCAT44(uVar1,param_2);
}

