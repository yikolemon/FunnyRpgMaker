/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102690cd */

uint * FUN_102690cd(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_10;
  
  uVar4 = 0;
  local_10 = param_3 - 1;
  do {
    uVar3 = param_3 >> 1;
    if (uVar3 == 0) {
      if (param_3 == 0) {
        return (uint *)0x0;
      }
      puVar2 = (uint *)(param_2 + uVar4 * 8);
      if (param_1 != *puVar2) {
        return (uint *)0x0;
      }
      return puVar2;
    }
    uVar5 = param_3 & 1;
    param_3 = uVar3 - 1;
    if (uVar5 != 0) {
      param_3 = uVar3;
    }
    iVar1 = param_3 + uVar4;
    puVar2 = (uint *)(param_2 + iVar1 * 8);
    if (param_1 == *puVar2) {
      return puVar2;
    }
    uVar5 = iVar1 - 1;
    if (*puVar2 <= param_1) {
      uVar5 = local_10;
      uVar4 = iVar1 + 1;
      param_3 = uVar3;
    }
    local_10 = uVar5;
  } while (uVar4 <= uVar5);
  return (uint *)0x0;
}

