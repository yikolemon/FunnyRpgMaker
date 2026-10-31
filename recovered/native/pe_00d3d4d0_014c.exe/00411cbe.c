/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00411cbe */

undefined4 * __cdecl
FUN_00411cbe(undefined4 *param_1,undefined4 *param_2,ushort param_3,int param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_10;
  if (((param_6 & 0xff) == 0) || ((param_6 & 0xff) == 99)) {
    FUN_004123b5(param_1,param_2,&param_3,1,&param_4);
  }
  else {
    FUN_00411ff2(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_10)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_10);
}

