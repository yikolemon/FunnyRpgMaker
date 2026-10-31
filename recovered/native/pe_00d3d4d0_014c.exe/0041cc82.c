/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041cc82 */

void __cdecl FUN_0041cc82(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  local_10 = param_1;
  FUN_0041cbde(param_2,param_3,param_1,param_4,'\0');
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_10);
}

