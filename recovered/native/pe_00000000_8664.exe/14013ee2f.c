/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013ee2f */

void FUN_14013ee2f(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2[1] == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0x85;
  }
  else {
    uVar1 = FUN_14012e496(*param_2,0x40);
    *param_2 = uVar1;
  }
  return;
}

