/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003cde3 */

void FUN_14003cde3(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x2c8))
                    (param_1,*param_2,
                     *(undefined4 *)
                      (param_1 + 0x1ac + (ulonglong)(*(byte *)(param_1 + 0x1f0) & 3) * 4));
  *param_2 = uVar1;
  return;
}

