/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000433e */

ulonglong FUN_18000433e(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint3 uVar3;
  uint uVar4;
  ulonglong uVar5;
  short sVar6;
  short sVar7;
  
  uVar2 = *(ulonglong *)(param_1 + 4);
  if (7 < *(ulonglong *)(param_1 + 6)) {
    param_1 = *(uint **)param_1;
  }
  if (1 < uVar2) {
    uVar4 = (*param_1 & 0xffffffdf) - 0x3a0041;
    if (uVar4 < 0x1a) {
      if (2 < (longlong)uVar2) {
        sVar6 = (short)param_1[1];
        return (ulonglong)CONCAT11((char)((ushort)sVar6 >> 8),sVar6 == 0x2f || sVar6 == 0x5c);
      }
    }
    else if (1 < (longlong)uVar2) {
      uVar1 = *param_1;
      uVar3 = (uint3)(uVar4 >> 8);
      uVar5 = CONCAT71((uint7)uVar3,1);
      if ((uVar1 & 0xffffffdf) - 0x3a0041 < 0x1a) {
        return uVar5;
      }
      if (((short)uVar1 == 0x5c) || ((uVar1 & 0xffff) == 0x2f)) {
        uVar4 = uVar1 >> 0x10;
        sVar6 = (short)(uVar1 >> 0x10);
        if (uVar2 < 4) {
          if (uVar2 == 2) {
            return 0;
          }
        }
        else if (((*(short *)((longlong)param_1 + 6) == 0x5c) ||
                 (*(short *)((longlong)param_1 + 6) == 0x2f)) &&
                ((uVar2 == 4 || (((short)param_1[2] != 0x2f && ((short)param_1[2] != 0x5c)))))) {
          if ((sVar6 != 0x2f) && (uVar4 != 0x5c)) {
            if (uVar4 != 0x3f) {
              return 0;
            }
            sVar7 = (short)param_1[1];
LAB_180004446:
            return (ulonglong)CONCAT31(uVar3,sVar7 == 0x3f);
          }
          sVar7 = (short)param_1[1];
          if (sVar7 == 0x2e) {
            return uVar5;
          }
          if (sVar7 == 0x3f) {
            return uVar5;
          }
          if (uVar4 == 0x3f) goto LAB_180004446;
        }
        if ((sVar6 == 0x5c) || (uVar4 == 0x2f)) {
          sVar6 = (short)param_1[1];
          return (ulonglong)CONCAT11((char)((ushort)sVar6 >> 8),sVar6 != 0x2f && sVar6 != 0x5c);
        }
      }
    }
  }
  return 0;
}

