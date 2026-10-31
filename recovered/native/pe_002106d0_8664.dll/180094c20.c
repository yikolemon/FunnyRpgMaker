/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094c20 */

undefined8 FUN_180094c20(longlong param_1,short param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x61) {
    uVar1 = 7;
  }
  else {
    if (param_2 != 0x62) {
      return 0;
    }
    uVar1 = 8;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  return 1;
}

