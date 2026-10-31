/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140187ee8 */

undefined8 FUN_140187ee8(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_1 + 0x1100) - (int)*(longlong *)(param_1 + 0x10f8);
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  *(ulonglong *)(param_1 + 0x10f8) = *(longlong *)(param_1 + 0x10f8) + (ulonglong)uVar1;
  *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar1;
  param_2 = param_2 - uVar1;
  if (param_2 != 0) {
    do {
      uVar1 = 0x1000;
      if (param_2 < 0x1000) {
        uVar1 = param_2;
      }
      uVar2 = FUN_14018778a(param_1 + 0x18,0,uVar1);
      if (uVar2 < uVar1) {
        return 0x55;
      }
      *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar1;
      param_2 = param_2 - uVar1;
    } while (param_2 != 0);
  }
  return 0;
}

