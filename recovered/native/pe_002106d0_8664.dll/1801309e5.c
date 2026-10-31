/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801309e5 */

void Unwind_1801309e5(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    if (*(longlong *)(param_2 + 0x58 + lVar1) != 0) {
      FUN_1800fe8d4();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}

