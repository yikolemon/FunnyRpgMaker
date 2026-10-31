/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800740f4 */

void FUN_1800740f4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x201;
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = FUN_180239630(0x10);
  uVar2 = FUN_18023d070(1);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x40) = lVar1;
  return;
}

