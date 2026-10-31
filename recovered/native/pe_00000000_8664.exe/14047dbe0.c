/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14047dbe0 */

void FUN_14047dbe0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  wchar_t *pwVar15;
  undefined *puVar16;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_58 [48];
  
  puVar10 = (undefined4 *)FUN_14044e840(local_58);
  uVar14 = *(undefined8 *)(puVar10 + 4);
  uVar9 = *(undefined8 *)(puVar10 + 6);
  uVar2 = puVar10[7];
  uVar3 = puVar10[8];
  uVar4 = puVar10[9];
  uVar5 = puVar10[10];
  uVar6 = puVar10[1];
  uVar7 = puVar10[2];
  uVar8 = puVar10[3];
  *(undefined4 *)(param_1 + 0x2c) = *puVar10;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  uStack_70 = (undefined4)uVar9;
  local_78 = (undefined4)uVar14;
  uStack_74 = (undefined4)((ulonglong)uVar14 >> 0x20);
  *(undefined4 *)(param_1 + 0x3c) = local_78;
  *(undefined4 *)(param_1 + 0x40) = uStack_74;
  *(undefined4 *)(param_1 + 0x44) = uStack_70;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  lVar11 = FUN_1404806a0();
  if (lVar11 != 0) {
    if (*(longlong *)(param_3 + 8) != lVar11) {
      if (*(longlong *)(param_3 + 8) != 0) {
        thunk_FUN_1404a2310();
      }
      *(undefined8 *)(param_3 + 8) = 0;
      lVar13 = -1;
      do {
        lVar12 = lVar13;
        lVar13 = lVar12 + 1;
      } while (*(char *)(lVar11 + 1 + lVar12) != '\0');
      lVar13 = _malloc_base(lVar12 + 2);
      if (lVar13 != 0) {
        FUN_1404b97c0(lVar13,lVar11,lVar12 + 2);
      }
      *(longlong *)(param_3 + 8) = lVar13;
    }
    thunk_FUN_1404a2310(lVar11);
  }
  pwVar15 = L"ons-l1-1-0";
  if (*(wchar_t **)(param_3 + 8) != (wchar_t *)0x0) {
    pwVar15 = *(wchar_t **)(param_3 + 8);
  }
  uVar14 = FUN_14021e8f0(pwVar15,param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x10) = uVar14;
  lVar11 = FUN_1404806a8();
  if (lVar11 != 0) {
    plVar1 = (longlong *)(param_3 + 0x18);
    if (*(longlong *)(param_3 + 0x18) == lVar11) {
      thunk_FUN_1404a2310(lVar11);
    }
    else {
      if (*(longlong *)(param_3 + 0x18) != 0) {
        thunk_FUN_1404a2310();
      }
      *plVar1 = 0;
      lVar13 = -1;
      do {
        lVar12 = lVar13;
        lVar13 = lVar12 + 1;
      } while (*(char *)(lVar11 + 1 + lVar12) != '\0');
      lVar13 = _malloc_base(lVar12 + 2);
      if (lVar13 == 0) {
        *plVar1 = 0;
        thunk_FUN_1404a2310(lVar11);
      }
      else {
        FUN_1404b97c0(lVar13,lVar11,lVar12 + 2);
        *plVar1 = lVar13;
        thunk_FUN_1404a2310(lVar11);
      }
    }
  }
  puVar16 = &DAT_14059c5b0;
  if (*(undefined **)(param_3 + 0x18) != (undefined *)0x0) {
    puVar16 = *(undefined **)(param_3 + 0x18);
  }
  uVar14 = FUN_14021e8f0(puVar16,param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x18) = uVar14;
  pwVar15 = (wchar_t *)_calloc_base(0xd,1);
  if (pwVar15 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14044ac40();
  }
  *(undefined8 *)pwVar15 = u_english_nz_140599348._0_8_;
  *(undefined4 *)(pwVar15 + 4) = u_english_nz_140599348._8_4_;
  *(undefined1 *)(pwVar15 + 6) = (undefined1)u_english_nz_140599348[6];
  *(wchar_t **)(param_1 + 0x20) = pwVar15;
  return;
}

