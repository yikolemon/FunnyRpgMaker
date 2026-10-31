/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140333759 */

int FUN_140333759(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x40);
  iVar3 = -1;
  if (lVar1 != 0) {
    lVar2 = FUN_140364ccf(lVar1,*(undefined4 *)(param_1 + 200));
    if (lVar2 != 0) {
      iVar3 = (int)((ulonglong)(lVar2 - *(longlong *)(lVar1 + 0x10)) >> 3) * -0x49249249;
    }
  }
  return iVar3;
}

