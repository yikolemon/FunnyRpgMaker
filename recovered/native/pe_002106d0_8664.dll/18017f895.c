/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f895 */

void FUN_18017f895(undefined8 param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_18017918c();
  *param_2 = (char)(((uVar1 >> 10 & 0x1f) * 0xff) / 0x1f);
  param_2[1] = (char)(((uVar1 >> 5 & 0x1f) * 0xff) / 0x1f);
  param_2[2] = (char)(((uVar1 & 0x1f) * 0xff) / 0x1f);
  return;
}

