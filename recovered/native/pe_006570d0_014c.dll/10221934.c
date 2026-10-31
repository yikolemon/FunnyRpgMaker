/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10221934 */

void __fastcall FUN_10221934(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  if ((param_1 != 0) && (iVar1 = *param_2, iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 8);
    if (iVar2 != 0) {
      do {
        iVar1 = *(int *)(iVar2 + 0x24);
        local_18 = iVar2;
        FUN_10221abd();
        iVar2 = iVar1;
      } while (iVar1 != 0);
      iVar1 = *param_2;
    }
    FUN_101c0017(param_1,iVar1);
    *param_2 = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

