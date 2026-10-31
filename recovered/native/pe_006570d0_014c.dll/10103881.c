/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103881 */

undefined4 __fastcall FUN_10103881(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar8 = DAT_1039d74c;
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  if ((puVar1 != param_2) && ((param_2[1] & 0x1800) == 0x800)) {
    fVar6 = *(float *)(param_1 + 0x50);
    fVar7 = *(float *)(param_1 + 0x54);
    fVar17 = (float)*(undefined8 *)(param_2 + 2);
    if (fVar6 < fVar17) {
      return 0;
    }
    fVar18 = (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
    uVar5 = -(ushort)(fVar18 <= fVar7);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    fVar19 = (float)*(undefined8 *)(param_1 + 0x58) + fVar6;
    fVar20 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) + fVar7;
    iVar13 = -(uint)(fVar19 <= fVar17 + (float)*(undefined8 *)(param_2 + 4));
    iVar15 = -(uint)(fVar20 <= fVar18 + (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20));
    auVar3._4_4_ = iVar13;
    auVar3._0_4_ = iVar13;
    auVar3._8_4_ = iVar15;
    auVar3._12_4_ = iVar15;
    uVar10 = movmskpd((uint)uVar5,auVar3);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if ((byte)((byte)uVar10 >> 1) == 0) {
      return 0;
    }
    cVar9 = FUN_101292c3();
    if (cVar9 == '\0') {
      iVar13 = *(int *)(iVar8 + 0x1fe0);
      if (iVar13 != 0) {
        iVar15 = *(int *)(iVar8 + 0x1fe8);
        iVar12 = 0;
        do {
          puVar2 = *(undefined4 **)(iVar15 + iVar12);
          if ((puVar2 != puVar1) && (puVar2 != param_2)) {
            fVar17 = (float)*(undefined8 *)(puVar2 + 2);
            fVar18 = (float)((ulonglong)*(undefined8 *)(puVar2 + 2) >> 0x20);
            iVar14 = -(uint)(fVar6 < (float)*(undefined8 *)(puVar2 + 4) + fVar17);
            iVar16 = -(uint)(fVar7 < (float)((ulonglong)*(undefined8 *)(puVar2 + 4) >> 0x20) +
                                     fVar18);
            auVar4._4_4_ = iVar14;
            auVar4._0_4_ = iVar14;
            auVar4._8_4_ = iVar16;
            auVar4._12_4_ = iVar16;
            uVar10 = movmskpd(iVar15,auVar4);
            if ((((uVar10 & 2) != 0) &&
                (((fVar18 < fVar20 && ((uVar10 & 1) != 0)) && (fVar17 < fVar19)))) &&
               (cVar9 = FUN_10129307(), cVar9 != '\0')) {
              if (puVar1 == (undefined4 *)0x0) {
                return 0;
              }
              cVar9 = FUN_10129307();
              if (cVar9 != '\0') {
                return 0;
              }
            }
          }
          iVar12 = iVar12 + 4;
        } while (iVar13 << 2 != iVar12);
      }
      if ((*(byte *)(iVar8 + 0x27b5) & 8) != 0) {
        FUN_100f99e6("[viewport] Window \'%s\' merge into Viewport 0X%08X\n",
                     *(undefined4 *)(param_1 + 4),*param_2);
      }
      if ((*(char *)(param_1 + 0xf8) == '\x01') && (iVar13 = *(int *)(iVar8 + 0x1484), 0 < iVar13))
      {
        iVar15 = 0;
        do {
          iVar12 = *(int *)(*(int *)(iVar8 + 0x148c) + iVar15 * 4);
          if (*(undefined4 **)(iVar12 + 0x3c) == puVar1) {
            FUN_10118d2d(iVar12,param_2);
            iVar13 = *(int *)(iVar8 + 0x1484);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar13);
      }
      FUN_10118d2d(param_1,param_2);
      uVar11 = CONCAT31((int3)((uint)iVar8 >> 8),1);
      if ((*(byte *)(param_1 + 0xd) & 0x20) == 0) {
        FUN_10114ada(param_1);
        return uVar11;
      }
      return uVar11;
    }
  }
  return 0;
}

