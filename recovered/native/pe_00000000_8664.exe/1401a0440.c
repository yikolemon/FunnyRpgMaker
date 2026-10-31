/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a0440 */

undefined8 FUN_1401a0440(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x16;
    FUN_1401ae640();
  }
  return 0x7fffffff;
}

