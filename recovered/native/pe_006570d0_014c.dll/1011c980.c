/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c980 */

void FUN_1011c980(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_1039d74c;
  if ((*(byte *)(DAT_1039d74c + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockBuilderRemoveNode 0x%08X\n",param_1);
  }
  iVar1 = FUN_1011b528(iVar2,param_1);
  if (iVar1 != 0) {
    FUN_10119f9b(param_1,1);
    FUN_1011a075(param_1);
    iVar2 = FUN_1011b528(iVar2,param_1);
    if (iVar2 != 0) {
      if (((*(byte *)(iVar2 + 0x11) & 8) != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
        uVar3 = *(uint *)(iVar2 + 8) | 0x800;
        *(uint *)(iVar2 + 8) = uVar3;
        *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 4) | *(uint *)(iVar2 + 0xc) | uVar3;
      }
      FUN_1011ca07(1);
    }
  }
  return;
}

