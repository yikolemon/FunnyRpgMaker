/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10280a60 */

void FUN_10280a60(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x22;
    return;
  }
  return;
}

