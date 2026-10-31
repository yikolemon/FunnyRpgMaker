/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005897f */

void FUN_14005897f(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar1 = *(ushort *)(lVar3 + 0x62);
    uVar5 = uVar1 - 1;
    uVar2 = *(ushort *)(lVar3 + 0x60);
    if ((ulonglong)uVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)*(ushort *)(*(longlong *)(lVar3 + 0x78) + (ulonglong)(uVar2 - 1) * 2);
    }
    if ((int)uVar6 < (int)uVar5) {
      lVar4 = *(longlong *)(lVar3 + 0x68);
      if ((*(int *)(lVar4 + (ulonglong)uVar6 * 8) == *(int *)(lVar4 + (ulonglong)uVar5 * 8)) &&
         (*(int *)(lVar4 + 4 + (ulonglong)uVar6 * 8) == *(int *)(lVar4 + 4 + (ulonglong)uVar5 * 8)))
      {
        *(ushort *)(lVar3 + 0x62) = uVar1 - 1;
        uVar5 = uVar1 - 2;
      }
    }
    if ((int)uVar6 <= (int)uVar5) {
      *(ushort *)(lVar3 + 0x60) = uVar2 + 1;
      *(short *)(*(longlong *)(lVar3 + 0x78) + (ulonglong)uVar2 * 2) = (short)uVar5;
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}

