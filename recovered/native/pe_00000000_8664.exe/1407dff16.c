/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407dff16 */

void FUN_1407dff16(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *unaff_R14;
  undefined8 unaff_R15;
  
  uVar5 = (ulonglong)param_1 & 0xffffffff;
  uVar3 = *param_1 * 0x40;
  uVar4 = (ulonglong)(param_1[2] + uVar3);
  iVar2 = *(int *)(((ulonglong)(uint)param_1[2] - 0x18) + (ulonglong)uVar3);
  if ((iVar2 != 0) &&
     ((*(int *)(uVar4 - 0x28) != *(int *)(uVar5 + 0x60) ||
       *(int *)(uVar4 - 0x24) != *(int *)(uVar5 + 100) ||
      (*(int *)(uVar4 - 0x30) != *(int *)(uVar5 + 0x58))))) {
    FUN_1407dfc44(uVar5);
    return;
  }
  if (*(int *)(uVar4 - 0x14) == 0) {
    if ((((1 < *param_1) && (iVar2 == 0)) && (iVar2 = FUN_1408b14b0(), iVar2 == 0)) &&
       ((*(int *)(uVar4 - 0x58) + *(int *)(uVar4 - 0x5c) == *(int *)(uVar4 - 0x1c) &&
        (*(int *)(uVar4 - 0x54) == 0)))) {
      *unaff_R14 = unaff_R15;
      return;
    }
    uVar1 = *(undefined8 *)(uVar5 + 0x60);
    *(undefined8 *)(uVar4 - 0x30) = *(undefined8 *)(uVar5 + 0x58);
    *(undefined8 *)(uVar4 - 0x28) = uVar1;
  }
  return;
}

