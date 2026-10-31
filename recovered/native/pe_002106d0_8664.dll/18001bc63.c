/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001bc63 */

undefined1 *
FUN_18001bc63(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             longlong *param_5,longlong param_6)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  ulonglong unaff_RBP;
  undefined1 *puVar4;
  
  puVar4 = param_1;
  while ((puVar4 != param_2 && (param_3 != param_4))) {
    *param_5 = *param_5 + 1;
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*param_3);
    param_3 = param_3 + 1;
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    cVar2 = (**(code **)(**(longlong **)(param_6 + 8) + 0x20))(*(longlong **)(param_6 + 8),uVar1);
    cVar3 = (**(code **)(**(longlong **)(param_6 + 8) + 0x20))
                      (*(longlong **)(param_6 + 8),unaff_RBP & 0xffffffff);
    if (cVar2 != cVar3) {
      return param_1;
    }
  }
  if (param_3 != param_4) {
    return param_1;
  }
  return puVar4;
}

