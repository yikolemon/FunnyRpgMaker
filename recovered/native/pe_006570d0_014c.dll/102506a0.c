/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102506a0 */

void FUN_102506a0(int param_1,undefined4 param_2,int param_3,uint param_4,undefined2 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  
  FUN_1025b2d0(param_1,param_2,param_3 * 2);
  if (param_4 != 0) {
    puVar2 = (undefined4 *)(param_3 * 2 + param_1);
    for (uVar1 = param_4 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = CONCAT22(param_5,param_5);
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = (uint)((param_4 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar2 = param_5;
      puVar2 = (undefined4 *)((int)puVar2 + 2);
    }
  }
  *(undefined2 *)(param_1 + (param_3 + param_4) * 2) = 0;
  return;
}

