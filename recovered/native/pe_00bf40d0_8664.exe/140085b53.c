/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085b53 */

undefined8 FUN_140085b53(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(undefined1 **)(param_1 + 0x10f8) = (undefined1 *)(param_1 + 0xf0);
  uVar1 = FUN_14008537a((int *)(param_1 + 0x18),(undefined1 *)(param_1 + 0xf0),0x1000);
  *(ulonglong *)(param_1 + 0x1100) = (ulonglong)uVar1 + *(longlong *)(param_1 + 0x10f8);
  uVar2 = 0x55;
  if (uVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

