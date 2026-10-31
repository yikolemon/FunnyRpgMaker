/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015186c */

ulonglong FUN_14015186c(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  pcVar2 = (char *)*param_2;
  if (*pcVar2 == '\x1e') {
    uVar4 = FUN_14015190b(pcVar2,*(undefined8 *)(param_1 + 0x10),0,param_3);
    return uVar4;
  }
  iVar3 = FUN_140151cd1(pcVar2,*(undefined8 *)(param_1 + 0x10));
  if (iVar3 < 0x8000) {
    *param_3 = 0;
    return (ulonglong)(uint)(iVar3 << 0x10);
  }
  lVar6 = 5;
  do {
    if (iVar3 < *(int *)(&DAT_140e9ded0 + lVar6 * 4)) goto LAB_1401518c3;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 10);
  lVar6 = 10;
LAB_1401518c3:
  iVar5 = (int)lVar6;
  iVar1 = *(int *)(&DAT_140e9debc + (longlong)iVar5 * 4);
  if (iVar3 / iVar1 < 0x8000) {
    *param_3 = iVar5 + -5;
  }
  else {
    *param_3 = iVar5 + -4;
    iVar1 = *(int *)(&DAT_140e9dec0 + (longlong)iVar5 * 4);
  }
  uVar4 = FUN_14012b378(iVar3,iVar1);
  return uVar4;
}

