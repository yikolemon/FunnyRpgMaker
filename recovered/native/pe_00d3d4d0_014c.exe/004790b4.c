/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004790b4 */

void __fastcall FUN_004790b4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  if ((param_1 != 0) && (iVar1 = *param_2, iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 8);
    if (iVar2 != 0) {
      do {
        iVar1 = *(int *)(iVar2 + 0x24);
        local_18 = iVar2;
        FUN_0047923d(param_1,&local_18);
        iVar2 = iVar1;
      } while (iVar1 != 0);
      iVar1 = *param_2;
    }
    FUN_0041c607(param_1,iVar1);
    *param_2 = 0;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return;
}

