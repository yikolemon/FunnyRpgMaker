/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140164384 */

undefined8 FUN_140164384(longlong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3e0);
  if (*(int *)(lVar3 + 0x8a8) == 0) {
    lVar3 = lVar3 + 0x5e0;
  }
  else {
    bVar1 = (**(code **)(*(longlong *)(lVar3 + 0x10e0) + 0x10))(lVar3 + 0x10b0,param_3);
    if (*(uint *)(lVar3 + 0x8a8) <= (uint)bVar1) {
      return 3;
    }
    lVar3 = *(longlong *)(lVar3 + 0x8b0 + (ulonglong)bVar1 * 8);
    if ((param_2 != 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
      *(undefined8 *)(param_1 + 0x68) =
           *(undefined8 *)(**(longlong **)(param_2 + 0x38) + 8 + (ulonglong)bVar1 * 8);
    }
  }
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(lVar3 + 0x298);
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(lVar3 + 0x2b8);
  uVar2 = FUN_14016603f(*(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x608));
  *(undefined4 *)(param_1 + 0x400) = uVar2;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(lVar3 + 0x218);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(lVar3 + 0x21c);
  *(longlong *)(param_1 + 0x430) = lVar3;
  return 0;
}

