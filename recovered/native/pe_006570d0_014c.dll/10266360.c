/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266360 */

undefined4 __fastcall FUN_10266360(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return 0;
  }
  return 1;
}

