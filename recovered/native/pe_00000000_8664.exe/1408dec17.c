/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dec17 */

void FUN_1408dec17(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  ulonglong uVar2;
  ulonglong uVar3;
  float10 in_ST0;
  
  uVar3 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar2 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
  *(undefined4 *)(uVar3 - 0x20) = in_EAX;
  *(double *)(uVar3 - 8) = (double)in_ST0;
  *(undefined4 *)(uVar3 - 0x1c) = param_1;
  uVar1 = *(undefined4 *)(uVar3 + 0x14);
  *(undefined4 *)(uVar3 - 0x18) = *(undefined4 *)(uVar3 + 0x10);
  *(undefined4 *)(uVar3 - 0x14) = uVar1;
  *(ulonglong *)(uVar2 - 8) = (ulonglong)((int)&stack0xfffffffffffffff8 + 8);
  *(ulonglong *)(uVar2 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
  *(undefined8 *)(uVar2 - 0x18) = param_2;
  *(undefined8 *)(uVar2 - 0x20) = 0x1408dec40;
  FUN_1408dec60();
  return;
}

