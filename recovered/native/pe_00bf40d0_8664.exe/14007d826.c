/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007d826 */

undefined8 FUN_14007d826(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  uVar6 = (ulonglong)(int)uVar1;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (uVar6 == 0) {
    uVar6 = 0;
  }
  else if (param_3 <= *(int *)(lVar3 + uVar6 * 4)) goto LAB_14007d845;
  *(int *)(lVar3 + uVar6 * 4) = param_3;
LAB_14007d845:
  uVar7 = ~uVar1 + uVar6;
  do {
    uVar5 = uVar6;
    if (uVar5 == 0) goto LAB_14007d882;
    uVar6 = uVar5 - 1;
  } while (param_2 < *(int *)(lVar3 + -4 + uVar5 * 4));
  uVar7 = uVar6;
  if (((longlong)uVar5 < 1) || (*(int *)(lVar3 + (uVar6 & 0xffffffff) * 4) < param_2)) {
LAB_14007d882:
    uVar6 = *(longlong *)(param_1 + 0x28) - 4;
    *(ulonglong *)(param_1 + 0x28) = uVar6;
    if (uVar6 <= *(ulonglong *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x38) = 0x62;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    lVar4 = (longlong)(int)uVar7 + 1;
    do {
      iVar2 = *(int *)(lVar3 + -4 + lVar4 * 4);
      *(int *)(lVar3 + -4 + lVar4 * 4) = param_2;
      lVar4 = lVar4 + -1;
      param_2 = iVar2;
    } while (-1 < lVar4);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return 0;
}

