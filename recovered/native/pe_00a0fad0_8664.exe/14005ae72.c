/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005ae72 */

void FUN_14005ae72(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0x100) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = *(longlong *)(param_1 + 0x20);
    FUN_14005aeb2(lVar1,*(undefined8 *)(lVar1 + 0x10),param_1 + 0x28,0x100);
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  return;
}

