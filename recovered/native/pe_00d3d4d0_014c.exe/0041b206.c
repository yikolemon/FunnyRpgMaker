/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b206 */

void FUN_0041b206(int param_1,undefined4 param_2,undefined *param_3)

{
  uint local_4;
  
  local_4 = DAT_0050e8c0 ^ (uint)&local_4;
  FUN_0041b245(param_1,1,(int)&param_2,param_3);
  if (DAT_0050e8c0 == (local_4 ^ (uint)&local_4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_4 ^ (uint)&local_4);
}

