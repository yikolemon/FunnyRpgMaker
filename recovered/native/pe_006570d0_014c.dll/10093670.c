/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093670 */

undefined4 __thiscall FUN_10093670(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1009369c(param_2);
  if ((char)uVar1 != '\0') {
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x4e);
    FUN_1009301c();
  }
  return uVar1;
}

