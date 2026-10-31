/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d2220 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1400d2220(longlong param_1,ulonglong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 local_8668 [40];
  undefined1 local_8640 [24];
  undefined4 local_8628;
  uint local_8624 [255];
  undefined1 local_8228 [488];
  undefined8 auStack_8040 [6];
  undefined8 uStack_8010;
  ulonglong local_8008;
  byte local_8000 [4];
  byte local_7ffc [36];
  int local_7fd8 [4084];
  ulonglong auStack_4008 [6];
  int aiStack_3fd8 [4068];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)local_8668;
  lVar5 = 0x38;
  do {
    *(undefined8 *)((longlong)auStack_8040 + lVar5) = 0;
    *(undefined4 *)((longlong)&local_8008 + lVar5) = 0xffffffff;
    *(undefined8 *)((longlong)&uStack_8010 + lVar5) = 0xffffffffffffffff;
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x4038);
  if (param_2 != 0) {
    uVar6 = 0;
    do {
      (&local_8008)[(ulonglong)*(byte *)(param_1 + uVar6) * 8] =
           (&local_8008)[(ulonglong)*(byte *)(param_1 + uVar6) * 8] + 1;
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
  }
  lVar5 = 0;
  do {
    *(ulonglong *)((longlong)&local_8008 + lVar5) =
         (ulonglong)(*(longlong *)((longlong)&local_8008 + lVar5) * 0xffff) / param_2;
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x4000);
  lVar5 = 0x100;
  uVar6 = 0x100;
  do {
    iVar12 = 0;
    iVar13 = -1;
    uVar20 = 0;
    puVar17 = &local_8008;
    iVar8 = -1;
    do {
      if ((int)puVar17[6] == -1) {
        uVar20 = uVar20 + 1;
        iVar16 = iVar12;
        if (iVar13 == -1) {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar13;
          if ((((&local_8008)[(longlong)iVar13 * 8] <= *puVar17) &&
              (iVar10 = iVar12, iVar16 = iVar13, iVar8 != -1)) &&
             ((&local_8008)[(longlong)iVar8 * 8] <= *puVar17)) goto LAB_1400d2304;
        }
      }
      else {
LAB_1400d2304:
        iVar10 = iVar8;
        iVar16 = iVar13;
      }
      iVar13 = iVar16;
      puVar17 = puVar17 + 8;
      iVar12 = iVar12 + 1;
      iVar8 = iVar10;
    } while (uVar20 < uVar6);
    local_7fd8[lVar5 * 0x10] = -1;
    lVar18 = (longlong)iVar13;
    lVar11 = (longlong)iVar10;
    (&local_8008)[lVar5 * 8] = (&local_8008)[lVar11 * 8] + (&local_8008)[lVar18 * 8];
    local_7fd8[lVar5 * 0x10 + 1] = iVar13;
    local_7fd8[lVar5 * 0x10 + 2] = iVar10;
    pbVar1 = local_7ffc + lVar18 * 0x40 + 0x20;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1 = local_7ffc + lVar11 * 0x40 + 0x20;
    pbVar1[0] = 1;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    local_7fd8[lVar18 * 0x10] = (int)lVar5;
    local_7fd8[lVar11 * 0x10] = (int)lVar5;
    lVar5 = lVar5 + 1;
    uVar6 = uVar6 - 1;
  } while (lVar5 != 0x1ff);
  lVar5 = 0;
  do {
    lVar11 = lVar5 * 0x40;
    pbVar1 = local_7ffc + lVar11 + -4;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    local_8628 = local_8628 & 0xffffff00;
    iVar8 = local_7fd8[lVar5 * 0x10];
    if (iVar8 == -1) {
      local_7ffc[lVar11] = 0;
      iVar13 = 0;
      uVar6 = 0;
LAB_1400d2493:
      bVar9 = 0;
      iVar8 = 0;
      uVar20 = 0;
      do {
        iVar12 = (int)uVar20;
        if (iVar8 == 8) {
          local_7ffc[iVar12 + lVar11 + 1] = 0;
          uVar19 = (longlong)iVar12 + 1;
          bVar9 = 0;
          uVar20 = uVar19 & 0xffffffff;
          iVar8 = 0;
        }
        else {
          uVar19 = (ulonglong)iVar12;
        }
        bVar2 = *(byte *)((longlong)local_8624 + (uVar6 - 4));
        bVar9 = (byte)((bVar2 & 1) << ((byte)iVar8 & 0x1f)) | bVar9;
        local_7ffc[uVar19 + lVar11] = bVar9;
        *(byte *)((longlong)local_8624 + (uVar6 - 4)) = bVar2 >> 1;
        iVar12 = iVar13 + -1;
        iVar8 = iVar8 + 1;
        iVar13 = iVar12;
        if (iVar12 == 0) {
          iVar13 = 8;
        }
        uVar14 = (int)uVar6 - (uint)(iVar12 == 0);
        uVar6 = (ulonglong)uVar14;
      } while (-1 < (int)uVar14);
    }
    else {
      iVar13 = 0;
      bVar9 = 0;
      iVar12 = 0;
      uVar6 = 0;
      lVar18 = lVar5;
      do {
        iVar16 = (int)uVar6;
        if (iVar13 == 8) {
          *(undefined1 *)((longlong)local_8624 + (longlong)iVar16 + -3) = 0;
          uVar20 = (longlong)iVar16 + 1;
          iVar13 = 1;
          bVar9 = 0;
          uVar6 = uVar20 & 0xffffffff;
        }
        else {
          uVar20 = (ulonglong)iVar16;
          bVar9 = bVar9 * '\x02';
          iVar13 = iVar13 + 1;
        }
        bVar9 = bVar9 | local_7ffc[lVar18 * 0x40 + 0x20];
        *(byte *)((longlong)local_8624 + (uVar20 - 4)) = bVar9;
        iVar12 = iVar12 + 1;
        lVar18 = (longlong)iVar8;
        iVar8 = local_7fd8[lVar18 * 0x10];
      } while (iVar8 != -1);
      *(int *)(local_7ffc + lVar11 + -4) = iVar12;
      local_7ffc[lVar11] = 0;
      if (-1 < (int)uVar6) goto LAB_1400d2493;
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x100) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0;
      }
      lVar5 = 0;
      lVar11 = 0;
      uVar6 = 0;
      do {
        lVar18 = (ulonglong)*(byte *)(param_1 + uVar6) * 0x40;
        iVar8 = *(int *)(local_7ffc + lVar18 + -4);
        if (0 < iVar8) {
          uVar14 = (uint)local_7ffc[lVar18];
          iVar12 = 0;
          iVar13 = 0;
          do {
            if (lVar5 == 8) {
              lVar11 = lVar11 + 1;
              if (param_3 != (undefined1 *)0x0) {
                param_3[lVar11] = 0;
              }
              lVar5 = 0;
            }
            if (iVar12 == 8) {
              lVar15 = (longlong)iVar13;
              iVar13 = iVar13 + 1;
              uVar14 = (uint)local_7ffc[lVar15 + lVar18 + 1];
              iVar12 = 0;
            }
            if (param_3 != (undefined1 *)0x0) {
              param_3[lVar11] = param_3[lVar11] | (byte)((uVar14 & 1) << ((byte)lVar5 & 0x1f));
            }
            lVar5 = lVar5 + 1;
            uVar14 = uVar14 >> 1;
            iVar12 = iVar12 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != param_2);
      lVar5 = lVar11 + 1;
      FUN_1400d2707(local_8640,local_8228,0);
      iVar8 = FUN_1400d271f(param_2);
      FUN_1400d273b(local_8640,6,iVar8 - 1U & 0xff);
      FUN_1400d273b(local_8640,iVar8,param_2);
      cVar4 = FUN_1400d271f(lVar5);
      FUN_1400d273b(local_8640,6,cVar4);
      FUN_1400d273b(local_8640,cVar4 + '\x01',lVar5);
      piVar7 = local_7fd8 + 4;
      local_8628 = (undefined4)local_8008;
      lVar18 = 1;
      do {
        local_8624[lVar18 + -1] = *piVar7 - piVar7[-0x10];
        lVar18 = lVar18 + 1;
        piVar7 = piVar7 + 0x10;
      } while (lVar18 != 0x100);
      lVar18 = 0;
      do {
        uVar14 = local_8624[lVar18 + -1];
        uVar3 = -uVar14;
        if ((int)-uVar14 < 0) {
          uVar3 = uVar14;
        }
        cVar4 = FUN_1400d271f(uVar3);
        cVar4 = ((byte)(cVar4 + 1U) >> 1) - 1;
        FUN_1400d273b(local_8640,3,cVar4);
        FUN_1400d273b(local_8640,1,uVar14 >> 0x1f);
        FUN_1400d273b(local_8640,cVar4 * '\x02' + '\x02',uVar3);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x100);
      lVar18 = FUN_1400d2795(local_8640);
      if (param_3 != (undefined1 *)0x0) {
        do {
          param_3[lVar11 + lVar18] = param_3[lVar11];
          bVar21 = lVar11 != 0;
          lVar11 = lVar11 + -1;
        } while (bVar21);
        FUN_140135ff0(param_3,local_8228,lVar18);
      }
      if (DAT_1401c9640 == (local_48 ^ (ulonglong)local_8668)) {
        return lVar18 + lVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1400d3720(local_48 ^ (ulonglong)local_8668);
    }
  } while( true );
}

