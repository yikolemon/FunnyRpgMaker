/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004075c */

longlong FUN_14004075c(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ushort *puVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStackY_78 [32];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar1 = *(longlong *)(param_1 + 0x30);
  *param_2 = 0;
  uVar3 = FUN_1400211b6(param_1);
  if ((char)uVar3 == '\0') {
    lVar5 = -1;
  }
  else {
    uVar8 = (uint)uVar3 & 0xff;
    if ((char)uVar3 < '\0') {
      uVar4 = FUN_1400211b6(param_1);
      uVar8 = ((uint)uVar3 & 0x7f) << 8 | (uint)uVar4 & 0xff;
    }
    lVar5 = FUN_14001f231(lVar1,2,0,uVar8,0,&local_3c);
    if (local_3c == 0) {
      puVar6 = *(ushort **)(param_1 + 0x38);
      if (uVar8 != 0) {
        uVar9 = 0;
        sVar7 = 0;
        do {
          if (*(ushort **)(param_1 + 0x40) <= puVar6) {
LAB_1400408a2:
            FUN_14001c53d(lVar1,lVar5);
            goto LAB_1400408ad;
          }
          uVar2 = *puVar6;
          puVar6 = (ushort *)((longlong)puVar6 + 1);
          uVar12 = (byte)uVar2 & 0x7f;
          uVar10 = uVar8 - uVar9;
          if (uVar12 < uVar8 - uVar9) {
            uVar10 = uVar12 + 1;
          }
          iVar11 = (int)*(ushort **)(param_1 + 0x40);
          uVar12 = uVar9;
          if ((char)(byte)uVar2 < '\0') {
            if ((uint)(iVar11 - (int)puVar6) < uVar10 * 2) goto LAB_1400408a2;
            if (uVar10 != 0) {
              uVar12 = uVar10 + uVar9;
              do {
                uVar2 = *puVar6;
                puVar6 = puVar6 + 1;
                sVar7 = sVar7 + (uVar2 << 8 | uVar2 >> 8);
                uVar13 = (ulonglong)uVar9;
                uVar9 = uVar9 + 1;
                *(short *)(lVar5 + uVar13 * 2) = sVar7;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          else {
            if ((uint)(iVar11 - (int)puVar6) < uVar10) goto LAB_1400408a2;
            if (uVar10 != 0) {
              uVar12 = uVar10 + uVar9;
              do {
                uVar2 = *puVar6;
                puVar6 = (ushort *)((longlong)puVar6 + 1);
                sVar7 = sVar7 + (ushort)(byte)uVar2;
                uVar13 = (ulonglong)uVar9;
                uVar9 = uVar9 + 1;
                *(short *)(lVar5 + uVar13 * 2) = sVar7;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          uVar9 = uVar12;
        } while (uVar9 < uVar8);
      }
      *(ushort **)(param_1 + 0x38) = puVar6;
      *param_2 = uVar8;
    }
    else {
LAB_1400408ad:
      lVar5 = 0;
    }
  }
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
  }
  return lVar5;
}

