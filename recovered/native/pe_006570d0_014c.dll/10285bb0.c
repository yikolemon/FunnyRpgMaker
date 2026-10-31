/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285bb0 */

undefined4 FUN_10285bb0(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x7fffffff < param_3)) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  return 0x7fffffff;
}

