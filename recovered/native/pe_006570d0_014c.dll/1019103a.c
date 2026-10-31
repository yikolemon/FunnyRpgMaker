/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019103a */

int FUN_1019103a(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_1c;
  int local_18;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0x290) + 0xac);
  bVar3 = true;
  do {
    if ((int)uVar2 < 1) {
      local_1c = 0;
    }
    else {
      uVar6 = 0;
      local_1c = 0;
      local_18 = 0;
      do {
        iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x290) + 0xbc) + (uVar6 >> 5) * 4);
        iVar7 = (uVar6 & 0x1f) * 0x50;
        if ((*(int *)(iVar5 + 0x48 + iVar7) == param_2) &&
           (iVar5 = iVar5 + iVar7, (*(byte *)(iVar5 + 0x3f) & 4) == 0)) {
          if (bVar3) {
            if ((*(float *)(iVar5 + 0x14) != param_4) ||
               (NAN(*(float *)(iVar5 + 0x14)) || NAN(param_4))) goto LAB_101910f5;
          }
          fVar1 = *(float *)(iVar5 + 0x10);
          if ((param_3 < fVar1) && ((local_18 == 0 || (fVar1 < *(float *)(local_18 + 0x10))))) {
            local_18 = iVar5;
          }
          if ((fVar1 < param_3) &&
             ((local_1c == 0 ||
              (*(float *)(local_1c + 0x10) <= fVar1 && fVar1 != *(float *)(local_1c + 0x10))))) {
            local_1c = iVar5;
          }
        }
LAB_101910f5:
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      if (local_18 != 0) {
        if (local_1c == 0) {
          return local_18;
        }
        if ((param_3 + param_3 <= *(float *)(local_18 + 0x10)) &&
           (param_3 * DAT_102b70e0 < *(float *)(local_1c + 0x10))) {
          return local_18;
        }
        return local_1c;
      }
      bVar3 = (bool)(local_1c == 0 & bVar3);
    }
    bVar4 = !bVar3;
    bVar3 = false;
    if (bVar4) {
      return local_1c;
    }
  } while( true );
}

