/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180108520 */

ulonglong FUN_180108520(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar7 = DAT_180419160;
  puVar1 = *(undefined4 **)(param_1 + 0x48);
  if ((puVar1 != param_2) && ((param_2[1] & 0x1800) == 0x800)) {
    fVar17 = (float)*(undefined8 *)(param_1 + 0x60);
    fVar18 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    uVar10 = 0;
    fVar15 = (float)*(undefined8 *)(param_2 + 2);
    uVar9 = uVar10;
    if (fVar17 < fVar15) goto LAB_1801085b4;
    fVar16 = (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
    uVar6 = -(ushort)(fVar16 <= fVar18);
    if ((uVar6 & 1) == 0) goto LAB_1801085b4;
    fVar19 = (float)*(undefined8 *)(param_1 + 0x68) + fVar17;
    fVar20 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) + fVar18;
    iVar12 = -(uint)(fVar19 <= fVar15 + (float)*(undefined8 *)(param_2 + 4));
    iVar13 = -(uint)(fVar20 <= fVar16 + (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20));
    auVar4._4_4_ = iVar12;
    auVar4._0_4_ = iVar12;
    auVar4._8_4_ = iVar13;
    auVar4._12_4_ = iVar13;
    uVar8 = movmskpd((uint)uVar6,auVar4);
    if (((uVar8 & 1) == 0) || (uVar9 = 0, (byte)((byte)uVar8 >> 1) == 0)) goto LAB_1801085b4;
    uVar8 = FUN_18012f386(param_1);
    if ((char)uVar8 == '\0') {
      iVar12 = *(int *)(lVar7 + 0x2178);
      if ((longlong)iVar12 != 0) {
        lVar11 = *(longlong *)(lVar7 + 0x2180);
        uVar10 = 0;
        do {
          puVar2 = *(undefined4 **)(lVar11 + uVar10);
          if ((puVar2 != puVar1) && (puVar2 != param_2)) {
            fVar15 = (float)*(undefined8 *)(puVar2 + 2);
            fVar16 = (float)((ulonglong)*(undefined8 *)(puVar2 + 2) >> 0x20);
            iVar13 = -(uint)(fVar17 < (float)*(undefined8 *)(puVar2 + 4) + fVar15);
            iVar14 = -(uint)(fVar18 < (float)((ulonglong)*(undefined8 *)(puVar2 + 4) >> 0x20) +
                                      fVar16);
            auVar5._4_4_ = iVar13;
            auVar5._0_4_ = iVar13;
            auVar5._8_4_ = iVar14;
            auVar5._12_4_ = iVar14;
            uVar8 = movmskpd(uVar8,auVar5);
            if (((uVar8 & 2) != 0) &&
               (((fVar16 < fVar20 && ((uVar8 & 1) != 0)) && (fVar15 < fVar19)))) {
              uVar8 = FUN_18012f3cf(puVar2,param_2);
              if ((char)uVar8 != '\0') {
                if (puVar1 == (undefined4 *)0x0) goto LAB_1801085b2;
                uVar8 = FUN_18012f3cf(puVar1,puVar2);
                if ((char)uVar8 != '\0') goto LAB_1801085b2;
              }
            }
          }
          uVar10 = uVar10 + 8;
        } while ((longlong)iVar12 * 8 != uVar10);
      }
      if ((*(byte *)(lVar7 + 0x2acd) & 8) != 0) {
        FUN_1800fdfea("[viewport] Window \'%s\' merge into Viewport 0X%08X\n",
                      *(undefined8 *)(param_1 + 8),*param_2);
      }
      if (*(char *)(param_1 + 0x108) == '\x01') {
        iVar12 = *(int *)(lVar7 + 0x15a8);
        if (0 < iVar12) {
          lVar11 = 0;
          do {
            lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x15b0) + lVar11 * 8);
            if (*(undefined4 **)(lVar3 + 0x48) == puVar1) {
              FUN_18011dd57(lVar3,param_2);
              iVar12 = *(int *)(lVar7 + 0x15a8);
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < iVar12);
        }
      }
      FUN_18011dd57(param_1,param_2);
      uVar9 = CONCAT71((int7)(uVar10 >> 8),1);
      if ((*(byte *)(param_1 + 0x15) & 0x20) == 0) {
        FUN_18011994d(param_1);
      }
      goto LAB_1801085b4;
    }
  }
LAB_1801085b2:
  uVar9 = 0;
LAB_1801085b4:
  return uVar9 & 0xffffffff;
}

