/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180091133 */

bool FUN_180091133(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,longlong param_4)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  undefined2 *puVar4;
  bool bVar5;
  
  if (param_1 == param_2) {
    bVar5 = true;
  }
  else {
    do {
      puVar4 = param_1 + 1;
      uVar1 = *param_3;
      sVar2 = (**(code **)(**(longlong **)(param_4 + 8) + 0x40))
                        (*(longlong **)(param_4 + 8),*param_1);
      sVar3 = (**(code **)(**(longlong **)(param_4 + 8) + 0x40))(*(longlong **)(param_4 + 8),uVar1);
      bVar5 = sVar2 == sVar3;
      if (!bVar5) {
        return bVar5;
      }
      param_3 = param_3 + 1;
      param_1 = puVar4;
    } while (puVar4 != param_2);
  }
  return bVar5;
}

