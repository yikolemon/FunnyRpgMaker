/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140106896 */

undefined8 FUN_140106896(longlong param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 0x400000) {
    piVar2 = *(int **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x34);
    iVar4 = piVar2[1];
    if (iVar4 < iVar1) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      uVar3 = FUN_140077ab4((longlong)iVar4);
      if (*(longlong *)(piVar2 + 2) != 0) {
        FUN_1401c5180(uVar3,*(longlong *)(piVar2 + 2),(longlong)*piVar2);
        FUN_140077b90(*(undefined8 *)(piVar2 + 2));
      }
      *(undefined8 *)(piVar2 + 2) = uVar3;
      piVar2[1] = iVar4;
    }
    else {
      uVar3 = *(undefined8 *)(piVar2 + 2);
    }
    *piVar2 = iVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
  }
  return 0;
}

