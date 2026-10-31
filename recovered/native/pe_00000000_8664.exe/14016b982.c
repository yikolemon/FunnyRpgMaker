/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016b982 */

ulonglong FUN_14016b982(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(char *)(param_1 + 0x19) == '\0')) {
    lVar6 = (longlong)param_2 * (longlong)*(int *)(param_1 + 0x1c);
    return (lVar6 >> 0x3f) + lVar6 + 0x8000U >> 0x10;
  }
  uVar3 = *(uint *)(param_1 + 0x24);
  uVar2 = *(int *)(param_1 + 0x20) - 1;
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  uVar4 = (ulonglong)uVar2;
  piVar7 = (int *)((ulonglong)uVar3 * 0x20 + param_1 + 0x58);
  lVar6 = 0;
  do {
    if (uVar3 - uVar4 == lVar6) goto LAB_14016b9d6;
    lVar6 = lVar6 + -1;
    iVar1 = *piVar7;
    piVar7 = piVar7 + 8;
  } while (iVar1 <= param_2);
  uVar4 = (ulonglong)(~(uint)lVar6 + uVar3);
LAB_14016b9d6:
  uVar3 = (uint)uVar4;
  do {
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      if (param_2 < *(int *)(param_1 + 0x38)) {
        lVar6 = (longlong)(param_2 - *(int *)(param_1 + 0x38)) * (longlong)*(int *)(param_1 + 0x1c);
        return (ulonglong)
               (uint)((int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) +
                     *(int *)(param_1 + 0x3c));
      }
      uVar4 = 0;
LAB_14016ba47:
      lVar5 = uVar4 * 0x20;
      lVar6 = (longlong)(param_2 - *(int *)(param_1 + 0x38 + lVar5)) *
              (longlong)*(int *)(param_1 + 0x40 + lVar5);
      return (ulonglong)
             (uint)((int)((ulonglong)((lVar6 >> 0x3f) + lVar6 + 0x8000) >> 0x10) +
                   *(int *)(param_1 + 0x3c + lVar5));
    }
    if (*(int *)(param_1 + 0x38 + uVar4 * 0x20) <= param_2) {
      *(int *)(param_1 + 0x24) = (int)uVar4;
      goto LAB_14016ba47;
    }
    uVar3 = (int)uVar4 - 1;
    uVar4 = (ulonglong)uVar3;
  } while( true );
}

