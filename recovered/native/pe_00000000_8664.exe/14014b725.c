/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014b725 */

void FUN_14014b725(undefined8 param_1,uint param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  int local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar2 = 4;
  if (param_2 < 4) {
    uVar2 = (ulonglong)param_2;
  }
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_14012e438(*(undefined4 *)(param_3 + uVar3 * 4));
      local_48[uVar3] = iVar1 >> 0x10;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  FUN_14014b2e4(param_1,uVar2,local_48);
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

