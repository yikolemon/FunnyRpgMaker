/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013e72e */

void FUN_14013e72e(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  if (uVar1 < *(ushort *)(param_1 + 0x298)) {
    lVar3 = *(longlong *)(param_1 + 0x2a0);
    if ((*(int *)(param_1 + 0x1d8) == 3) && (lVar3 != *(longlong *)(param_1 + 0x2b0))) {
      local_40 = &local_2c;
      local_48 = *(longlong *)(param_1 + 0x2b0);
      uVar2 = FUN_14012b8aa(*(undefined8 *)(param_1 + 0x10),4,*(undefined2 *)(param_1 + 0x2a8));
      *(undefined8 *)(param_1 + 0x2b0) = uVar2;
      *(int *)(param_1 + 0x20) = local_2c;
      if (local_2c != 0) goto LAB_14013e7fa;
      *(ushort *)(param_1 + 0x2a8) = *(ushort *)(param_1 + 0x298);
      FUN_1401c5180(uVar2,*(undefined8 *)(param_1 + 0x2a0),
                    (ulonglong)*(ushort *)(param_1 + 0x298) << 2);
      lVar3 = *(longlong *)(param_1 + 0x2b0);
      *(longlong *)(param_1 + 0x2a0) = lVar3;
    }
    *(uint *)(lVar3 + (ulonglong)uVar1 * 4) = param_2[1];
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
LAB_14013e7fa:
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_68);
}

