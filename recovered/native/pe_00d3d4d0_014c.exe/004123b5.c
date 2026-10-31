/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004123b5 */

undefined4 * __cdecl
FUN_004123b5(undefined4 *param_1,undefined4 *param_2,ushort *param_3,int param_4,int *param_5)

{
  ushort *local_24;
  int local_20;
  ushort *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  if ((param_5[1] < 0) && (*param_5 < 1)) {
    FUN_00410712(param_1,param_2,param_3,param_4);
  }
  else {
    local_18 = param_5[1];
    local_1c = FUN_00412ac1(param_3,param_4,&local_18);
    local_24 = param_3;
    local_20 = param_4;
    FUN_00412bad(param_1,param_2,local_18,param_5,'\x01',&local_24);
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_24)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_24);
}

