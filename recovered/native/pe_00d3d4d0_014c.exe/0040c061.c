/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c061 */

undefined4 * __cdecl
FUN_0040c061(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_20;
  
  local_20 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_30 = param_3;
  uStack_2c = param_4;
  uStack_28 = param_5;
  uStack_24 = param_6;
  FUN_0040c1c4(&local_30,param_1,param_2);
  if (DAT_0050e8c0 == (local_20 ^ (uint)&stack0xfffffffc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_20 ^ (uint)&stack0xfffffffc);
}

