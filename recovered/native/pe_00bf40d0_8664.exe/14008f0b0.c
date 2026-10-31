/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008f0b0 */

void FUN_14008f0b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14008f040(param_1);
  param_1[3] = *(longlong *)(lVar1 + 0x90);
  param_1[4] = *(longlong *)(lVar1 + 0x88);
  FUN_1400a1b0c(lVar1,param_1 + 3,param_1[1]);
  FUN_1400a1b44(lVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}

