/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10250d10 */

void FUN_10250d10(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined2 param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_4 * 2;
  FUN_1025b2d0(param_1,param_2,iVar1);
  if (param_5 != 0) {
    puVar3 = (undefined4 *)(iVar1 + param_1);
    for (uVar2 = param_5 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = CONCAT22(param_6,param_6);
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = (uint)((param_5 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined2 *)puVar3 = param_6;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    }
  }
  FUN_1025b2d0(param_1 + (param_5 + param_4) * 2,param_2 + iVar1,(param_3 - param_4) * 2 + 2);
  return;
}

