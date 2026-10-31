/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042188d */

uint * __cdecl FUN_0042188d(int param_1,uint *param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  puVar1 = (uint *)FUN_0041e773(param_1,param_3,&local_18);
  if (((param_3 != 0) && (param_2 != (uint *)0x0)) && (local_18 == 0)) {
    FUN_004878c0(puVar1,param_2,param_3);
  }
  *param_4 = local_18;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

