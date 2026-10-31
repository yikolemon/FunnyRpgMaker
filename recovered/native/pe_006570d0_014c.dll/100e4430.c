/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e4430 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4430(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  float10 fVar8;
  undefined8 uVar9;
  undefined1 auStack_120 [8];
  char *local_118;
  undefined4 *local_114;
  uint local_110;
  float local_10c;
  int local_108;
  char *local_104;
  char *local_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *local_cc;
  undefined4 local_c8;
  uint *local_c4;
  char *local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 *local_a8;
  float local_a4;
  float local_a0;
  undefined4 *local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  longlong local_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_5a [50];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_120;
  local_18 = 0xffffffff;
  local_1c = &LAB_100eaa80;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100446d6();
  local_18 = 0;
  local_c4 = (uint *)(local_108 + 0x44);
  FUN_100647d6(*(undefined4 *)(local_108 + 0x40));
  local_fc = 0.0;
  uVar5 = 0;
  do {
    while( true ) {
      local_110 = uVar5;
      if (*(uint *)(local_108 + 0x40) <= local_110) goto code_r0x100e4b9e;
      local_114 = *(undefined4 **)
                   (*(int *)(local_108 + 0x34) +
                   (*(int *)(local_108 + 0x38) - 1U & *(int *)(local_108 + 0x3c) + local_110) * 4);
      cVar3 = FUN_100ea14a();
      if (cVar3 != '\x03') break;
      FUN_100ea1c0(local_110);
      uVar5 = local_110;
    }
    iVar6 = *(byte *)(local_114 + 1) - 1;
    local_118 = &DAT_1032f40e;
    local_10c = 0.0;
    switch(iVar6) {
    case 0:
      goto code_r0x100e452d;
    case 1:
      local_118 = &DAT_1032eff8;
      break;
    case 2:
      local_118 = &DAT_1032f1d7;
      break;
    case 3:
      local_118 = &DAT_1032f3ea;
      break;
    default:
      local_118 = (char *)0x0;
      local_10c = (float)CONCAT31((int3)((uint)iVar6 >> 8),1);
      goto code_r0x100e452d;
    }
    local_10c = 0.0;
code_r0x100e452d:
    local_100 = (char *)((int)local_114 + 5);
    local_104 = local_100;
    if (*(char *)((int)local_114 + 5) == '\0') {
      bVar4 = *(byte *)(local_114 + 1) - 1;
      local_104 = (char *)0x0;
      if (bVar4 < 4) {
        local_104 = (&PTR_s_Success_102b7004)[bVar4];
      }
    }
    fVar8 = (float10)FUN_100ea224();
    local_c0 = (char *)(float)fVar8;
    local_80 = DAT_102b7090;
    local_88 = DAT_102b7090;
    local_84 = DAT_102b7090;
    if ((byte)(*(char *)(local_114 + 1) - 1U) < 4) {
      uVar5 = (uint)(byte)(*(char *)(local_114 + 1) - 1U);
      local_88 = *(undefined4 *)(&DAT_102b7014 + uVar5 * 4);
      local_84 = *(undefined4 *)(&DAT_102b7024 + uVar5 * 4);
      local_80 = *(undefined4 *)(&DAT_102b7034 + uVar5 * 4);
    }
    local_8c = (float)local_c0;
    local_7c = (float)local_c0;
    FUN_100ea2f4(local_5a,"##TOAST%d",local_110);
    FUN_10111e62(local_c0);
    iVar1 = DAT_1039d74c;
    *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
    iVar6 = *(int *)(iVar1 + 0x14cc);
    *(undefined1 *)(iVar6 + 0xfb) = 1;
    iVar1 = *(int *)(iVar1 + 0x14cc);
    local_c0 = *(char **)(iVar1 + 0x58);
    fStack_bc = *(float *)(iVar1 + 0x5c);
    uStack_b8 = 0;
    uStack_b4 = 0;
    local_f0 = DAT_102b70a0;
    local_f8 = CONCAT44((*(float *)(iVar6 + 0x54) + fStack_bc + DAT_102b70b0) - local_fc,
                        *(float *)(iVar6 + 0x50) + (float)local_c0 + DAT_102b70b0);
    local_70 = fStack_bc;
    fStack_6c = fStack_bc;
    fStack_68 = fStack_bc;
    fStack_64 = fStack_bc;
    FUN_10111d56(&local_f8,1,&local_f0);
    local_f0._0_4_ = (float)local_c0 + _DAT_102b70c0;
    local_f0._4_4_ = fStack_bc + _UNK_102b70c4;
    local_f8 = CONCAT44(fStack_bc * _UNK_102b70d4 * 0.0,
                        (float)local_c0 * _DAT_102b70d0 * DAT_102b70e0);
    FUN_10111da2(&local_f8,&local_f0,0,0);
    FUN_10107d2b(local_5a,0,*local_114);
    iVar6 = DAT_1039d74c;
    *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
    local_f0 = CONCAT44(local_f0._4_4_,*(undefined4 *)(iVar6 + 0x14cc));
    puVar2 = *(undefined4 **)(local_108 + 0x48);
    if (puVar2 == *(undefined4 **)(local_108 + 0x4c)) {
      FUN_10051662(puVar2,&local_f0);
    }
    else {
      *puVar2 = *(undefined4 *)(iVar6 + 0x14cc);
      *(int *)(local_108 + 0x48) = *(int *)(local_108 + 0x48) + 4;
    }
    FUN_1010c3e4(&local_f0);
    FUN_101119c9((float)local_f0);
    local_c0 = (char *)((int)local_114 + 0x1005);
    if (local_10c._0_1_ == '\0') {
      local_c8 = CONCAT31((int3)((uint)local_118 >> 8),*local_118 != '\0');
      if (*local_118 != '\0') {
        FUN_1012d147(&local_88,"%s",local_118);
      }
      if (*local_100 == '\0') goto LAB_100e4b2f;
      pcVar7 = local_118;
      if (*local_118 != '\0') {
        pcVar7 = (char *)FUN_10114a0e(0,0xbf800000);
      }
LAB_100e47b0:
      local_118 = (char *)CONCAT31((int3)((uint)pcVar7 >> 8),1);
      FUN_1012d08c("%s",local_100);
code_r0x100e47c6:
      FUN_10114a0e(0,0xbf800000);
    }
    else {
      pcVar7 = local_100;
      if (*local_100 != '\0') goto LAB_100e47b0;
      local_c8 = 0;
LAB_100e4b2f:
      if ((local_104 != (char *)0x0) && (*local_104 != '\0')) {
        pcVar7 = local_104;
        if ((local_10c._0_1_ == '\0') && (pcVar7 = local_118, *local_118 != '\0')) {
          pcVar7 = (char *)FUN_10114a0e(0,0xbf800000);
        }
        local_118 = (char *)CONCAT31((int3)((uint)pcVar7 >> 8),1);
        FUN_1012d08c("%s",local_104);
        goto code_r0x100e47c6;
      }
      local_118 = (char *)CONCAT31((int3)((uint)local_104 >> 8),1);
      if (((char)local_c8 != '\0') || (local_118 = (char *)0x0, *local_c0 != '\0'))
      goto code_r0x100e47c6;
    }
    local_f0 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    FUN_100fcd80(0x16,&local_f0);
    iVar6 = FUN_100fcb2d();
    local_f0 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar6 + 0x4c) >> 0x20) * _UNK_102b70f4,
                        (float)*(undefined8 *)(iVar6 + 0x4c) * _DAT_102b70f0);
    FUN_100fd3bc(0xb,&local_f0);
    fVar8 = (float10)FUN_10115023();
    local_10c = (float)fVar8;
    local_90 = local_10c;
    FUN_1010c3e4(&local_f0);
    local_100 = (char *)(float)local_f0;
    iVar6 = FUN_100fcb2d();
    local_104 = *(char **)(iVar6 + 0x4c);
    FUN_100fdb2e(&local_f8,&DAT_1032f516,0,0,0xbf800000);
    FUN_101150be(((local_10c + (float)local_100) - ((float)local_104 + (float)local_104)) -
                 (float)local_f8);
    local_f0 = 0;
    cVar3 = FUN_1012e1b7(&DAT_1032f516,&local_f0);
    if (cVar3 != '\0') {
      FUN_100ea1c0(local_110);
      local_110 = local_110 - 1;
    }
    FUN_100fd4c4(1);
    FUN_100fce8e(1);
    if ((char)local_118 == '\0') {
code_r0x100e4913:
      if (*local_c0 != '\0') {
        FUN_1012d08c("%s",local_c0);
      }
    }
    else if (*local_c0 != '\0') {
      fVar8 = (float10)FUN_1011504e();
      local_94 = (float)fVar8;
      FUN_101150f9(local_94 + DAT_102b7100);
      goto code_r0x100e4913;
    }
    local_c0 = (char *)(local_114 + 0x806);
    FUN_1001860e(local_c0);
    local_18 = 1;
    cVar3 = FUN_100ea359(&local_f0,0);
    local_18 = 0xffffffff;
    if (local_cc != (int *)0x0) {
      (**(code **)(*local_cc + 0x10))(local_cc != (int *)&local_f0);
    }
    if (cVar3 == '\0') {
      local_f0 = 0;
      local_18 = 0;
      cVar3 = FUN_1012e1b7(local_114 + 0x810,&local_f0);
      if (cVar3 != '\0') {
        FUN_1001860e(local_c0);
        local_18 = 2;
        if (local_cc == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10228590();
        }
        (**(code **)(*local_cc + 8))();
        local_18 = 0xffffffff;
        if (local_cc != (int *)0x0) {
          (**(code **)(*local_cc + 0x10))(local_cc != (int *)&local_f0);
        }
      }
    }
    local_18 = 0;
    FUN_10111a82();
    if (local_110 == 0) {
      uVar9 = FUN_1022c7e0();
      local_78 = __alldiv((uint)uVar9 - local_114[0x804],
                          ((int)((ulonglong)uVar9 >> 0x20) - local_114[0x805]) -
                          (uint)((uint)uVar9 < (uint)local_114[0x804]),10000,0);
      local_98 = (float)local_78;
      fVar8 = (float10)FUN_100ea38a(0x3f800000,local_98 / DAT_102b7104);
      local_114 = (undefined4 *)(float)fVar8;
      local_9c = local_114;
      fVar8 = (float10)FUN_10111c78();
      local_a0 = (float)fVar8;
      fVar8 = (float10)FUN_100ea365(DAT_102b7108 - local_a0,0,local_114);
      local_fc = (float)fVar8;
      local_a4 = local_fc;
    }
    fVar8 = (float10)FUN_10111c78();
    local_114 = (undefined4 *)(float)fVar8;
    local_a8 = local_114;
    FUN_1010ad44();
    local_fc = local_fc + (float)local_114 + DAT_102b710c;
    uVar5 = local_110 + 1;
  } while (local_fc + DAT_102b7110 < local_70);
code_r0x100e4b9e:
  uVar5 = *(uint *)(local_108 + 0x48);
  while (uVar5 != *local_c4) {
    local_110 = uVar5 - 4;
    FUN_10114ada(*(undefined4 *)(uVar5 - 4));
    uVar5 = local_110;
  }
  local_18 = 0xffffffff;
  FUN_1022c200(local_108);
  ExceptionList = local_20;
  return;
}

