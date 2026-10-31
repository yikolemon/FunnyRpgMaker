/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c17d8 */

void FUN_101c17d8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (((param_2 != 0 && param_1 != 0) && (uVar2 = *(uint *)(param_1 + 4), uVar2 != 0)) &&
     (*(ushort *)(param_1 + 2) != 0)) {
    uVar1 = uVar2 + (uint)*(ushort *)(param_1 + 2) * 8;
    do {
      FUN_101c1847(uVar2,param_2);
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}

