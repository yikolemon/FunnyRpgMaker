/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140491d80 */

undefined8 FUN_140491d80(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined4 *)FUN_14048fb3c();
    *puVar1 = 0x16;
    FUN_1404a1f20();
  }
  return 0x7fffffff;
}

