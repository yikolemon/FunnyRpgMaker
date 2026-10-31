/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190196 */

void FUN_10190196(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = FUN_10190112(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x290);
  param_2 = param_2 & 0x7ffff;
  iVar2 = *(int *)(iVar1 + 0x70);
  uVar3 = *(uint *)(iVar2 + param_2 * 4);
  *(uint *)(iVar2 + param_2 * 4) = uVar3 & 0xbfffffff;
  uVar5 = uVar3 + 0x100000 & 0x3ff00000;
  if (uVar5 == 0) {
    uVar5 = 0x100000;
  }
  *(uint *)(iVar2 + param_2 * 4) = uVar5 | uVar3 & 0x80000000 | *(uint *)(iVar1 + 0x80) & 0xfffff;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(iVar1 + 0x80) = param_2;
  *(int *)(iVar1 + 0x8c) = *(int *)(iVar1 + 0x8c) + 1;
  *(int *)(iVar1 + 0x90) =
       *(int *)(iVar1 + 0x90) +
       ((uint)*(ushort *)(iVar4 + 6) + iVar2) * ((uint)*(ushort *)(iVar4 + 4) + iVar2);
  *(undefined4 *)(iVar4 + 4) = 0;
  return;
}

