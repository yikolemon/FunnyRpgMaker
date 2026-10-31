/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180237025 */

undefined8 FUN_180237025(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  while( true ) {
    uVar1 = *(int *)(param_1 + 0x2080) - (int)*(longlong *)(param_1 + 0x2078);
    if (param_2 < uVar1) {
      uVar1 = param_2;
    }
    *(ulonglong *)(param_1 + 0x2078) = *(longlong *)(param_1 + 0x2078) + (ulonglong)uVar1;
    *(int *)(param_1 + 0x2074) = *(int *)(param_1 + 0x2074) + uVar1;
    param_2 = param_2 - uVar1;
    if (param_2 == 0) break;
    uVar2 = FUN_18023706f(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}

