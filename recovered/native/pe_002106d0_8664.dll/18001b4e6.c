/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b4e6 */

undefined1 *
FUN_18001b4e6(undefined1 *param_1,undefined1 *param_2,char *param_3,char *param_4,longlong *param_5,
             longlong param_6)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *puVar4;
  
  puVar4 = param_1;
  while ((puVar4 != param_2 && (param_3 != param_4))) {
    *param_5 = *param_5 + 1;
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    cVar3 = (**(code **)(**(longlong **)(param_6 + 8) + 0x20))(*(longlong **)(param_6 + 8),uVar2);
    if (cVar3 != cVar1) {
      return param_1;
    }
  }
  if (param_3 != param_4) {
    return param_1;
  }
  return puVar4;
}

