/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011ca07 */

void __fastcall FUN_1011ca07(int param_1,undefined4 *param_2,byte param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockContextRemoveNode 0x%08X\n",*param_2);
  }
  if (param_2[0x1e] != 0) {
    *(undefined4 *)(param_2[0x1e] + 0x434) = 0;
  }
  iVar1 = param_2[6];
  if ((param_3 & iVar1 != 0) != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1c);
    if (puVar3 == param_2) {
      puVar3 = *(undefined4 **)(iVar1 + 0x20);
    }
    FUN_1011bb00(puVar3);
    return;
  }
  if (iVar1 != 0) {
    iVar5 = 0;
    bVar2 = true;
    do {
      bVar4 = bVar2;
      if (*(undefined4 **)(iVar1 + 0x1c + iVar5 * 4) == param_2) {
        *(undefined4 *)(param_2[6] + 0x1c + iVar5 * 4) = 0;
      }
      iVar5 = 1;
      bVar2 = false;
    } while (bVar4);
  }
  FUN_10119f45();
  return;
}

