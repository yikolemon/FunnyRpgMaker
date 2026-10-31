/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10262835 */

undefined4 __fastcall FUN_10262835(int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return 0;
  }
  return 1;
}

