/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016ac9d */

void FUN_14016ac9d(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_14016bd17(param_1,param_3);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar3 = 0;
    do {
      uVar2 = FUN_140169d34(param_2);
      *(undefined1 *)(param_1 + 0x20 + uVar3) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x18));
  }
  return;
}

