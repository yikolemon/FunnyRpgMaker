/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b51c */

void __thiscall FUN_1001b51c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3;
  if (param_2 < uVar2) {
    do {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + (param_2 >> 5) * 4);
      if ((uVar1 >> (param_2 & 0x1f) & 1) != 0) {
        *(uint *)(*(int *)(param_1 + 0x18) + (param_2 >> 5) * 4) =
             uVar1 & ~(1 << ((byte)param_2 & 0x1f));
        iVar3 = FUN_1001b358(0xf,0);
        *(uint *)(*(int *)(param_1 + 0x4c) + 4 + iVar3 * 0x14) = param_2;
      }
      param_2 = param_2 + 1;
    } while (uVar2 != param_2);
  }
  return;
}

