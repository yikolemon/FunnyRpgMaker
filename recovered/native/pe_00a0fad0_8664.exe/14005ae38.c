/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005ae38 */

void FUN_14005ae38(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = *(longlong *)(param_1 + 0x20);
    FUN_14005aeb2(lVar1,*(undefined8 *)(lVar1 + 0x10),param_1 + 0x28);
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  return;
}

