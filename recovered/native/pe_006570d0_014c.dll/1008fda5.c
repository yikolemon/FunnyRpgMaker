/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008fda5 */

bool FUN_1008fda5(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,int param_4)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  bool bVar6;
  
  puVar5 = param_3;
  if (param_1 == param_2) {
    bVar6 = true;
  }
  else {
    do {
      puVar4 = param_1 + 1;
      uVar1 = *puVar5;
      sVar2 = (**(code **)(**(int **)(param_4 + 4) + 0x20))(*param_1);
      sVar3 = (**(code **)(**(int **)(param_3 + 2) + 0x20))(uVar1);
      bVar6 = sVar2 == sVar3;
      if (!bVar6) {
        return bVar6;
      }
      puVar5 = puVar5 + 1;
      param_1 = puVar4;
    } while (puVar4 != param_2);
  }
  return bVar6;
}

