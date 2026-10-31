/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013db2f */

void FUN_14013db2f(longlong param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x3c) < iVar2) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar2;
    local_48 = 0;
    cVar1 = FUN_1401484b3(param_1,&local_34,&local_38,0);
    if (cVar1 != '\0') goto LAB_14013db9e;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      param_2 = param_2 + -1;
      if (*param_2 < (uint)*(ushort *)(param_1 + 0xb0)) {
        FUN_140148594(param_1,*param_2,local_34,local_38);
      }
      else if (*(char *)(param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x86;
        goto LAB_14013db9e;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = 1;
LAB_14013db9e:
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
  }
  return;
}

