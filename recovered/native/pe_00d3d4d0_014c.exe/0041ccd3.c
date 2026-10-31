/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ccd3 */

void __cdecl FUN_0041ccd3(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0050e8c0 ^ (uint)&local_8;
  local_8 = param_1;
  FUN_0041cd15(param_2);
  if (DAT_0050e8c0 == (local_4 ^ (uint)&local_8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_4 ^ (uint)&local_8);
}

