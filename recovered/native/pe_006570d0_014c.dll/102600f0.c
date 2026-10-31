/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102600f0 */

void __thiscall FUN_102600f0(int *param_1,undefined4 param_2,uint param_3,int *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    puVar1 = (undefined4 *)*param_1;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_4 = -1;
      }
      else {
        *param_4 = *param_4 + param_3;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar3 = param_3;
      if (uVar2 < param_3) {
        uVar3 = uVar2;
      }
      FUN_1025b2d0(*puVar1,param_2,uVar3);
      *(int *)*param_1 = *(int *)*param_1 + uVar3;
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + uVar3;
      if (*(char *)(*param_1 + 0xc) == '\0') {
        if (uVar3 == param_3) {
          *param_4 = *param_4 + uVar3;
        }
        else {
          *param_4 = -1;
        }
      }
      else {
        *param_4 = *param_4 + param_3;
      }
    }
  }
  return;
}

