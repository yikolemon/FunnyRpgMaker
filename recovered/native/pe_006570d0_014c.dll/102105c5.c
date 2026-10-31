/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102105c5 */

void __thiscall FUN_102105c5(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_18;
  for (iVar2 = *(int *)(param_1 + 0x18); iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar1 = FUN_1021068f();
    if (((iVar1 != 0) || (iVar1 = FUN_1021068f(), iVar1 != 0)) ||
       (iVar1 = FUN_1021068f(), iVar1 != 0)) goto LAB_10210639;
  }
  iVar2 = FUN_102104e8(local_18);
  if (iVar2 == 0) {
LAB_10210639:
    iVar2 = FUN_10210444(param_4);
    if ((iVar2 == 0) && (iVar2 = FUN_10210444(param_4), iVar2 == 0)) {
      FUN_10210444(param_4);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

