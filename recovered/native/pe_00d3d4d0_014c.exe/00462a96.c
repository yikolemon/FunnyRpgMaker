/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462a96 */

undefined4 __fastcall FUN_00462a96(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == *(int *)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 4);
    iVar2 = 0xa1;
  }
  else {
    if (*(int *)(iVar2 + -4) == 2) {
      *(int *)(param_1 + 0xc) = iVar2 + -8;
      return *(undefined4 *)(iVar2 + -8);
    }
    piVar1 = *(int **)(param_1 + 4);
    iVar2 = 0xa0;
  }
  FUN_00461f8a(piVar1,iVar2);
  return 0;
}

