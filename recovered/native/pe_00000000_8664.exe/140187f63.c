/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140187f63 */

undefined8 FUN_140187f63(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(longlong *)(param_1 + 0x10f8) = param_1 + 0xf0;
  uVar1 = FUN_14018778a(param_1 + 0x18,param_1 + 0xf0,0x1000);
  *(ulonglong *)(param_1 + 0x1100) = (ulonglong)uVar1 + *(longlong *)(param_1 + 0x10f8);
  uVar2 = 0x55;
  if (uVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

