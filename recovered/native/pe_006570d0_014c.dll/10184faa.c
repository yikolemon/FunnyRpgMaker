/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10184faa */

void __fastcall FUN_10184faa(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  if (0 < (int)param_2) {
    do {
      uVar3 = param_2 - 1 >> 1;
      local_18 = *param_3;
      local_1c = *(undefined4 *)(param_1 + uVar3 * 4);
      piVar2 = (int *)FUN_1018315c(&local_1c);
      iVar1 = *piVar2;
      piVar2 = (int *)FUN_1018315c(&local_18);
      if (iVar1 <= *piVar2) goto LAB_10185007;
      *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + uVar3 * 4);
      param_2 = uVar3;
    } while (uVar3 != 0);
    param_2 = 0;
  }
LAB_10185007:
  *(undefined4 *)(param_1 + param_2 * 4) = *param_3;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

