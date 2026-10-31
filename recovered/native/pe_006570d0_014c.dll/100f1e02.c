/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1e02 */

void __fastcall FUN_100f1e02(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1005c40b(**(undefined4 **)(param_1 + 8));
  **(undefined4 **)(param_1 + 4) = uVar1;
  **(undefined1 **)(param_1 + 0xc) = 1;
  return;
}

