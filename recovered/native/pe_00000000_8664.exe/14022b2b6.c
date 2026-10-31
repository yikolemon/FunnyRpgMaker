/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022b2b6 */

bool FUN_14022b2b6(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4)

{
  char cVar1;
  char cVar2;
  ulonglong unaff_RBP;
  undefined1 *puVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    bVar4 = true;
  }
  else {
    do {
      puVar3 = param_1 + 1;
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*param_3);
      cVar1 = (**(code **)(**(longlong **)(param_4 + 8) + 0x20))
                        (*(longlong **)(param_4 + 8),*param_1);
      cVar2 = (**(code **)(**(longlong **)(param_4 + 8) + 0x20))
                        (*(longlong **)(param_4 + 8),unaff_RBP & 0xffffffff);
      bVar4 = cVar1 == cVar2;
      if (!bVar4) {
        return bVar4;
      }
      param_3 = param_3 + 1;
      param_1 = puVar3;
    } while (puVar3 != param_2);
  }
  return bVar4;
}

