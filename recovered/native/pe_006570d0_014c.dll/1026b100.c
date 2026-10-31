/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026b100 */

undefined4 FUN_1026b100(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  return 0x7fffffff;
}

