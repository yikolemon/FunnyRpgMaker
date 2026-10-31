/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140078cf5 */

uint FUN_140078cf5(longlong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      uVar3 = FUN_140071cf0(param_1,uVar4,&local_38);
      if ((int)uVar3 == 0) {
        iVar2 = strcmp(param_2,local_38);
        if (iVar2 == 0) goto LAB_140078d4c;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  uVar4 = 0;
LAB_140078d4c:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

