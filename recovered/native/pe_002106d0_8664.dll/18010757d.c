/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010757d */

undefined8 FUN_18010757d(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(longlong *)(param_1 + 0x418) != param_2) {
    do {
      if (param_1 == param_2) {
        return 1;
      }
      param_1 = *(longlong *)(param_1 + 0x410);
    } while (param_1 != 0);
    uVar1 = 0;
  }
  return uVar1;
}

