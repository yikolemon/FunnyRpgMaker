/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485350 */

void __cdecl FUN_00485350(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  PVOID pvVar5;
  
  pvVar5 = FUN_00494580();
  if (param_1 == *(int *)((int)pvVar5 + 0x24)) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pvVar5 = FUN_00494580();
    *(undefined4 *)((int)pvVar5 + 0x24) = uVar2;
    return;
  }
  pvVar5 = FUN_00494580();
  iVar3 = *(int *)((int)pvVar5 + 0x24);
  iVar4 = *(int *)(iVar3 + 4);
  while( true ) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004903c8();
    }
    piVar1 = (int *)(iVar3 + 4);
    iVar3 = *piVar1;
    if (param_1 == iVar3) break;
    iVar4 = *(int *)(iVar3 + 4);
  }
  *piVar1 = *(int *)(param_1 + 4);
  return;
}

