/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003cd77 */

void FUN_14003cd77(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_2[1] == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0x85;
  }
  else {
    uVar1 = FUN_1400218c5(*param_2,0x40,param_2[1]);
    *param_2 = uVar1;
  }
  return;
}

