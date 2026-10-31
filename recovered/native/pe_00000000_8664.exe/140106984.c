/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140106984 */

void FUN_140106984(uint *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  ppuVar3 = &PTR_s_Default_140ec3adf_7_140e8cfd8;
  lVar5 = 0;
  puVar4 = &DAT_140edcdbf;
  do {
    if (*(uint *)(ppuVar3 + -1) == (*param_1 & 0xe000)) {
      lVar6 = 0xf;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      puVar4 = *ppuVar3 + lVar6;
      goto LAB_1401069eb;
    }
    lVar5 = lVar5 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (lVar5 != 5);
  lVar5 = 5;
LAB_1401069eb:
  cVar2 = FUN_1400b1652("Sizing Policy",puVar4,0);
  if (cVar2 != '\0') {
    lVar6 = 0;
    do {
      local_68 = 0;
      cVar2 = FUN_1400b2126(*(undefined8 *)((longlong)&PTR_s_Default_140ec3adf_7_140e8cfd8 + lVar6),
                            lVar5 * 0x18 == lVar6,0,&local_68);
      if (cVar2 != '\0') {
        *param_1 = *param_1 & 0xffff1fff | *(uint *)((longlong)&DAT_140e8cfd0 + lVar6);
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != 0x78);
    FUN_1400b1e9c();
  }
  FUN_140092bab(0,DAT_1401c86a4);
  FUN_1400ac13f(&DAT_140ed8f96);
  cVar2 = FUN_140093d6d();
  if (cVar2 != '\0') {
    fVar7 = (float)FUN_14008ff20();
    FUN_14008f9f7(fVar7 * DAT_140e8d320);
    fVar7 = DAT_1401c86a0;
    lVar5 = 0;
    do {
      FUN_1400b0bd1();
      uVar1 = *(undefined8 *)((longlong)&PTR_s_Use_default_sizing_policy____ImG_140e8cfe0 + lVar5);
      FUN_1400abfd5("%s:",*(undefined8 *)((longlong)&PTR_s_Default_140ec3adf_7_140e8cfd8 + lVar5));
      FUN_1400b0bd1();
      fVar8 = (float)FUN_14009319a();
      lVar6 = FUN_14007a54a();
      FUN_140093227(*(float *)(lVar6 + 0x7c) * fVar7 + fVar8);
      FUN_1400abfca(uVar1,0);
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0x78);
    FUN_14008fabc();
    thunk_FUN_140088c18();
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_88);
}

