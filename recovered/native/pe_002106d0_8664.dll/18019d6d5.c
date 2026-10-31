/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019d6d5 */

void FUN_18019d6d5(ulonglong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = DAT_18041ef10 + param_2;
  if (uVar1 <= DAT_18041ef00) {
    if (param_1 < DAT_18041ef08) {
      uVar1 = DAT_18041ef00 + 1;
    }
    else {
      lVar2 = 0;
      do {
        *(undefined1 *)(DAT_18041ef10 + lVar2) = *(undefined1 *)(param_1 + lVar2);
        lVar2 = lVar2 + 1;
      } while (param_2 != (uint)lVar2);
      uVar1 = DAT_18041ef10 + lVar2;
    }
  }
  DAT_18041ef10 = uVar1;
  return;
}

