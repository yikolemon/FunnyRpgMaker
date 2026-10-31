/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040774a */

undefined4 * __cdecl FUN_0040774a(undefined4 *param_1,uint *param_2,int param_3,undefined4 *param_4)

{
  undefined4 auStack_18 [3];
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)auStack_18;
  thunk_FUN_00417b21(auStack_18,param_4);
  FUN_0040b36e(param_1,param_2,param_3,1,(int)auStack_18);
  if (DAT_0050e8c0 == (local_c ^ (uint)auStack_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)auStack_18);
}

