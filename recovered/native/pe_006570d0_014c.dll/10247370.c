/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10247370 */

undefined4 * __thiscall FUN_10247370(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_10;
  undefined4 *local_8;
  
  uVar2 = param_2[4];
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  uVar3 = param_1[5];
  iVar4 = param_1[4];
  if (uVar2 <= uVar3 - iVar4) {
    iVar1 = uVar2 + iVar4;
    if (iVar4 != iVar1) {
      local_8 = param_1;
      if (7 < uVar3) {
        local_8 = (undefined4 *)*param_1;
      }
      FUN_10236190(local_8,uVar3,iVar4,iVar1);
    }
    param_1[4] = iVar1;
    puVar5 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar5 = (undefined4 *)*param_1;
    }
    FUN_1025b2d0((int)puVar5 + iVar4 * 2,param_2,uVar2 * 2);
    *(undefined2 *)((int)puVar5 + iVar1 * 2) = 0;
    return param_1;
  }
  puVar5 = (undefined4 *)FUN_10250d80(uVar2,local_10,param_2,uVar2);
  return puVar5;
}

