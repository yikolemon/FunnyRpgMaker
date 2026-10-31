/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000c5de */

void FUN_14000c5de(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  FUN_14000c4c4();
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_14000c612(param_1,param_2,*puVar1,*(undefined4 *)(param_1 + 0x70));
  return;
}

