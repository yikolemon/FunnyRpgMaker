/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100af49e */

bool __fastcall FUN_100af49e(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  
  uVar1 = param_1[4];
  if (7 < param_1[5]) {
    param_1 = (uint *)*param_1;
  }
  if ((int)uVar1 < 2) {
    return false;
  }
  uVar2 = *param_1;
  if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    return true;
  }
  if (((short)uVar2 == 0x5c) || ((uVar2 & 0xffff) == 0x2f)) {
    uVar5 = uVar2 >> 0x10;
    sVar4 = (short)(uVar2 >> 0x10);
    if (uVar1 < 4) {
      if (uVar1 == 2) {
        return false;
      }
    }
    else if (((*(short *)((int)param_1 + 6) == 0x5c) || (*(short *)((int)param_1 + 6) == 0x2f)) &&
            ((uVar1 == 4 || (((short)param_1[2] != 0x2f && ((short)param_1[2] != 0x5c)))))) {
      if ((sVar4 != 0x2f) && (uVar5 != 0x5c)) {
        if (uVar5 != 0x3f) {
          return false;
        }
        sVar7 = (short)param_1[1];
LAB_100af582:
        return sVar7 == 0x3f;
      }
      sVar7 = (short)param_1[1];
      if (sVar7 == 0x2e) {
        return true;
      }
      if (sVar7 == 0x3f) {
        return true;
      }
      if (uVar5 == 0x3f) goto LAB_100af582;
    }
    if ((sVar4 == 0x5c) || (uVar5 == 0x2f)) {
      if ((short)param_1[1] == 0x2f) {
        return false;
      }
      if ((short)param_1[1] == 0x5c) {
        return false;
      }
      if (uVar1 == 3) {
        return true;
      }
      iVar6 = 6;
      do {
        iVar3 = iVar6;
        if ((*(short *)((int)param_1 + iVar6) == 0x2f) || (*(short *)((int)param_1 + iVar6) == 0x5c)
           ) break;
        iVar6 = iVar6 + 2;
        iVar3 = uVar1 * 2;
      } while (uVar1 * 2 != iVar6);
      return (uint *)((int)param_1 + iVar3) != param_1;
    }
  }
  return false;
}

