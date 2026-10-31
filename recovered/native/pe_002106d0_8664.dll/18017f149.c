/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f149 */

void FUN_18017f149(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(short *)(param_1 + lVar1 * 2) =
         *(short *)(param_1 + lVar1 * 2) * *(short *)(param_2 + lVar1 * 2);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x40);
  return;
}

