/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009a17d */

void FUN_14009a17d(int param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = DAT_140f2a910;
  if ((*(byte *)(DAT_140f2a910 + 0x2acd) & 4) != 0) {
    FUN_1400772a6("[docking] DockSettingsRenameNodeReferences: from 0x%08X -> to 0x%08X\n",param_1,
                  param_2);
  }
  iVar2 = *(int *)(lVar1 + 0x15a8);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x15b0) + lVar3 * 8);
      if ((*(int *)(lVar4 + 0x4d0) == param_1) && (*(longlong *)(lVar4 + 0x4c0) == 0)) {
        *(undefined4 *)(lVar4 + 0x4d0) = param_2;
        iVar2 = *(int *)(lVar1 + 0x15a8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  lVar3 = *(longlong *)(lVar1 + 0x29a0);
  if (lVar3 != 0) {
    lVar4 = lVar3 + 4;
    do {
      if (*(int *)(lVar4 + 0x14) == param_1) {
        *(undefined4 *)(lVar4 + 0x14) = param_2;
        lVar3 = *(longlong *)(lVar1 + 0x29a0);
      }
      lVar4 = lVar4 + *(int *)(lVar4 + -4);
    } while (lVar4 != *(int *)(lVar1 + 0x2998) + lVar3 + 4);
  }
  return;
}

