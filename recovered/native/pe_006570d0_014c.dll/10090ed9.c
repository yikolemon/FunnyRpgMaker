/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10090ed9 */

undefined2 *
FUN_10090ed9(undefined2 *param_1,undefined2 *param_2,short *param_3,short *param_4,int *param_5,
            int param_6)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  undefined2 *puVar4;
  
  puVar4 = param_1;
  while ((puVar4 != param_2 && (param_3 != param_4))) {
    *param_5 = *param_5 + 1;
    sVar1 = *param_3;
    param_3 = param_3 + 1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    sVar3 = (**(code **)(**(int **)(param_6 + 4) + 0x20))(uVar2);
    if (sVar3 != sVar1) {
      return param_1;
    }
  }
  if (param_3 != param_4) {
    return param_1;
  }
  return puVar4;
}

