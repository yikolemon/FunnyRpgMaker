/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011cc1f */

int __fastcall FUN_1011cc1f(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  iVar3 = FUN_1011b528(param_1,*(undefined4 *)(param_2 + 0x438));
  if (iVar3 == 0) {
    iVar3 = FUN_1011b94c();
    *(uint *)(iVar3 + 0xa8) = *(uint *)(iVar3 + 0xa8) & 0xfffffe00 | 0x92;
    *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_1 + 4);
  }
  else if (*(int *)(iVar3 + 0x1c) != 0) {
    FUN_10118c2f(param_1,param_2,1);
    return 0;
  }
  bVar6 = *(byte *)(iVar3 + 0xac);
  iVar2 = iVar3;
  if ((bVar6 & 1) == 0) {
    do {
      iVar4 = iVar2;
      iVar5 = iVar4;
      if ((*(byte *)(iVar4 + 0xac) & 1) != 0) break;
      iVar2 = *(int *)(iVar4 + 0x18);
    } while (*(int *)(iVar4 + 0x18) != 0);
    do {
      piVar1 = (int *)(iVar5 + 0x18);
      iVar5 = *piVar1;
    } while (*piVar1 != 0);
    FUN_10129d0e();
    FUN_10129d4e(*(undefined4 *)(iVar4 + 0x40));
    bVar6 = *(byte *)(iVar3 + 0xac);
  }
  FUN_10129877(1);
  *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) & 0xfe | bVar6 & 1;
  return iVar3;
}

