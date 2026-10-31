/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140055a7d */

void FUN_140055a7d(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_1400560a4(param_1 + 0x178,lVar1);
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

