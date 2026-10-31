/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011ba73 */

void __fastcall FUN_1011ba73(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_1039d74c;
  if ((*(byte *)(DAT_1039d74c + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockSettingsRenameNodeReferences: from 0x%08X -> to 0x%08X\n",param_1,
                 param_2);
  }
  iVar3 = *(int *)(iVar2 + 0x1484);
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x148c) + iVar4 * 4);
      if ((*(int *)(iVar1 + 0x438) == param_1) && (*(int *)(iVar1 + 0x430) == 0)) {
        *(undefined4 *)(iVar1 + 0x438) = param_2;
        iVar3 = *(int *)(iVar2 + 0x1484);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  iVar3 = *(int *)(iVar2 + 0x26f0);
  if (iVar3 != 0) {
    iVar4 = iVar3 + 4;
    do {
      if (*(int *)(iVar4 + 0x14) == param_1) {
        *(undefined4 *)(iVar4 + 0x14) = param_2;
        iVar3 = *(int *)(iVar2 + 0x26f0);
      }
      iVar4 = iVar4 + *(int *)(iVar4 + -4);
    } while (iVar4 != *(int *)(iVar2 + 0x26e8) + iVar3 + 4);
  }
  return;
}

