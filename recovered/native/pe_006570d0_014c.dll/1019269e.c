/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019269e */

void __fastcall FUN_1019269e(undefined4 param_1,int param_2)

{
  uint uVar1;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_1c;
  *(undefined4 *)(param_2 + 0x14) = 0;
  if ((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 8) == 0)) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  else {
    FUN_10195412(*(int *)(param_2 + 4),*(int *)(param_2 + 8));
    if (local_14 == 0) {
      *(undefined4 *)(param_2 + 0x10) = 0x7fffffff;
      *(undefined4 *)(param_2 + 0xc) = 0x7fffffff;
      uVar1 = 0;
      goto LAB_10192708;
    }
    *(int *)(param_2 + 0xc) = local_1c;
    *(int *)(param_2 + 0x10) = local_18;
    if (local_1c == 0x7fffffff) {
      uVar1 = (uint)(local_18 != 0x7fffffff);
      goto LAB_10192708;
    }
  }
  uVar1 = 1;
LAB_10192708:
  *(uint *)(param_2 + 0x14) = uVar1;
  if (DAT_10388d00 == (local_10 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

