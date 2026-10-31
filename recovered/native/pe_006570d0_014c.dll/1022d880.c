/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d880 */

undefined4 FUN_1022d880(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  piVar2 = *(int **)(iVar1 + 0x20);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(iVar1 + 0x28);
  }
  else {
    iVar3 = *piVar2;
    if (iVar3 != 0x1e) goto LAB_1022d8e1;
    piVar2 = (int *)FUN_1026faa0(0x80);
    thunk_FUN_10274120(0);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar2[1] = *(int *)(iVar1 + 0x20);
  }
  iVar3 = 0;
  *(int **)(iVar1 + 0x20) = piVar2;
  *piVar2 = 0;
LAB_1022d8e1:
  piVar2[iVar3 + 2] = param_1;
  *piVar2 = *piVar2 + 1;
  return 0;
}

