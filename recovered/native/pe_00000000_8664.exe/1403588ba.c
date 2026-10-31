/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403588ba */

void FUN_1403588ba(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = DAT_14062a630;
  if ((param_1 != 0) && (*(int *)(DAT_14062a630 + 0x26bc) == param_1)) {
    *(int *)(DAT_14062a630 + 0x2740) = param_1;
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
        uVar3 = FUN_14030fcc8((longlong)iVar4);
        if (*(longlong *)(lVar2 + 0x2750) != 0) {
          FUN_1404b97c0(uVar3,*(longlong *)(lVar2 + 0x2750),(longlong)*(int *)(lVar2 + 0x2748));
          FUN_14030fda4(*(undefined8 *)(lVar2 + 0x2750));
        }
        *(undefined8 *)(lVar2 + 0x2750) = uVar3;
        *(int *)(lVar2 + 0x274c) = iVar4;
        iVar4 = *(int *)(lVar2 + 0x26c0) + 1;
      }
      *(int *)(lVar2 + 0x2748) = iVar1;
      FUN_1404b97c0(uVar3,*(undefined8 *)(lVar2 + 0x26d8),(longlong)iVar4);
      return;
    }
    if (*(int *)(lVar2 + 0x274c) < 0) {
      uVar3 = FUN_14030fcc8(0);
      if (*(longlong *)(lVar2 + 0x2750) != 0) {
        FUN_1404b97c0(uVar3,*(longlong *)(lVar2 + 0x2750),(longlong)*(int *)(lVar2 + 0x2748));
        FUN_14030fda4(*(undefined8 *)(lVar2 + 0x2750));
      }
      *(undefined8 *)(lVar2 + 0x2750) = uVar3;
      *(undefined4 *)(lVar2 + 0x274c) = 0;
    }
    *(undefined4 *)(lVar2 + 0x2748) = 0;
  }
  return;
}

