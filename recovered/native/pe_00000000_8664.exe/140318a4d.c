/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140318a4d */

undefined8 FUN_140318a4d(longlong param_1,longlong param_2)

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

