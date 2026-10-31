/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401be6a0 */

undefined4 FUN_1401be6a0(double param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0.0) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x22;
  }
  return SUB84(param_1,0);
}

