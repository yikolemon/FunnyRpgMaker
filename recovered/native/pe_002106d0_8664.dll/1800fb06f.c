/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fb06f */

undefined8 FUN_1800fb06f(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x401f < param_2 && param_1 != 0) {
    iVar1 = FUN_1800fb140(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_1802a89a0(param_1,0,0x4020);
      return uVar2;
    }
  }
  return 0;
}

