/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100738a2 */

void __thiscall FUN_100738a2(int param_1,undefined4 param_2,char param_3)

{
  undefined1 uVar1;
  
  FUN_100738fc();
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar1 = FUN_100739a6(0x20);
  *(undefined1 *)(param_1 + 0x40) = uVar1;
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_10073a60(*(uint *)(param_1 + 0xc) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_1022da80(param_1);
  }
  return;
}

