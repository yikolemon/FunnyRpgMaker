/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026703a */

undefined4 __fastcall FUN_1026703a(int *param_1)

{
  undefined4 *puVar1;
  
  if ((*param_1 != 0) && (param_1[6] != 0)) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_10268ffd();
  *puVar1 = 0x16;
  FUN_10273ea8();
  return 0;
}

