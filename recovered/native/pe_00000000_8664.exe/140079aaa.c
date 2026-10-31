/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140079aaa */

void FUN_140079aaa(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar5;
  int iVar6;
  longlong lVar4;
  
  if (param_2 < param_3) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    iVar2 = *(int *)(lVar1 + 0x18);
    if (iVar2 == *(int *)(lVar1 + 0x1c)) {
      if (iVar2 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar2 / 2 + iVar2;
      }
      iVar6 = iVar2 + 1;
      if (iVar2 + 1 < iVar5) {
        iVar6 = iVar5;
      }
      lVar3 = FUN_140077ab4((longlong)iVar6 * 0xc);
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        FUN_1401c5180(lVar3,*(longlong *)(lVar1 + 0x20),(longlong)*(int *)(lVar1 + 0x18) * 0xc);
        FUN_140077b90(*(undefined8 *)(lVar1 + 0x20));
      }
      *(longlong *)(lVar1 + 0x20) = lVar3;
      *(int *)(lVar1 + 0x1c) = iVar6;
      iVar2 = *(int *)(lVar1 + 0x18);
    }
    else {
      lVar3 = *(longlong *)(lVar1 + 0x20);
    }
    lVar4 = (longlong)iVar2;
    *(int *)(lVar3 + lVar4 * 0xc) = param_2;
    *(int *)(lVar3 + 4 + lVar4 * 0xc) = param_3;
    *(undefined2 *)(lVar3 + 8 + lVar4 * 0xc) = 0;
    *(undefined1 *)(lVar3 + 10 + lVar4 * 0xc) = 0;
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  }
  return;
}

