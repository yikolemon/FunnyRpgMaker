/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140115910 */

undefined8 FUN_140115910(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
    FUN_140120ee8();
  }
  return 0x7fffffff;
}

