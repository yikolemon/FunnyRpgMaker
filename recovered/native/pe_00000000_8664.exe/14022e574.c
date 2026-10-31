/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022e574 */

void FUN_14022e574(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  
  if (param_2 != 0 && param_2 != param_3) {
    do {
      uVar1 = *(int *)(param_2 + 8) - 7;
      if (uVar1 < 0xd) {
        (*(code *)((longlong)&switchD_14022e5c7::switchdataD_1404c7690 +
                  (longlong)(int)(&switchD_14022e5c7::switchdataD_1404c7690)[uVar1]))();
        return;
      }
      param_2 = *(longlong *)(param_2 + 0x10);
    } while ((param_2 != param_3) && (param_2 != 0));
  }
  return;
}

