/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421eef */

void __fastcall FUN_00421eef(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar1 = 0;
      do {
        FUN_0041f066(*(int **)(*(int *)(param_1 + 0x28) + iVar1 * 4));
        *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x24));
    }
    FUN_0041c607(param_2,*(int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

