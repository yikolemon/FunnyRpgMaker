/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a7888 */

void FUN_1400a7888(int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = DAT_140f2a910;
  if ((*(byte *)(*(longlong *)(DAT_140f2a910 + 0x23e8) + 0x17) & 8) != 0) {
    return;
  }
  iVar2 = FUN_14009520b();
  lVar3 = FUN_1400a7825(iVar2 + param_1,0x80000001,param_1);
  if (lVar3 == 0) {
    iVar4 = 0;
    if (param_1 < 0) {
      iVar4 = *(int *)(lVar1 + 0x15b8) + -1;
    }
    lVar3 = FUN_1400a7825(iVar4,iVar2,param_1);
    if (lVar3 == 0) goto LAB_1400a78f6;
  }
  *(longlong *)(lVar1 + 0x23f0) = lVar3;
  *(longlong *)(lVar1 + 0x23e8) = lVar3;
  *(undefined8 *)(lVar1 + 0x2414) = 0;
  *(undefined8 *)(lVar1 + 0x241c) = 0;
LAB_1400a78f6:
  *(undefined1 *)(lVar1 + 0x240c) = 0;
  return;
}

