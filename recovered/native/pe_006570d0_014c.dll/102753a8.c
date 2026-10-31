/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102753a8 */

undefined4 FUN_102753a8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return 0x16;
  }
  *param_1 = DAT_103a5158;
  return 0;
}

