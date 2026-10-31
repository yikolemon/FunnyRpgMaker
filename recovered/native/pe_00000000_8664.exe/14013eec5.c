/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013eec5 */

void FUN_14013eec5(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140148625(param_1,*param_2,
                        *(undefined4 *)
                         (param_1 + 0x1ac + (ulonglong)(*(byte *)(param_1 + 0x1f0) & 3) * 4));
  *param_2 = uVar1;
  return;
}

