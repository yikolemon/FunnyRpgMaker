/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013fd03 */

undefined8 FUN_14013fd03(undefined8 param_1,uint param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1401417f6();
  if ((int)uVar1 == 0) {
    if (param_2 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(param_3 + uVar2 * 4) != 0) {
          return 0xfffffffe;
        }
        uVar2 = uVar2 + 1;
      } while (param_2 != uVar2);
    }
    uVar1 = 0;
  }
  return uVar1;
}

