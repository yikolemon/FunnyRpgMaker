/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180238c8b */

undefined8 FUN_180238c8b(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(longlong *)(param_1 + 0x10f8) = param_1 + 0xf0;
  uVar1 = FUN_1802384b2(param_1 + 0x18,param_1 + 0xf0,0x1000);
  *(ulonglong *)(param_1 + 0x1100) = (ulonglong)uVar1 + *(longlong *)(param_1 + 0x10f8);
  uVar2 = 0x55;
  if (uVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

