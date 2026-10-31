/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093f5c */

void FUN_140093f5c(ushort *param_1,short *param_2,longlong param_3,short *param_4,longlong param_5,
                  UINT *param_6)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  short *psVar10;
  short *psVar11;
  uint uVar12;
  ushort *puVar13;
  UINT *pUVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  char cVar18;
  ulonglong uVar19;
  undefined1 auStackY_2a8 [32];
  UINT *local_278;
  short *local_270;
  short *local_268;
  longlong local_260;
  longlong local_258;
  char local_250;
  longlong local_248;
  UINT *local_240;
  longlong local_238;
  short *local_230;
  WCHAR local_228 [128];
  ushort local_128;
  ushort local_126;
  ushort local_124;
  short local_122;
  short local_120;
  short sStack_11e;
  ushort local_108 [88];
  ulonglong local_58;
  ulonglong uVar20;
  
  local_58 = DAT_14012ea80 ^ (ulonglong)auStackY_2a8;
  local_248 = param_5;
  local_240 = param_6;
  local_238 = param_3;
  local_230 = param_2;
  if (param_1 == (ushort *)0x0) goto LAB_140093fc1;
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    uVar8 = FUN_1400a1b80(param_2,param_3,0x14011c970);
    if ((int)uVar8 == 0) {
      *param_6 = 0;
      goto LAB_140093fc1;
    }
    goto LAB_1400943b3;
  }
  lVar9 = FUN_1400a1528();
  local_258 = lVar9 + 0x98;
  local_260 = param_5;
  cVar18 = '\0';
  local_250 = '\0';
  local_278 = (UINT *)(lVar9 + 0xb8);
  psVar11 = (short *)(lVar9 + 0xbc);
  psVar1 = (short *)(lVar9 + 0x1c2);
  local_270 = psVar11;
  local_268 = param_4;
  iVar6 = FUN_1400a6f60(param_4,param_5,lVar9 + 0x2f0,0x55);
  if (iVar6 != 0) goto LAB_1400943b3;
  uVar17 = 0;
  uVar19 = 0xffffffffffffffff;
  do {
    uVar20 = uVar19;
    uVar19 = uVar20 + 1;
  } while (param_1[uVar19] != 0);
  if (uVar19 < 0x83) {
    psVar10 = psVar1;
    do {
      sVar2 = *psVar10;
      sVar3 = *(short *)((longlong)psVar10 + ((longlong)param_1 - (longlong)psVar1));
      if (sVar2 != sVar3) break;
      psVar10 = psVar10 + 1;
    } while (sVar3 != 0);
    pUVar14 = local_278;
    cVar5 = '\0';
    if (sVar2 != sVar3) {
      lVar9 = (longlong)param_1 - (longlong)psVar11;
      do {
        sVar2 = *psVar11;
        sVar3 = *(short *)((longlong)psVar11 + lVar9);
        if (sVar2 != sVar3) break;
        psVar11 = psVar11 + 1;
      } while (sVar3 != 0);
      if (sVar2 != sVar3) goto LAB_1400940d8;
    }
LAB_14009438c:
    cVar18 = cVar5;
    *local_240 = *pUVar14;
    uVar8 = FUN_1400a1b80(local_230,local_238,(longlong)psVar1);
    if ((int)uVar8 != 0) goto LAB_1400943b3;
  }
  else {
LAB_1400940d8:
    FUN_1400b3c00((undefined1 (*) [32])local_228,0,0x1ca);
    bVar4 = FUN_1400a22ac();
    uVar8 = FUN_1400944ec((undefined1 (*) [32])local_228,param_1);
    pUVar14 = local_278;
    if ((int)uVar8 == 0) {
      if (bVar4) {
        uVar8 = FUN_1400a75b4(local_228,local_278,local_228,uVar17);
        iVar6 = (int)uVar8;
      }
      else {
        iVar6 = FUN_1400a7fe8((longlong)local_228,local_278,local_228,uVar17);
      }
      if (iVar6 == 0) goto LAB_14009417c;
      FUN_140094448(psVar1,0x83,(longlong)local_228);
      uVar15 = 0xffffffffffffffff;
      do {
        uVar16 = uVar15;
        uVar15 = uVar16 + 1;
      } while (local_108[uVar15] != 0);
      cVar5 = '\x01';
      iVar6 = FUN_1400a6f60(param_4,local_248,(longlong)local_108,uVar16 + 2);
      if (iVar6 != 0) goto LAB_1400943c8;
LAB_140094350:
      if ((*param_1 == 0) || (0x82 < uVar19)) {
        *local_270 = 0;
      }
      else {
        iVar6 = FUN_1400a6f60(local_270,0x83,(longlong)param_1,uVar20 + 2);
        if (iVar6 != 0) {
LAB_1400943c8:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_14009438c;
    }
LAB_14009417c:
    iVar6 = FUN_1400a1f18(param_1);
    if (iVar6 != 0) {
      local_278 = (UINT *)((ulonglong)local_278 & 0xffffffff00000000);
      iVar6 = FUN_1400a1e0c(param_1,0x20001004,(LPWSTR)&local_278,2);
      if ((iVar6 == 0) || (uVar12 = (uint)local_278, (uint)local_278 == 0)) {
        uVar12 = 0xfde9;
      }
      *pUVar14 = uVar12 & 0xffff;
      iVar6 = FUN_1400a6f60(psVar1,0x83,(longlong)param_1,uVar20 + 2);
      puVar13 = param_1;
      uVar15 = uVar20;
      if (iVar6 != 0) goto LAB_1400943c8;
LAB_140094341:
      FUN_14009547c(&local_268,(longlong)puVar13,uVar15 + 2);
      cVar5 = local_250;
      goto LAB_140094350;
    }
    cVar5 = FUN_140095280((undefined1 (*) [32])local_228,param_1);
    if ((cVar5 != '\0') && (iVar6 = FUN_1400a1f18(local_108), iVar6 != 0)) {
      if (local_128 == 0) {
        local_278 = (UINT *)((ulonglong)local_278 & 0xffffffff00000000);
        iVar6 = FUN_1400a1e0c(local_108,0x20001004,(LPWSTR)&local_278,2);
        if ((iVar6 == 0) || (uVar12 = (uint)local_278, (uint)local_278 == 0)) goto LAB_1400942fa;
      }
      else {
        uVar7 = (uint)local_128;
        uVar12 = uVar7 + 0x20;
        if (0x19 < uVar7 - 0x41) {
          uVar12 = uVar7;
        }
        if (uVar12 == 0x75) {
          uVar12 = local_126 + 0x20;
          if (0x19 < local_126 - 0x41) {
            uVar12 = (uint)local_126;
          }
          if (uVar12 == 0x74) {
            uVar12 = local_124 + 0x20;
            if (0x19 < local_124 - 0x41) {
              uVar12 = (uint)local_124;
            }
            if (((uVar12 == 0x66) && (local_122 == 0x38)) && (local_120 == 0)) goto LAB_1400942fa;
          }
        }
        if (((local_122 != 0x2d) || (local_120 != 0x38)) || (sStack_11e != 0)) goto LAB_140094298;
LAB_1400942fa:
        uVar12 = 0xfde9;
      }
      *pUVar14 = uVar12 & 0xffff;
      iVar6 = FUN_1400a6f60(psVar1,0x83,(longlong)param_1,uVar20 + 2);
      uVar16 = 0xffffffffffffffff;
      if (iVar6 != 0) goto LAB_1400943c8;
      do {
        uVar15 = uVar16;
        uVar16 = uVar15 + 1;
      } while (local_108[uVar16] != 0);
      puVar13 = local_108;
      goto LAB_140094341;
    }
  }
LAB_140094298:
  if ((cVar18 != '\0') ||
     (iVar6 = FUN_1400a6f60((short *)(local_258 + 600),0x55,(longlong)local_268,local_260),
     iVar6 == 0)) {
LAB_140093fc1:
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_58 ^ (ulonglong)auStackY_2a8);
  }
LAB_1400943b3:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

