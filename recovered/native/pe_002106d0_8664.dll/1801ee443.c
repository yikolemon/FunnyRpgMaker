/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ee443 */

void FUN_1801ee443(longlong param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x3c) < iVar2) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar2;
    local_48 = 0;
    cVar1 = FUN_1801f8dc7(param_1,&local_34,&local_38,0);
    if (cVar1 != '\0') goto LAB_1801ee4b2;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      param_2 = param_2 + -1;
      if (*param_2 < (uint)*(ushort *)(param_1 + 0xb0)) {
        FUN_1801f8ea8(param_1,*param_2,local_34,local_38);
      }
      else if (*(char *)(param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x86;
        goto LAB_1801ee4b2;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = 1;
LAB_1801ee4b2:
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
  }
  return;
}

