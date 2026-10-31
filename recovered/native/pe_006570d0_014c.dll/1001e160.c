/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e160 */

undefined4 __thiscall FUN_1001e160(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1001e18a(param_2);
  if ((char)uVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_1 + 0x4d);
    FUN_1001d8ea();
  }
  return uVar1;
}

