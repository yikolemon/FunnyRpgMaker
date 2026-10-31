/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb004 */

void FUN_100fb004(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 - (int)param_1 != 0) {
    uVar1 = param_2 - (int)param_1 >> 3;
    do {
      uVar2 = uVar1 >> 1;
      uVar3 = ~uVar2 + uVar1;
      uVar1 = uVar2;
      if (param_1[uVar2 * 2] < param_3) {
        param_1 = param_1 + uVar2 * 2 + 2;
        uVar1 = uVar3;
      }
    } while (uVar1 != 0);
  }
  return;
}

