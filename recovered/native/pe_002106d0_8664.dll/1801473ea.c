/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801473ea */

void FUN_1801473ea(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = DAT_180419160;
  if ((param_1 != 0) && (*(int *)(DAT_180419160 + 0x26bc) == param_1)) {
    *(int *)(DAT_180419160 + 0x2740) = param_1;
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
        uVar3 = FUN_1800fe7f8((longlong)iVar4);
        if (*(longlong *)(lVar2 + 0x2750) != 0) {
          FUN_1802a82f0(uVar3,*(longlong *)(lVar2 + 0x2750),(longlong)*(int *)(lVar2 + 0x2748));
          FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2750));
        }
        *(undefined8 *)(lVar2 + 0x2750) = uVar3;
        *(int *)(lVar2 + 0x274c) = iVar4;
        iVar4 = *(int *)(lVar2 + 0x26c0) + 1;
      }
      *(int *)(lVar2 + 0x2748) = iVar1;
      FUN_1802a82f0(uVar3,*(undefined8 *)(lVar2 + 0x26d8),(longlong)iVar4);
      return;
    }
    if (*(int *)(lVar2 + 0x274c) < 0) {
      uVar3 = FUN_1800fe7f8(0);
      if (*(longlong *)(lVar2 + 0x2750) != 0) {
        FUN_1802a82f0(uVar3,*(longlong *)(lVar2 + 0x2750),(longlong)*(int *)(lVar2 + 0x2748));
        FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2750));
      }
      *(undefined8 *)(lVar2 + 0x2750) = uVar3;
      *(undefined4 *)(lVar2 + 0x274c) = 0;
    }
    *(undefined4 *)(lVar2 + 0x2748) = 0;
  }
  return;
}

