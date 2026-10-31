/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008fd3c */

ushort __thiscall FUN_1008fd3c(undefined4 param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  ushort uVar2;
  wchar_t *pwVar3;
  ushort uVar4;
  int iVar5;
  
  pwVar3 = L"alnum";
  iVar5 = -0xf0;
  do {
    if (param_3 - param_2 == *(int *)(&UNK_1028f9cc + iVar5) * 2) {
      cVar1 = FUN_1008fda5(param_2,param_3,pwVar3,param_1);
      if (cVar1 != '\0') {
        uVar4 = *(ushort *)(&UNK_1028f9d0 + iVar5);
        goto LAB_1008fd8b;
      }
    }
    pwVar3 = *(wchar_t **)(&UNK_1028f9d8 + iVar5);
    iVar5 = iVar5 + 0x10;
  } while (iVar5 != 0);
  uVar4 = 0;
LAB_1008fd8b:
  uVar2 = uVar4 | 3;
  if ((uVar4 & 3) == 0) {
    uVar2 = uVar4;
  }
  if (param_4 == '\0') {
    uVar2 = uVar4;
  }
  return uVar2;
}

