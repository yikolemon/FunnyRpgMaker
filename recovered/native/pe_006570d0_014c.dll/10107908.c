/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10107908 */

void FUN_10107908(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_1039d74c;
  if (param_1 == 0) {
    iVar2 = *(int *)(DAT_1039d74c + 0x1490) + -1;
  }
  else {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
      iVar3 = -1;
    }
    else {
      do {
        param_1 = *(int *)(param_1 + 0x3a0);
      } while ((*(byte *)(param_1 + 0xf) & 1) != 0);
      iVar3 = 0;
    }
    iVar2 = FUN_101170b3();
    iVar2 = iVar2 + iVar3;
  }
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    do {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x1498) + -4 + iVar2 * 4);
      if ((((iVar3 != param_2) && (*(char *)(iVar3 + 0xfa) == '\x01')) &&
          ((param_3 == 0 || (*(int *)(iVar3 + 0x3c) == param_3)))) &&
         ((~*(uint *)(iVar3 + 0xc) & 0x10200) != 0)) goto LAB_10107988;
      iVar2 = iVar2 + -1;
    } while (0 < iVar2);
  }
  iVar3 = 0;
LAB_10107988:
  FUN_101034e2(iVar3,param_4);
  return;
}

