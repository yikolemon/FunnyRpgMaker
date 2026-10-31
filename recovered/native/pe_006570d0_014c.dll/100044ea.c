/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100044ea */

uint __fastcall FUN_100044ea(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined3 uVar4;
  short sVar5;
  uint uVar6;
  short sVar7;
  
  uVar1 = param_1[4];
  if (7 < param_1[5]) {
    param_1 = (uint *)*param_1;
  }
  if (1 < uVar1) {
    uVar3 = (*param_1 & 0xffffffdf) - 0x3a0041;
    if (uVar3 < 0x1a) {
      if (2 < (int)uVar1) {
        sVar5 = (short)param_1[1];
        return (uint)CONCAT11((char)((ushort)sVar5 >> 8),sVar5 == 0x2f || sVar5 == 0x5c);
      }
    }
    else if (1 < (int)uVar1) {
      uVar2 = *param_1;
      uVar4 = (undefined3)(uVar3 >> 8);
      uVar3 = CONCAT31(uVar4,1);
      if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
        return uVar3;
      }
      if (((short)uVar2 == 0x5c) || ((uVar2 & 0xffff) == 0x2f)) {
        uVar6 = uVar2 >> 0x10;
        sVar5 = (short)(uVar2 >> 0x10);
        if (uVar1 < 4) {
          if (uVar1 == 2) {
            return 0;
          }
        }
        else if (((*(short *)((int)param_1 + 6) == 0x5c) || (*(short *)((int)param_1 + 6) == 0x2f))
                && ((uVar1 == 4 || (((short)param_1[2] != 0x2f && ((short)param_1[2] != 0x5c)))))) {
          if ((sVar5 != 0x2f) && (uVar6 != 0x5c)) {
            if (uVar6 != 0x3f) {
              return 0;
            }
            sVar7 = (short)param_1[1];
LAB_100045db:
            return CONCAT31(uVar4,sVar7 == 0x3f);
          }
          sVar7 = (short)param_1[1];
          if (sVar7 == 0x2e) {
            return uVar3;
          }
          if (sVar7 == 0x3f) {
            return uVar3;
          }
          if (uVar6 == 0x3f) goto LAB_100045db;
        }
        if ((sVar5 == 0x5c) || (uVar6 == 0x2f)) {
          sVar5 = (short)param_1[1];
          return (uint)CONCAT11((char)((ushort)sVar5 >> 8),sVar5 != 0x2f && sVar5 != 0x5c);
        }
      }
    }
  }
  return 0;
}

