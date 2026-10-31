/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101df4f7 */

uint __fastcall
FUN_101df4f7(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = *(uint *)(param_1 + 0xac0);
  if ((uVar5 & 4) == 0) {
    return param_3;
  }
  iVar2 = param_2 * 0x204 + *(int *)(param_1 + 0xac4);
  if (*(char *)(iVar2 + 0x104) != '\0') {
    return param_3;
  }
  uVar4 = -param_3;
  if ((int)-param_3 < 0) {
    uVar4 = param_3;
  }
  if (param_2 == 0) {
    if ((uVar5 & 1) != 0) {
      uVar3 = FUN_101dbefc(uVar4);
      if ((uVar5 & 8) == 0) {
        if ((int)uVar3 < 0x30) {
          uVar5 = (int)(uVar3 + 0x40) >> 1;
          goto LAB_101df6d3;
        }
        if (uVar3 < 0x80) {
          uVar5 = uVar3 + 0x16 & 0xc0;
          uVar3 = uVar4 - uVar5;
          if ((int)uVar4 < (int)uVar5) {
            uVar3 = uVar5 - uVar4;
          }
          if ((0xf < uVar3) && (uVar5 = uVar4, uVar4 < 0x30)) {
            uVar5 = uVar4 >> 1 | 0x20;
          }
          goto LAB_101df6d3;
        }
      }
      else {
        uVar5 = 0x40;
        if ((int)uVar3 < 0x40) goto LAB_101df6d3;
      }
      uVar3 = uVar3 + 0x20;
      goto LAB_101df6cc;
    }
  }
  else {
    if ((uVar5 & 2) != 0) {
      iVar2 = FUN_101dbefc(uVar4);
      uVar5 = 0x40;
      if (iVar2 < 0x40) goto LAB_101df6d3;
      uVar3 = iVar2 + 0x10;
LAB_101df6cc:
      uVar5 = uVar3 & 0x7fffffc0;
      goto LAB_101df6d3;
    }
    uVar5 = uVar4;
    if (((byte)(param_6 >> 1) & 0x7f & uVar4 < 0xc0) != 0) goto LAB_101df6d3;
  }
  if ((param_5 & 1) == 0) {
    bVar6 = uVar4 < 0x39;
    uVar5 = 0x38;
  }
  else {
    bVar6 = uVar4 < 0x50;
    uVar5 = 0x40;
  }
  if (!bVar6) {
    uVar5 = uVar4;
  }
  if (*(int *)(iVar2 + 0x38) == 0) goto LAB_101df6d3;
  uVar4 = *(uint *)(iVar2 + 0x40);
  uVar3 = uVar4 - uVar5;
  if ((int)uVar4 < (int)uVar5) {
    uVar3 = uVar5 - uVar4;
  }
  if (uVar3 < 0x28) {
    uVar5 = 0x30;
    if (0x30 < (int)uVar4) {
      uVar5 = uVar4;
    }
    goto LAB_101df6d3;
  }
  if (uVar5 < 0xc0) {
    uVar4 = uVar5 & 0x3f;
    if (9 < uVar4) {
      if (uVar4 < 0x20) {
        uVar5 = uVar5 & 0xc0 | 10;
      }
      else if (uVar4 < 0x36) {
        uVar5 = uVar5 & 0xc0 | 0x36;
      }
    }
    goto LAB_101df6d3;
  }
  uVar4 = 0;
  if (0 < (int)param_4 && 0 < (int)param_3 || (int)(param_4 & param_3) < 0) {
    uVar1 = *(ushort *)(*(int *)(*(int *)(*(int *)(param_1 + 0xac4) + 4) + 0x58) + 0xc);
    if (9 < uVar1) {
      if (0x1d < uVar1) goto LAB_101df68d;
      param_4 = (int)(param_4 * (0x1e - uVar1 & 0xffff)) / 0x14;
    }
    uVar4 = -param_4;
    if ((int)-param_4 < 0) {
      uVar4 = param_4;
    }
  }
LAB_101df68d:
  uVar5 = (uVar5 - uVar4) + 0x20 & 0xffffffc0;
LAB_101df6d3:
  uVar4 = -uVar5;
  if (-1 < (int)param_3) {
    uVar4 = uVar5;
  }
  return uVar4;
}

