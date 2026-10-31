/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005aebd */

void FUN_14005aebd(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    FUN_14005baae(param_1);
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

