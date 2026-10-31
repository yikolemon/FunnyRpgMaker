/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004049a4 */

undefined4 * __cdecl FUN_004049a4(undefined4 *param_1,undefined4 *param_2)

{
  uint *local_18;
  uint local_14;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&stack0xffffffd8;
  FUN_00404a37(&local_18,param_2);
  FUN_00404a0d(param_1,local_18,local_14);
  if (DAT_0050e8c0 == (local_c ^ (uint)&stack0xffffffd8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&stack0xffffffd8);
}

