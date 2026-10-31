/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00422174 */

int __fastcall FUN_00422174(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  if (param_1 == (int *)0x0) {
    local_18 = 0x21;
  }
  else if (param_2 == 0) {
    local_18 = 6;
  }
  else {
    *param_4 = 0;
    iVar1 = *param_1;
    puVar2 = FUN_0041c507(iVar1,0x28,&local_18);
    if (local_18 == 0) {
      FUN_0041d023(puVar2,param_2,param_3);
      puVar2[3] = iVar1;
      puVar2[6] = &LAB_00422203;
      *param_4 = puVar2;
      local_18 = 0;
    }
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

