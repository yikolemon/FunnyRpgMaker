/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dbddc */

uint __fastcall FUN_101dbddc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0xac0);
  if ((uVar4 & 4) == 0) {
    return param_3;
  }
  iVar3 = param_2 * 0x1c4 + *(int *)(param_1 + 0xac4);
  uVar1 = -param_3;
  if ((int)-param_3 < 0) {
    uVar1 = param_3;
  }
  if (param_2 == 0) {
    if ((uVar4 & 1) == 0) goto LAB_101dbe3d;
    uVar2 = FUN_101dbefc(uVar1);
    if ((uVar4 & 8) == 0) {
      if ((int)uVar2 < 0x30) {
        uVar1 = (int)(uVar2 + 0x40) >> 1;
        goto LAB_101dbedd;
      }
      if (uVar2 < 0x80) {
        uVar1 = uVar2 + 0x16 & 0xc0;
        goto LAB_101dbedd;
      }
    }
    else {
      uVar1 = 0x40;
      if ((int)uVar2 < 0x40) goto LAB_101dbedd;
    }
    uVar1 = uVar2 + 0x20;
  }
  else {
    if ((uVar4 & 2) == 0) {
LAB_101dbe3d:
      if (*(int *)(iVar3 + 0x38) != 0) {
        uVar4 = *(uint *)(iVar3 + 0x40);
        uVar2 = uVar4 - uVar1;
        if ((int)uVar4 < (int)uVar1) {
          uVar2 = uVar1 - uVar4;
        }
        if (uVar2 < 0x28) {
          uVar1 = 0x30;
          if (0x30 < (int)uVar4) {
            uVar1 = uVar4;
          }
          goto LAB_101dbedd;
        }
      }
      if (uVar1 < 0x36) {
        uVar1 = uVar1 + (0x36 - uVar1 >> 1);
      }
      else if ((uVar1 < 0xc0) && (uVar4 = uVar1 & 0x3f, 9 < uVar4)) {
        if (uVar4 < 0x16) {
          uVar1 = uVar1 & 0xc0 | 10;
        }
        else if (uVar4 - 0x2a < 0xc) {
          uVar1 = uVar1 & 0xc0 | 0x36;
        }
      }
      goto LAB_101dbedd;
    }
    iVar3 = FUN_101dbefc(uVar1);
    uVar1 = 0x40;
    if (iVar3 < 0x40) goto LAB_101dbedd;
    uVar1 = iVar3 + 0x10;
  }
  uVar1 = uVar1 & 0x7fffffc0;
LAB_101dbedd:
  uVar4 = -uVar1;
  if (-1 < (int)param_3) {
    uVar4 = uVar1;
  }
  return uVar4;
}

