/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180121e5d */

void FUN_180121e5d(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = DAT_180419160;
  if ((*(byte *)(DAT_180419160 + 0x2acd) & 4) != 0) {
    FUN_1800fdfea("[docking] DockBuilderRemoveNode 0x%08X\n",param_1);
  }
  lVar3 = FUN_180120868(lVar2,param_1);
  if (lVar3 != 0) {
    FUN_18011f1b7(param_1,1);
    FUN_18011f2ac(param_1);
    lVar3 = FUN_180120868(lVar2,param_1);
    if (lVar3 != 0) {
      if (((*(byte *)(lVar3 + 0x11) & 8) != 0) && (lVar1 = *(longlong *)(lVar3 + 0x18), lVar1 != 0))
      {
        uVar4 = *(uint *)(lVar1 + 8) | 0x800;
        *(uint *)(lVar1 + 8) = uVar4;
        *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 4) | *(uint *)(lVar1 + 0xc) | uVar4;
      }
      FUN_180121ef5(lVar2,lVar3,1);
      return;
    }
  }
  return;
}

