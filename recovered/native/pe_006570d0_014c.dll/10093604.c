/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093604 */

undefined4 __thiscall FUN_10093604(int param_1,short param_2)

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
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return 1;
}

