/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003ba77 */

void FUN_14003ba77(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStackY_68 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x3c) < iVar2) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar2;
    uVar1 = FUN_1400463fb(param_1,&local_34,&local_38,0,(uint *)0x0);
    if ((char)uVar1 != '\0') goto LAB_14003bae6;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      param_2 = param_2 + -1;
      if (*param_2 < (uint)*(ushort *)(param_1 + 0xb0)) {
        FUN_1400464dc(param_1,*param_2,local_34,local_38);
      }
      else if (*(char *)(param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x86;
        goto LAB_14003bae6;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = 1;
LAB_14003bae6:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStackY_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStackY_68);
  }
  return;
}

