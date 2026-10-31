/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140089d75 */

void FUN_140089d75(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  iVar4 = *(int *)param_1[1] + iVar1;
  iVar5 = piVar2[1];
  if (iVar5 < iVar4) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    uVar3 = FUN_140077ab4((longlong)iVar5 << 3);
    if (*(longlong *)(piVar2 + 2) != 0) {
      FUN_1401c5180(uVar3,*(longlong *)(piVar2 + 2),(longlong)*piVar2 << 3);
      FUN_140077b90(*(undefined8 *)(piVar2 + 2));
    }
    *(undefined8 *)(piVar2 + 2) = uVar3;
    piVar2[1] = iVar5;
  }
  *piVar2 = iVar4;
  piVar2 = (int *)param_1[1];
  if ((longlong)*piVar2 != 0) {
    FUN_1401c5180((longlong)iVar1 * 8 + *(longlong *)(*param_1 + 8),*(undefined8 *)(piVar2 + 2),
                  (longlong)*piVar2 << 3);
    if (piVar2[1] < 0) {
      uVar3 = FUN_140077ab4(0);
      if (*(longlong *)(piVar2 + 2) != 0) {
        FUN_1401c5180(uVar3,*(longlong *)(piVar2 + 2),(longlong)*piVar2 << 3);
        FUN_140077b90(*(undefined8 *)(piVar2 + 2));
      }
      *(undefined8 *)(piVar2 + 2) = uVar3;
      piVar2[1] = 0;
    }
    *piVar2 = 0;
  }
  return;
}

