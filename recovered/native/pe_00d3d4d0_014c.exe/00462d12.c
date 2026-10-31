/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462d12 */

int __fastcall FUN_00462d12(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == *(int *)(param_1 + 8)) {
    FUN_00461f8a(*(int **)(param_1 + 4),0xa1);
    return 0;
  }
  *(int *)(param_1 + 0xc) = iVar1 + -8;
  iVar2 = *(int *)(iVar1 + -8);
  if (*(int *)(iVar1 + -4) == 1) {
    iVar2 = iVar2 + (iVar2 >> 0x1f) + 0x2000 >> 0xe;
  }
  else if (*(int *)(iVar1 + -4) == 2) {
    return iVar2 << 0x10;
  }
  return iVar2;
}

