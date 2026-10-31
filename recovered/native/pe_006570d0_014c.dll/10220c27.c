/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10220c27 */

void __fastcall FUN_10220c27(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  piVar3 = (int *)*param_1;
  if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != 0)) {
    iVar4 = piVar3[1];
    if (iVar4 != 0) {
      do {
        iVar2 = *(int *)(iVar4 + 0xc);
        local_18 = iVar4;
        FUN_10221934();
        iVar4 = iVar2;
      } while (iVar2 != 0);
      piVar3 = (int *)*param_1;
    }
    FUN_101c0017(iVar1,piVar3);
    *param_1 = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

