/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d1537 */

undefined8 FUN_1400d1537(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x401f < param_2 && param_1 != 0) {
    iVar1 = FUN_1400d1608(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_1401366a0(param_1,0,0x4020);
      return uVar2;
    }
  }
  return 0;
}

