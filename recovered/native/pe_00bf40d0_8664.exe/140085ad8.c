/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085ad8 */

undefined8 FUN_140085ad8(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(int *)(param_1 + 0x1100) - (int)*(longlong *)(param_1 + 0x10f8);
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  *(ulonglong *)(param_1 + 0x10f8) = *(longlong *)(param_1 + 0x10f8) + (ulonglong)uVar1;
  *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar1;
  uVar1 = param_2 - uVar1;
  if (uVar1 != 0) {
    do {
      uVar3 = 0x1000;
      if (uVar1 < 0x1000) {
        uVar3 = uVar1;
      }
      uVar2 = FUN_14008537a((int *)(param_1 + 0x18),(undefined1 *)0x0,uVar3);
      if (uVar2 < uVar3) {
        return 0x55;
      }
      *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + uVar3;
      uVar1 = uVar1 - uVar3;
    } while (uVar1 != 0);
  }
  return 0;
}

