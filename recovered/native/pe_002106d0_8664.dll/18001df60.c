/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001df60 */

undefined8 FUN_18001df60(longlong param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 'a') {
    uVar1 = 7;
  }
  else {
    if (param_2 != 'b') {
      return 0;
    }
    uVar1 = 8;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  return 1;
}

