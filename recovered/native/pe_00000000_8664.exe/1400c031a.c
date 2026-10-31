/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c031a */

void FUN_1400c031a(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = DAT_140f2a910;
  if ((param_1 != 0) && (*(int *)(DAT_140f2a910 + 0x26bc) == param_1)) {
    *(int *)(DAT_140f2a910 + 0x2740) = param_1;
    if ((*(byte *)(lVar2 + 0x26b9) & 2) == 0) {
      iVar4 = *(int *)(lVar2 + 0x274c);
      iVar1 = *(int *)(lVar2 + 0x26c0) + 1;
      if (*(int *)(lVar2 + 0x26c0) < iVar4) {
        uVar3 = *(undefined8 *)(lVar2 + 0x2750);
        iVar4 = iVar1;
      }
      else {
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        uVar3 = FUN_140077ab4((longlong)iVar4);
        if (*(longlong *)(lVar2 + 0x2750) != 0) {
          FUN_1401c5180(uVar3,*(longlong *)(lVar2 + 0x2750),(longlong)*(int *)(lVar2 + 0x2748));
          FUN_140077b90(*(undefined8 *)(lVar2 + 0x2750));
        }
        *(undefined8 *)(lVar2 + 0x2750) = uVar3;
        *(int *)(lVar2 + 0x274c) = iVar4;
        iVar4 = *(int *)(lVar2 + 0x26c0) + 1;
      }
      *(int *)(lVar2 + 0x2748) = iVar1;
      FUN_1401c5180(uVar3,*(undefined8 *)(lVar2 + 0x26d8),(longlong)iVar4);
      return;
    }
    if (*(int *)(lVar2 + 0x274c) < 0) {
      uVar3 = FUN_140077ab4(0);
      if (*(longlong *)(lVar2 + 0x2750) != 0) {
        FUN_1401c5180(uVar3,*(longlong *)(lVar2 + 0x2750),(longlong)*(int *)(lVar2 + 0x2748));
        FUN_140077b90(*(undefined8 *)(lVar2 + 0x2750));
      }
      *(undefined8 *)(lVar2 + 0x2750) = uVar3;
      *(undefined4 *)(lVar2 + 0x274c) = 0;
    }
    *(undefined4 *)(lVar2 + 0x2748) = 0;
  }
  return;
}

