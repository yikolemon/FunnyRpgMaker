/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e0f4 */

undefined4 __thiscall FUN_1001e0f4(int param_1,char param_2)

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
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return 1;
}

