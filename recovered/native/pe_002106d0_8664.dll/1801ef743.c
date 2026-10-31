/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef743 */

void FUN_1801ef743(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2[1] == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0x85;
  }
  else {
    uVar1 = FUN_1801cf4c2(*param_2,0x40);
    *param_2 = uVar1;
  }
  return;
}

