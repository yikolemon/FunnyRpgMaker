/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190135 */

int FUN_10190135(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0xffffffff) {
    iVar2 = *(int *)(param_1 + 0x290);
    if (iVar2 == 0) {
      FUN_1018f313(param_1);
      iVar2 = *(int *)(param_1 + 0x290);
    }
    if ((((int)(param_2 & 0x7ffff) < *(int *)(iVar2 + 0x68)) &&
        (uVar1 = *(uint *)(*(int *)(iVar2 + 0x70) + (param_2 & 0x7ffff) * 4),
        (uVar1 >> 0x1e & 1) != 0)) && (((param_2 ^ uVar1) & 0x3ff00000) == 0)) {
      iVar3 = ((int)(uVar1 << 0xc) >> 9) + *(int *)(iVar2 + 100);
    }
  }
  return iVar3;
}

