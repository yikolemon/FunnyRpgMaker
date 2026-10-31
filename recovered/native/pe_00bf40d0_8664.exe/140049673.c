/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140049673 */

void FUN_140049673(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  int local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  uVar2 = 4;
  if (param_2 < 4) {
    uVar2 = param_2;
  }
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_140021867(*(int *)(param_3 + uVar3 * 4));
      local_48[uVar3] = (int)uVar1 >> 0x10;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  FUN_140049232(param_1,uVar2,(longlong)local_48);
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_68);
}

