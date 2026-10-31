/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011689c */

ulonglong FUN_14011689c(undefined1 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       FILE *param_5)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  FILE *_File;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  _File = param_5;
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (undefined1 *)0x0) {
LAB_1401168d5:
    puVar5 = (undefined4 *)FUN_140113dd4();
    *puVar5 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) ||
       (auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
       SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0) < param_4)) {
      if (param_2 != 0xffffffffffffffff) {
        FUN_1401366a0(param_1,0,param_2);
      }
      if ((param_5 == (FILE *)0x0) ||
         (auVar3._8_8_ = 0, auVar3._0_8_ = param_3,
         SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar3,0) < param_4))
      goto LAB_1401168d5;
    }
    if (((ulonglong)param_5->_base & 0x4c000000000) == 0) {
      uVar6 = 0x1000;
    }
    else {
      uVar6 = (ulonglong)(uint)param_5->_charbuf;
    }
    param_5._0_4_ = (uint)uVar6;
    uVar8 = param_3 * param_4;
    uVar7 = param_2;
    puVar9 = param_1;
    while( true ) {
      if (uVar8 == 0) {
        return param_4;
      }
      if (((ulonglong)_File->_base & 0x4c000000000) == 0) break;
      uVar10 = *(uint *)&_File->_base;
      if (uVar10 == 0) break;
      if ((int)uVar10 < 0) {
LAB_140116aea:
        LOCK();
        puVar1 = (uint *)((longlong)&_File->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
LAB_140116af6:
        return (param_3 * param_4 - uVar8) / param_3;
      }
      if (uVar8 < (ulonglong)(longlong)(int)uVar10) {
        uVar10 = (uint)uVar8;
      }
      if (uVar7 < uVar10) goto LAB_140116ac7;
      if (uVar10 != 0) {
        if (puVar9 != (undefined1 *)0x0) {
          if (_File->_ptr != (char *)0x0) {
            FUN_140135ff0(puVar9);
            goto LAB_1401169ec;
          }
          FUN_1401366a0(puVar9,0,uVar7);
        }
        puVar5 = (undefined4 *)FUN_140113dd4();
        *puVar5 = 0x16;
        FUN_140120ee8();
      }
LAB_1401169ec:
      *(uint *)&_File->_base = *(int *)&_File->_base - uVar10;
      uVar6 = (ulonglong)uVar10;
      _File->_ptr = _File->_ptr + uVar10;
LAB_140116a05:
      uVar8 = uVar8 - uVar6;
      puVar9 = puVar9 + uVar6;
      uVar7 = uVar7 - uVar6;
LAB_140116aac:
      uVar6 = (ulonglong)(uint)param_5;
    }
    if (uVar8 < uVar6) {
      iVar4 = FUN_14012d998(_File);
      if (iVar4 == -1) goto LAB_140116af6;
      if (uVar7 != 0) {
        *puVar9 = (char)iVar4;
        uVar8 = uVar8 - 1;
        param_5._0_4_ = _File->_charbuf;
        puVar9 = puVar9 + 1;
        uVar7 = uVar7 - 1;
        goto LAB_140116aac;
      }
    }
    else {
      uVar11 = uVar8 & 0xffffffff;
      if (0x7fffffff < uVar8) {
        uVar11 = 0x7fffffff;
      }
      if ((int)uVar6 != 0) {
        uVar11 = (ulonglong)(uint)((int)uVar11 - (int)(uVar11 % uVar6));
      }
      if (uVar11 <= uVar7) {
        *(undefined4 *)&_File->_base = 0;
        _File->_ptr = *(char **)&_File->_cnt;
        iVar4 = _fileno(_File);
        iVar4 = FUN_14012aeac(iVar4,puVar9,uVar11);
        if (iVar4 == 0) {
          LOCK();
          puVar1 = (uint *)((longlong)&_File->_base + 4);
          *puVar1 = *puVar1 | 8;
          UNLOCK();
          goto LAB_140116af6;
        }
        if (-1 < iVar4) {
          uVar6 = (ulonglong)iVar4;
          goto LAB_140116a05;
        }
        goto LAB_140116aea;
      }
    }
LAB_140116ac7:
    if (param_2 != 0xffffffffffffffff) {
      FUN_1401366a0(param_1,0,param_2);
    }
    puVar5 = (undefined4 *)FUN_140113dd4();
    *puVar5 = 0x22;
  }
  FUN_140120ee8();
  return 0;
}

