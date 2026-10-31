/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146ec0 */

void FUN_180146ec0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1800fed00(**(undefined4 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  **(undefined4 **)(param_1 + 8) = uVar1;
  uVar1 = FUN_1800fed00(*(undefined4 *)(*(longlong *)(param_1 + 8) + 4),
                        *(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = uVar1;
  uVar1 = FUN_1800fed00(*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),
                        *(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = uVar1;
  return;
}

