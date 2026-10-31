/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bd1e0 */

void FUN_1401bd1e0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x22;
    return;
  }
  return;
}

