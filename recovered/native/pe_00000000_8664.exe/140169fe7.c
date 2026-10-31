/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169fe7 */

int FUN_140169fe7(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_140169fda();
  if (param_2 < uVar2) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 8);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 4 + (ulonglong)param_2 * 8);
    if (iVar1 == 1) {
      iVar3 = (iVar3 >> 0x1f) + iVar3 + 0x2000 >> 0xe;
    }
    else if (iVar1 == 2) {
      iVar3 = iVar3 << 0x10;
    }
  }
  else {
    FUN_1401691c8(*(undefined8 *)(param_1 + 8),0x82);
    iVar3 = 0;
  }
  return iVar3;
}

