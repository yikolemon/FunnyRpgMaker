/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f636 */

void __thiscall FUN_1002f636(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = param_2[1];
  if ((uint)param_1[2] < uVar2) {
    (*(code *)param_1[3])(param_1,uVar2);
    uVar4 = param_1[2];
    if (uVar2 < (uint)param_1[2]) {
      uVar4 = uVar2;
    }
    param_1[1] = uVar4;
  }
  else {
    param_1[1] = uVar2;
    if (uVar2 == 0) goto LAB_1002f678;
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = puVar5 + uVar2;
  puVar6 = (undefined4 *)*param_1;
  do {
    uVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    *puVar6 = uVar3;
    puVar6 = puVar6 + 1;
  } while (puVar5 != puVar1);
LAB_1002f678:
  param_1[0x25] = param_2[0x25];
  return;
}

