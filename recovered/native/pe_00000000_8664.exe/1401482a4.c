/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401482a4 */

void FUN_1401482a4(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 - 4 < 0xfffffffd) {
    *(undefined4 *)(param_1 + 0x20) = 0x84;
    return;
  }
  lVar2 = *(longlong *)(param_1 + 600 + (ulonglong)param_2 * 0x10);
  if (lVar2 != 0) {
    iVar1 = *(int *)((ulonglong)param_2 * 0x10 + param_1 + 0x260);
    if (iVar1 < param_3) {
      *(undefined4 *)(param_1 + 0x20) = 0x83;
      return;
    }
    *(longlong *)(param_1 + 0x1e0) = lVar2;
    *(int *)(param_1 + 0x1ec) = iVar1;
    *(int *)(param_1 + 0x1e8) = param_3;
    *(undefined4 *)(param_1 + 500) = 0;
    *(uint *)(param_1 + 0x1dc) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0x8a;
  return;
}

