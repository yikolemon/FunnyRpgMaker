/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110699 */

void FUN_180110699(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  ulonglong local_60;
  
  lVar11 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_c8;
  lVar6 = FUN_18011abab();
  local_90 = lVar11;
  fVar16 = *(float *)(lVar11 + 0x2424);
  if ((fVar16 <= 0.0) && (*(float *)(lVar11 + 0x2404) <= 0.0)) goto LAB_180110a22;
  if (*(longlong *)(lVar11 + 0x23f0) == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = *(char *)(*(longlong *)(lVar11 + 0x23f0) + 0x109);
  }
  if ((lVar6 == 0) && (cVar3 == '\0')) goto LAB_180110a22;
  if (lVar6 == 0) {
    if (cVar3 == '\0') {
      local_88 = 0;
      lVar11 = 0;
    }
    else {
      uVar4 = FUN_18010129b(0x3d,fVar16);
      lVar11 = local_90;
      FUN_18012bff8(*(undefined8 *)(local_90 + 0x23f0),uVar4);
      lVar2 = local_90;
      lVar13 = *(longlong *)(lVar11 + 0x23f0);
      lVar12 = *(longlong *)(lVar11 + 0x23f8);
      lVar11 = *(longlong *)(lVar13 + 0x48);
      lVar10 = lVar11;
      if ((lVar12 == 0) || (*(char *)(lVar12 + 0x109) != '\x01')) {
LAB_18011081a:
        local_88 = 0;
      }
      else {
        local_88 = 0;
        if (*(longlong *)(lVar12 + 0x48) == 0) goto LAB_18011081a;
        if (*(longlong *)(lVar12 + 0x48) != lVar11) {
          uVar4 = FUN_18010129b(0x3d,*(undefined4 *)(local_90 + 0x2424));
          FUN_18012bff8(*(undefined8 *)(lVar2 + 0x23f8),uVar4);
          lVar13 = *(longlong *)(lVar2 + 0x23f0);
          local_88 = *(longlong *)(*(longlong *)(lVar2 + 0x23f8) + 0x48);
          lVar10 = *(longlong *)(lVar13 + 0x48);
        }
      }
      fVar16 = *(float *)(local_90 + 0x1320);
      fVar14 = (float)*(undefined8 *)(lVar13 + 0x60);
      fVar15 = (float)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
      fVar17 = fVar14 - fVar16;
      fVar18 = fVar15 - fVar16;
      fStack_70 = fVar16 + (float)*(undefined8 *)(lVar13 + 0x68) + fVar14;
      fStack_6c = fVar16 + (float)((ulonglong)*(undefined8 *)(lVar13 + 0x68) >> 0x20) + fVar15;
      local_78 = CONCAT44(fVar18,fVar17);
      if ((*(float *)(lVar10 + 0x10) <= fStack_70 - fVar17) &&
         (*(float *)(lVar10 + 0x14) <= fStack_6c - fVar18)) {
        fVar16 = DAT_1802bb8e0 - fVar16;
        fStack_70 = fVar16 + fStack_70;
        fStack_6c = fVar16 + fStack_6c;
        local_78 = CONCAT44(fVar18 - fVar16,fVar17 - fVar16);
      }
      FUN_18018ecc2(*(longlong *)(lVar13 + 800) + 0x88);
      piVar9 = *(int **)(lVar13 + 800);
      if (*piVar9 == 0) {
        FUN_18018f126();
        piVar9 = *(int **)(lVar13 + 800);
      }
      local_80 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar10 + 0x10) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)(lVar10 + 8) >> 0x20),
                          (float)*(undefined8 *)(lVar10 + 0x10) + (float)*(undefined8 *)(lVar10 + 8)
                         );
      FUN_18018f5a4(piVar9,lVar10 + 8,&local_80,0);
      uVar7 = *(undefined8 *)(lVar13 + 800);
      uVar4 = *(undefined4 *)(lVar13 + 0x98);
      uVar5 = FUN_18010129b(0x3c,*(undefined4 *)(local_90 + 0x2404));
      local_98 = 0;
      local_a0 = 0x40400000;
      local_a8 = uVar4;
      FUN_180192c0a(uVar7,&local_78,&fStack_70,uVar5);
      FUN_18018f750(*(undefined8 *)(lVar13 + 800));
    }
  }
  else {
    uVar7 = FUN_18010f147(lVar6);
    uVar4 = FUN_180101385(*(undefined4 *)(lVar6 + 0x21c),fVar16);
    FUN_18012bff8(uVar7,uVar4);
    lVar11 = *(longlong *)(lVar6 + 0x48);
    local_88 = 0;
  }
  iVar1 = *(int *)(local_90 + 0x2178);
  if ((longlong)iVar1 != 0) {
    lVar13 = *(longlong *)(local_90 + 0x2180);
    lVar12 = 0;
    do {
      lVar2 = *(longlong *)(lVar13 + lVar12);
      if ((lVar2 != lVar11) && (lVar2 != local_88)) {
        if (lVar6 == 0) {
          uVar7 = 0x3d;
        }
        else {
          uVar7 = 0x3e;
          if ((*(longlong *)(lVar2 + 0x78) != 0) &&
             (cVar3 = FUN_180108cef(*(longlong *)(lVar2 + 0x78),lVar6), cVar3 != '\0'))
          goto LAB_180110a15;
        }
        uVar8 = FUN_180103228(lVar2);
        uVar4 = FUN_18010129b(uVar7,*(undefined4 *)(local_90 + 0x2424));
        local_78 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(lVar2 + 8) >> 0x20),
                            (float)*(undefined8 *)(lVar2 + 0x10) + (float)*(undefined8 *)(lVar2 + 8)
                           );
        local_a0 = 0;
        local_a8 = 0;
        FUN_180192d20(uVar8,lVar2 + 8,&local_78,uVar4);
      }
LAB_180110a15:
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar1 * 8 != lVar12);
  }
LAB_180110a22:
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_c8);
  }
  return;
}

