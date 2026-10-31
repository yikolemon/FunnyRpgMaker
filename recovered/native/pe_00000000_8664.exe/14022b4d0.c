/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022b4d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022b4d0(longlong *param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  if (param_4 == 0) {
LAB_14022b56b:
    if (ram0x000140613b10 == (local_38 ^ (ulonglong)auStack_68)) {
      return;
    }
  }
  else {
    uVar4 = (ulonglong)((uint)*param_2 & 7);
    uVar3 = 8 - uVar4;
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    if (param_4 * 8 <= *param_3 - uVar3 && uVar3 <= *param_3) {
      *param_2 = *param_2 + uVar3;
      *param_3 = *param_3 - uVar3;
      lVar1 = *param_2;
      if (lVar1 != 0) {
        lVar2 = lVar1 + param_4 * 8;
        local_40 = (longlong *)0x0;
        FUN_14022b66c(lVar1,lVar2);
        *(undefined1 *)(param_1 + 2) = 0;
        *param_1 = lVar1;
        param_1[1] = lVar2;
        *param_2 = *param_2 + param_4 * 8;
        *param_3 = *param_3 + param_4 * -8;
        goto LAB_14022b56b;
      }
    }
    if (ram0x000140613b10 == (local_38 ^ (ulonglong)auStack_68)) {
      if (param_4 >> 0x3d == 0) {
        lVar2 = FUN_1402128b0(param_4 * 8);
        lVar1 = lVar2 + param_4 * 8;
        local_40 = param_1;
        local_38 = lVar2;
        FUN_1402276eb(lVar2,lVar1);
        param_1[1] = lVar1;
        *(undefined1 *)(param_1 + 2) = 1;
        *param_1 = lVar2;
        local_38 = 0;
        FUN_14022b6d6(&local_40);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14044af80(0xc);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_38 ^ (ulonglong)auStack_68);
}

