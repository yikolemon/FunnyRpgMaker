/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018eb89 */

void FUN_1018eb89(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == param_5) {
    iVar2 = FUN_1018e2fa(param_2);
    if (0 < param_8) {
      uVar3 = param_8 + 1;
      do {
        FUN_1025b2d0(param_4,param_1,iVar2 * param_7);
        param_1 = param_1 + param_3;
        param_4 = param_4 + param_6;
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
  }
  else if (param_2 == 1 && param_5 == 0) {
    if (0 < param_8) {
      do {
        if (0 < param_7) {
          iVar2 = 0;
          uVar3 = param_7 + 1;
          do {
            *(uint *)(param_4 + iVar2 * 4) = (uint)*(byte *)(param_1 + iVar2) << 0x18 | 0xffffff;
            uVar3 = uVar3 - 1;
            iVar2 = iVar2 + 1;
          } while (1 < uVar3);
        }
        param_1 = param_1 + param_3;
        param_4 = param_4 + param_6;
        iVar2 = param_8 + -1;
        bVar1 = 0 < param_8;
        param_8 = iVar2;
      } while (iVar2 != 0 && bVar1);
    }
  }
  else if (0 < param_8 && (param_2 == 0 && param_5 == 1)) {
    do {
      if (0 < param_7) {
        iVar2 = 0;
        uVar3 = param_7 + 1;
        do {
          *(undefined1 *)(param_4 + iVar2) = *(undefined1 *)(param_1 + 3 + iVar2 * 4);
          uVar3 = uVar3 - 1;
          iVar2 = iVar2 + 1;
        } while (1 < uVar3);
      }
      param_1 = param_1 + param_3;
      param_4 = param_4 + param_6;
      iVar2 = param_8 + -1;
      bVar1 = 0 < param_8;
      param_8 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  return;
}

