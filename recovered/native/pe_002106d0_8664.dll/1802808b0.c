/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802808b0 */

undefined8 FUN_1802808b0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x16;
    FUN_180290a50();
  }
  return 0x7fffffff;
}

