/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bfdf0 */

void FUN_1400bfdf0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140077fbc(**(undefined4 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  **(undefined4 **)(param_1 + 8) = uVar1;
  uVar1 = FUN_140077fbc(*(undefined4 *)(*(longlong *)(param_1 + 8) + 4),
                        *(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = uVar1;
  uVar1 = FUN_140077fbc(*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),
                        *(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = uVar1;
  return;
}

