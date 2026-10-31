/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107ce0 */

undefined8 FUN_140107ce0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    lVar4 = FUN_14011d6e0();
    if (0 < *(int *)(lVar4 + 0x30)) {
      lVar4 = FUN_14011d6e0();
      *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    lVar4 = FUN_14011d6e0();
    *(int **)(lVar4 + 0x20) = piVar2;
    uVar3 = param_1[1];
    lVar4 = FUN_14011d6e0();
    *(undefined8 *)(lVar4 + 0x28) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_14011c8b8();
  }
  return 0;
}

