/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c0b92 */

undefined8 FUN_1801c0b92(longlong param_1)

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
      uVar3 = FUN_1800fe7f8((longlong)iVar4);
      if (*(longlong *)(piVar2 + 2) != 0) {
        FUN_1802a82f0(uVar3,*(longlong *)(piVar2 + 2),(longlong)*piVar2);
        FUN_1800fe8d4(*(undefined8 *)(piVar2 + 2));
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

