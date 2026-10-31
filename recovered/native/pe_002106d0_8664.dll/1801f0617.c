/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f0617 */

undefined8 FUN_1801f0617(undefined8 param_1,uint param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1801f210a();
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

