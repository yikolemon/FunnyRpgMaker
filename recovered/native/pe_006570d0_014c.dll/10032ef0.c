/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10032ef0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10032ef0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int local_13c;
  undefined1 local_138 [4];
  int local_134;
  int local_130;
  uint local_12c;
  undefined1 *local_128;
  int local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  undefined1 local_118 [256];
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_13c;
  if ((*(char *)*param_1 == '\x01') &&
     ((((param_2 < 0x20 || (param_2 == 0x22)) || (param_2 == 0x5c)) ||
      ((param_2 == 0x7f || (cVar4 = FUN_10027959(param_2), cVar4 == '\0')))))) {
    local_128 = local_118;
    local_124 = 0;
    local_120 = 0x100;
    local_11c = &LAB_1003312c;
    local_18 = 0;
    local_134 = param_3;
    local_13c = param_4 + param_3;
    local_12c = param_2;
    local_130 = local_13c;
    FUN_100277c8(local_138,&local_128,&local_134);
    uVar1 = *(uint *)param_1[1];
    uVar6 = uVar1 + local_124 + local_18;
    uVar2 = *(uint *)param_1[2];
    uVar7 = CONCAT31((int3)((uint)param_1[2] >> 8),uVar6 <= uVar2);
    if (uVar2 < uVar6) {
      *(int *)param_1[3] = *(int *)param_1[3] + (uVar2 - uVar1);
      *(undefined4 *)param_1[1] = *(undefined4 *)param_1[2];
      goto LAB_100330fe;
    }
    *(uint *)param_1[1] = uVar6;
    *(int *)param_1[3] = *(int *)param_1[3] + local_124 + local_18;
    puVar8 = (uint *)param_1[1];
    uVar6 = *puVar8;
    if ((*(uint *)param_1[2] <= uVar6) || (local_13c != *(int *)param_1[4] + ((int *)param_1[4])[1])
       ) goto LAB_100330fe;
  }
  else {
    if (param_2 < 0x1100) {
      uVar6 = 0;
LAB_100330a6:
      iVar5 = uVar6 + 1;
    }
    else {
      iVar5 = 2;
      if (1 < param_2 - 0x2329 && 0x115f < param_2) {
        auVar9._0_4_ = -(uint)(_DAT_1028f690 < (int)(param_2 + _DAT_1028f680 ^ _DAT_1028f620));
        auVar9._4_4_ = -(uint)(_UNK_1028f694 < (int)(param_2 + _UNK_1028f684 ^ _UNK_1028f624));
        auVar9._8_4_ = -(uint)(_UNK_1028f698 < (int)(param_2 + _UNK_1028f688 ^ _UNK_1028f628));
        auVar9._12_4_ = -(uint)(_UNK_1028f69c < (int)(param_2 + _UNK_1028f68c ^ _UNK_1028f62c));
        auVar10._0_4_ =
             -(uint)(_DAT_1028f6a0 <
                    (int)((_DAT_1028f660 & param_2) + _DAT_1028f670 ^ _DAT_1028f620));
        auVar10._4_4_ =
             -(uint)(_UNK_1028f6a4 <
                    (int)((_UNK_1028f664 & param_2) + _UNK_1028f674 ^ _UNK_1028f624));
        auVar10._8_4_ =
             -(uint)(_UNK_1028f6a8 <
                    (int)((_UNK_1028f668 & param_2) + _UNK_1028f678 ^ _UNK_1028f628));
        auVar10._12_4_ =
             -(uint)(_UNK_1028f6ac <
                    (int)((_UNK_1028f66c & param_2) + _UNK_1028f67c ^ _UNK_1028f62c));
        auVar9 = packssdw(auVar9,auVar10);
        auVar9 = packsswb(auVar9,auVar9);
        if (((byte)(SUB161(auVar9 >> 7,0) & 1 | (SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                    (SUB161(auVar9 >> 0x17,0) & 1) << 2 | (SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                    (SUB161(auVar9 >> 0x27,0) & 1) << 4 | (SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                    (SUB161(auVar9 >> 0x37,0) & 1) << 6 | SUB161(auVar9 >> 0x3f,0) << 7) == 0xff) &&
           (param_2 == 0x303f || 0x764f < param_2 - 0x2e80)) {
          uVar6 = (uint)((param_2 & 0xffffff00) == 0x1f900);
          goto LAB_100330a6;
        }
      }
    }
    uVar6 = iVar5 + *(uint *)param_1[1];
    if (*(uint *)param_1[2] < uVar6) {
      uVar7 = 0;
      goto LAB_100330fe;
    }
    *(uint *)param_1[1] = uVar6;
    piVar3 = (int *)param_1[3];
    *piVar3 = *piVar3 + param_4;
    uVar7 = CONCAT31((int3)((uint)piVar3 >> 8),1);
    if (*(char *)*param_1 != '\x01') goto LAB_100330fe;
    puVar8 = (uint *)param_1[1];
    uVar6 = *puVar8;
    if ((*(uint *)param_1[2] <= uVar6) ||
       (param_3 + param_4 != *(int *)param_1[4] + ((int *)param_1[4])[1])) goto LAB_100330fe;
  }
  *puVar8 = uVar6 + 1;
  *(int *)param_1[3] = *(int *)param_1[3] + 1;
LAB_100330fe:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_13c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar7;
}

