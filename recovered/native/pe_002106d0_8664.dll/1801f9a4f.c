/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f9a4f */

undefined8 FUN_1801f9a4f(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = FUN_1801ce63e(lVar1,param_3);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1801cec60(lVar1,param_4);
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar1 + 0x40);
      uVar2 = 0;
    }
  }
  return uVar2;
}

