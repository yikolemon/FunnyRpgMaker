/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026f660 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1026f660(uint param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 local_1c;
  undefined8 local_14;
  
  local_1c = (double)CONCAT44(param_2,param_1);
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    if ((param_1 != 0) || ((param_2 != 0x7ff00000 && (param_2 != 0xfff00000)))) {
      if ((param_2 & 0x7ff80000) == 0x7ff80000) {
        uVar2 = FUN_10281250(0x133f,0xffff);
        fVar8 = (float10)FUN_10280a50(param_1,param_2,(double)(int)param_3);
        FUN_10281250(uVar2,0xffff);
        return (float10)(double)fVar8;
      }
      uVar2 = FUN_10281250(0x133f,0xffff);
      fVar8 = (float10)FUN_10280900(8,0x19,param_1,param_2,(double)(int)param_3,
                                    (double)CONCAT44(param_2,param_1) + DAT_1028b438,uVar2);
      return fVar8;
    }
LAB_1026f754:
    return (float10)(double)CONCAT44(param_2,param_1);
  }
  if (local_1c == 0.0) goto LAB_1026f754;
  if (((param_2 & 0x7ff00000) == 0) && (param_1 != 0 || (param_2 & 0xfffff) != 0)) {
    uVar4 = param_2 & 0xfffff;
    iVar6 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar4 == 0) {
      iVar6 = 0x1f;
      if (param_1 != 0) {
        for (; param_1 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
    }
    else {
      iVar6 = iVar6 + 0x20;
    }
    uVar10 = __allshl();
    uVar5 = (uint)((ulonglong)uVar10 >> 0x20) & 0xffefffff;
    if (local_1c < 0.0) {
      uVar5 = uVar5 | 0x80000000;
    }
    uVar4 = iVar6 - 0x431;
    local_14 = (double)CONCAT44(uVar5,(int)uVar10);
    local_1c = local_14;
  }
  else {
    uVar4 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
    uVar5 = param_2;
  }
  uVar7 = uVar4 + param_3;
  iVar6 = ((int)uVar4 >> 0x1f) + ((int)param_3 >> 0x1f);
  uVar3 = iVar6 + (uint)CARRY4(uVar4,param_3);
  if ((-1 < (int)uVar3) &&
     ((uVar3 != 0 &&
       SCARRY4((int)uVar4 >> 0x1f,(int)param_3 >> 0x1f) ==
       SCARRY4(iVar6,(uint)CARRY4(uVar4,param_3)) || (0x400 < uVar7)))) {
    if ((-1 < (int)uVar3) && ((0 < (int)uVar3 || (0xa00 < uVar7)))) {
      uVar2 = FUN_10281250(0x133f,0xffff);
      uVar1 = CONCAT44(uVar5,(undefined4)local_1c) & 0xbfefffffffffffff;
      fVar8 = (float10)FUN_10281570((int)DAT_10324f70,(int)((ulonglong)DAT_10324f70 >> 0x20),
                                    (int)uVar1,(uint)(uVar1 >> 0x20) | 0x3fe00000,uVar2);
      fVar8 = (float10)FUN_10280900(0x11,0x19,param_1,param_2,(double)(int)param_3,(double)fVar8);
      return fVar8;
    }
    uVar2 = FUN_10281250(0x133f,0xffff);
    uVar1 = CONCAT44(uVar5,(undefined4)local_1c) & 0xbfefffffffffffff;
    local_1c._0_4_ = (undefined4)uVar1;
    fVar8 = (float10)FUN_10280900(0x11,0x19,param_1,param_2,(double)(int)param_3,
                                  (undefined4)local_1c,
                                  (uVar7 - 0x202) * 0x100000 | (uint)(uVar1 >> 0x20) & 0x800fffff,
                                  uVar2);
    return fVar8;
  }
  if (uVar3 < 0x80000000) {
LAB_1026f9f4:
    uVar1 = CONCAT44(uVar5,(undefined4)local_1c) & 0xbfefffffffffffff;
    local_1c._4_4_ = (uint)(uVar1 >> 0x20);
    local_1c._0_4_ = (undefined4)uVar1;
    return (float10)(double)CONCAT44((uVar7 + 0x3fe) * 0x100000 | local_1c._4_4_ & 0x800fffff,
                                     (undefined4)local_1c);
  }
  if (-2 < (int)uVar3) {
    if (0xfffffc02 < uVar7) goto LAB_1026f9f4;
    if ((uVar3 < 0x80000000) || ((-2 < (int)uVar3 && (0xfffff602 < uVar7)))) {
      uVar2 = FUN_10281250(0x133f,0xffff);
      uVar1 = CONCAT44(uVar5,(undefined4)local_1c) & 0xbfefffffffffffff;
      local_1c._0_4_ = (undefined4)uVar1;
      dVar9 = (double)CONCAT44((uVar7 + 0x9fe) * 0x100000 | (uint)(uVar1 >> 0x20) & 0x800fffff,
                               (undefined4)local_1c);
      goto LAB_1026f9c0;
    }
  }
  uVar2 = FUN_10281250(0x133f,0xffff);
  dVar9 = (double)(CONCAT44(uVar5,(undefined4)local_1c) & 0xbfefffffffffffff | 0x3fe0000000000000) *
          _DAT_10324ec0;
LAB_1026f9c0:
  fVar8 = (float10)FUN_10280900(0x12,0x19,param_1,param_2,(double)(int)param_3,SUB84(dVar9,0),
                                (int)((ulonglong)dVar9 >> 0x20),uVar2);
  return fVar8;
}

