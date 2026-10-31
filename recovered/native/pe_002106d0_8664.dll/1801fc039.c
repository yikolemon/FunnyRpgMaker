/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fc039 */

void FUN_1801fc039(undefined8 param_1,uint param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  int local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar2 = 4;
  if (param_2 < 4) {
    uVar2 = (ulonglong)param_2;
  }
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1801cf464(*(undefined4 *)(param_3 + uVar3 * 4));
      local_48[uVar3] = iVar1 >> 0x10;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  FUN_1801fbbf8(param_1,uVar2,local_48);
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

