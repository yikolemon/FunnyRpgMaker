/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef042 */

void FUN_1801ef042(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  if (uVar1 < *(ushort *)(param_1 + 0x298)) {
    lVar3 = *(longlong *)(param_1 + 0x2a0);
    if ((*(int *)(param_1 + 0x1d8) == 3) && (lVar3 != *(longlong *)(param_1 + 0x2b0))) {
      local_40 = &local_2c;
      local_48 = *(longlong *)(param_1 + 0x2b0);
      uVar2 = FUN_1801cc8d6(*(undefined8 *)(param_1 + 0x10),4,*(undefined2 *)(param_1 + 0x2a8));
      *(undefined8 *)(param_1 + 0x2b0) = uVar2;
      *(int *)(param_1 + 0x20) = local_2c;
      if (local_2c != 0) goto LAB_1801ef10e;
      *(ushort *)(param_1 + 0x2a8) = *(ushort *)(param_1 + 0x298);
      FUN_1802a82f0(uVar2,*(undefined8 *)(param_1 + 0x2a0),
                    (ulonglong)*(ushort *)(param_1 + 0x298) << 2);
      lVar3 = *(longlong *)(param_1 + 0x2b0);
      *(longlong *)(param_1 + 0x2a0) = lVar3;
    }
    *(uint *)(lVar3 + (ulonglong)uVar1 * 4) = param_2[1];
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
LAB_1801ef10e:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

