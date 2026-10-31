/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400297f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400297f8(undefined8 *param_1,uint param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  longlong local_160;
  longlong local_158;
  uint local_150;
  undefined1 *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined1 local_128 [256];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_188;
  if (*(char *)*param_1 == '\x01') {
    if ((((0x1f < param_2) && (param_2 != 0x22)) && (param_2 != 0x5c)) && (param_2 != 0x7f)) {
      cVar3 = FUN_14001da36();
      if (cVar3 != '\0') goto LAB_1400298e5;
    }
    local_148 = local_128;
    local_140 = 0;
    local_138 = 0x100;
    local_130 = &LAB_140029a4e;
    local_28 = 0;
    local_160 = *param_3;
    local_158 = local_160 + param_3[1];
    local_150 = param_2;
    FUN_14001d858(local_168,&local_148);
    uVar1 = *(ulonglong *)param_1[1];
    uVar6 = uVar1 + local_140 + local_28;
    uVar2 = *(ulonglong *)param_1[2];
    uVar4 = CONCAT71((int7)((ulonglong)param_1[2] >> 8),uVar6 <= uVar2);
    if (uVar2 < uVar6) {
      *(longlong *)param_1[3] = *(longlong *)param_1[3] + (uVar2 - uVar1);
      *(undefined8 *)param_1[1] = *(undefined8 *)param_1[2];
      goto LAB_140029a1a;
    }
    *(ulonglong *)param_1[1] = uVar6;
    *(longlong *)param_1[3] = *(longlong *)param_1[3] + local_140 + local_28;
  }
  else {
LAB_1400298e5:
    lVar5 = 1;
    if ((0x10ff < param_2) && (lVar5 = 2, 1 < param_2 - 0x2329 && 0x115f < param_2)) {
      auVar7._0_4_ = -(uint)(_DAT_1401c8600 < (int)(param_2 + _DAT_1401c85f0 ^ _DAT_1401c8590));
      auVar7._4_4_ = -(uint)(_UNK_1401c8604 < (int)(param_2 + _UNK_1401c85f4 ^ _UNK_1401c8594));
      auVar7._8_4_ = -(uint)(_UNK_1401c8608 < (int)(param_2 + _UNK_1401c85f8 ^ _UNK_1401c8598));
      auVar7._12_4_ = -(uint)(_UNK_1401c860c < (int)(param_2 + _UNK_1401c85fc ^ _UNK_1401c859c));
      auVar8._0_4_ = -(uint)(_DAT_1401c8610 <
                            (int)((_DAT_1401c85d0 & param_2) + _DAT_1401c85e0 ^ _DAT_1401c8590));
      auVar8._4_4_ = -(uint)(_UNK_1401c8614 <
                            (int)((_UNK_1401c85d4 & param_2) + _UNK_1401c85e4 ^ _UNK_1401c8594));
      auVar8._8_4_ = -(uint)(_UNK_1401c8618 <
                            (int)((_UNK_1401c85d8 & param_2) + _UNK_1401c85e8 ^ _UNK_1401c8598));
      auVar8._12_4_ =
           -(uint)(_UNK_1401c861c <
                  (int)((_UNK_1401c85dc & param_2) + _UNK_1401c85ec ^ _UNK_1401c859c));
      auVar7 = packssdw(auVar7,auVar8);
      auVar7 = packsswb(auVar7,auVar7);
      if (((byte)(SUB161(auVar7 >> 7,0) & 1 | (SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                  (SUB161(auVar7 >> 0x17,0) & 1) << 2 | (SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                  (SUB161(auVar7 >> 0x27,0) & 1) << 4 | (SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                  (SUB161(auVar7 >> 0x37,0) & 1) << 6 | SUB161(auVar7 >> 0x3f,0) << 7) == 0xff) &&
         (param_2 == 0x303f || 0x764f < param_2 - 0x2e80)) {
        lVar5 = (ulonglong)((param_2 & 0xffffff00) == 0x1f900) + 1;
      }
    }
    uVar6 = lVar5 + *(ulonglong *)param_1[1];
    if (*(ulonglong *)param_1[2] < uVar6) {
      uVar4 = 0;
      goto LAB_140029a1a;
    }
    *(ulonglong *)param_1[1] = uVar6;
    lVar5 = param_3[1];
    *(longlong *)param_1[3] = *(longlong *)param_1[3] + lVar5;
    uVar4 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    if (*(char *)*param_1 != '\x01') goto LAB_140029a1a;
  }
  uVar6 = *(ulonglong *)param_1[1];
  if ((uVar6 < *(ulonglong *)param_1[2]) &&
     (*param_3 + param_3[1] == *(longlong *)param_1[4] + ((longlong *)param_1[4])[1])) {
    *(ulonglong *)param_1[1] = uVar6 + 1;
    *(longlong *)param_1[3] = *(longlong *)param_1[3] + 1;
  }
LAB_140029a1a:
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_188)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_188);
}

