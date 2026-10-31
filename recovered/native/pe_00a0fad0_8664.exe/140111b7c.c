/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140111b7c */

void FUN_140111b7c(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint *param_6)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char cVar14;
  ulonglong uVar15;
  undefined1 auStackY_2a8 [32];
  uint *local_278;
  short *local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong local_258;
  char local_250;
  undefined8 local_248;
  uint *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [256];
  ushort local_128;
  ushort local_126;
  ushort local_124;
  short local_122;
  short local_120;
  short sStack_11e;
  short local_108 [88];
  ulonglong local_58;
  
  local_58 = DAT_1401c9640 ^ (ulonglong)auStackY_2a8;
  local_248 = param_5;
  local_240 = param_6;
  local_238 = param_3;
  local_230 = param_2;
  if (param_1 == (short *)0x0) goto LAB_140111be1;
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    iVar5 = FUN_140121bd0();
    if (iVar5 == 0) {
      *param_6 = 0;
      goto LAB_140111be1;
    }
    goto LAB_140111fd3;
  }
  lVar7 = FUN_140121578();
  local_258 = lVar7 + 0x98;
  local_260 = param_5;
  cVar14 = '\0';
  local_250 = '\0';
  local_278 = (uint *)(lVar7 + 0xb8);
  psVar9 = (short *)(lVar7 + 0xbc);
  psVar1 = (short *)(lVar7 + 0x1c2);
  local_270 = psVar9;
  local_268 = param_4;
  iVar5 = FUN_1401275e0();
  if (iVar5 != 0) goto LAB_140111fd3;
  uVar12 = 0xffffffffffffffff;
  uVar15 = 0xffffffffffffffff;
  do {
    uVar13 = uVar15;
    uVar15 = uVar13 + 1;
  } while (param_1[uVar15] != 0);
  if (uVar15 < 0x83) {
    psVar8 = psVar1;
    do {
      sVar2 = *psVar8;
      sVar3 = *(short *)((longlong)psVar8 + ((longlong)param_1 - (longlong)psVar1));
      if (sVar2 != sVar3) break;
      psVar8 = psVar8 + 1;
    } while (sVar3 != 0);
    puVar11 = local_278;
    cVar4 = '\0';
    if (sVar2 != sVar3) {
      lVar7 = (longlong)param_1 - (longlong)psVar9;
      do {
        sVar2 = *psVar9;
        sVar3 = *(short *)((longlong)psVar9 + lVar7);
        if (sVar2 != sVar3) break;
        psVar9 = psVar9 + 1;
      } while (sVar3 != 0);
      if (sVar2 != sVar3) goto LAB_140111cf8;
    }
LAB_140111fac:
    cVar14 = cVar4;
    *local_240 = *puVar11;
    iVar5 = FUN_140121bd0();
    if (iVar5 != 0) goto LAB_140111fd3;
  }
  else {
LAB_140111cf8:
    FUN_1401366a0(local_228,0,0x1ca);
    cVar4 = FUN_1401223d8();
    iVar5 = FUN_14011210c(local_228,param_1);
    puVar11 = local_278;
    if (iVar5 == 0) {
      if (cVar4 == '\0') {
        iVar5 = FUN_140128668();
      }
      else {
        iVar5 = FUN_140127c34(local_228,local_278,local_228);
      }
      if (iVar5 == 0) goto LAB_140111d9c;
      FUN_140112068(psVar1,0x83,local_228);
      do {
        uVar12 = uVar12 + 1;
      } while (local_108[uVar12] != 0);
      cVar4 = '\x01';
      iVar5 = FUN_1401275e0();
      if (iVar5 != 0) goto LAB_140111fe8;
LAB_140111f70:
      if ((*param_1 == 0) || (0x82 < uVar15)) {
        *local_270 = 0;
      }
      else {
        iVar5 = FUN_1401275e0();
        if (iVar5 != 0) {
LAB_140111fe8:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_140111fac;
    }
LAB_140111d9c:
    iVar5 = FUN_140122134(param_1);
    if (iVar5 != 0) {
      local_278 = (uint *)((ulonglong)local_278 & 0xffffffff00000000);
      iVar5 = FUN_140121f70(param_1,0x20001004,&local_278,2);
      if ((iVar5 == 0) || (uVar10 = (uint)local_278, (uint)local_278 == 0)) {
        uVar10 = 0xfde9;
      }
      *puVar11 = uVar10 & 0xffff;
      iVar5 = FUN_1401275e0();
      psVar9 = param_1;
      if (iVar5 != 0) goto LAB_140111fe8;
LAB_140111f61:
      FUN_14011309c(&local_268,psVar9,uVar13 + 2);
      cVar4 = local_250;
      goto LAB_140111f70;
    }
    cVar4 = FUN_140112ea0(local_228,param_1);
    if ((cVar4 != '\0') && (iVar5 = FUN_140122134(local_108), iVar5 != 0)) {
      if (local_128 == 0) {
        local_278 = (uint *)((ulonglong)local_278 & 0xffffffff00000000);
        iVar5 = FUN_140121f70(local_108,0x20001004,&local_278,2);
        if ((iVar5 == 0) || (uVar10 = (uint)local_278, (uint)local_278 == 0)) goto LAB_140111f1a;
      }
      else {
        uVar6 = (uint)local_128;
        uVar10 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar10 = uVar6;
        }
        if (uVar10 == 0x75) {
          uVar10 = local_126 + 0x20;
          if (0x19 < local_126 - 0x41) {
            uVar10 = (uint)local_126;
          }
          if (uVar10 == 0x74) {
            uVar10 = local_124 + 0x20;
            if (0x19 < local_124 - 0x41) {
              uVar10 = (uint)local_124;
            }
            if (((uVar10 == 0x66) && (local_122 == 0x38)) && (local_120 == 0)) goto LAB_140111f1a;
          }
        }
        if (((local_122 != 0x2d) || (local_120 != 0x38)) || (sStack_11e != 0)) goto LAB_140111eb8;
LAB_140111f1a:
        uVar10 = 0xfde9;
      }
      *puVar11 = uVar10 & 0xffff;
      iVar5 = FUN_1401275e0();
      if (iVar5 != 0) goto LAB_140111fe8;
      do {
        uVar13 = uVar12;
        uVar12 = uVar13 + 1;
      } while (local_108[uVar13 + 1] != 0);
      psVar9 = local_108;
      goto LAB_140111f61;
    }
  }
LAB_140111eb8:
  if ((cVar14 != '\0') || (iVar5 = FUN_1401275e0(), iVar5 == 0)) {
LAB_140111be1:
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_58 ^ (ulonglong)auStackY_2a8);
  }
LAB_140111fd3:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

