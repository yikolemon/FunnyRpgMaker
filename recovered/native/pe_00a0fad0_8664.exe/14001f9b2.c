/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001f9b2 */

undefined4 *
FUN_14001f9b2(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  undefined1 local_198 [64];
  undefined1 local_158 [64];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = param_4;
  if ((*(char *)(param_1 + 0x24) == '\x01') && (*(longlong *)(param_4 + 4) != 0)) {
    cVar8 = FUN_1400170b4(param_4,&DAT_14013b860);
    if (cVar8 != '\0') goto code_r0x00014001fb03;
    unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),*(undefined1 *)(param_1 + 0x21));
    unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),*(undefined1 *)(param_1 + 0x22));
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_140020d68(&local_78,*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70) >> 5,
                  param_1 + 0x70,param_1 + 0x78);
    FUN_140006874(local_118,param_3);
    lVar9 = FUN_14002650f(local_118,&local_78,unaff_R15 & 0xffffffff,unaff_R14 & 0xffffffff);
    if (lVar9 < 0) {
      cVar8 = FUN_1400170b4(local_40,&DAT_14013b820);
      if (cVar8 == '\0') {
        FUN_140006874(local_d8,param_3);
        FUN_140026b1c(local_158,local_d8);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_158,&DAT_14017a2d8);
      }
      goto code_r0x00014001fb03;
    }
    cVar8 = FUN_1400170b4(*(longlong *)(param_1 + 0x58) + lVar9 * 0x40 + 0x20,local_40);
    puVar10 = local_40;
    if (cVar8 != '\0') goto code_r0x00014001fb03;
    cVar8 = FUN_1400170b4(local_40,param_1 + 0xe8);
    if ((cVar8 == '\0') || (*(char *)(param_1 + 0x26e) == '\0')) {
      FUN_140006874(local_f8,param_3);
      FUN_140026b1c(local_198,local_f8);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_198,&DAT_14017a2d8);
    }
    uVar3 = *puVar10;
    uVar4 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    uVar7 = *(undefined8 *)(puVar10 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar10 + 4);
    *(undefined8 *)(param_2 + 6) = uVar7;
    *param_2 = uVar3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    *(undefined8 *)(puVar10 + 4) = 0;
code_r0x00014001fcbb:
    *(undefined8 *)(puVar10 + 6) = 0xf;
    *(undefined1 *)puVar10 = 0;
  }
  else {
code_r0x00014001fb03:
    uVar1 = *(undefined1 *)(param_1 + 0x21);
    uVar2 = *(undefined1 *)(param_1 + 0x22);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_140020d68(&local_58,*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70) >> 5,
                  param_1 + 0x70,param_1 + 0x78);
    FUN_140006874(local_b8,param_3);
    lVar9 = FUN_14002650f(local_b8,&local_58,CONCAT71((int7)(unaff_R15 >> 8),uVar1) & 0xffffffff,
                          CONCAT71((int7)(unaff_R14 >> 8),uVar2) & 0xffffffff);
    puVar10 = local_40;
    if (*(longlong *)(local_40 + 4) != 0) {
      cVar8 = FUN_1400170b4(local_40,&DAT_14013b860);
      if (cVar8 == '\0') {
        if (lVar9 < 0) {
          uVar3 = *puVar10;
          uVar4 = puVar10[1];
          uVar5 = puVar10[2];
          uVar6 = puVar10[3];
          uVar7 = *(undefined8 *)(puVar10 + 6);
          *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar10 + 4);
          *(undefined8 *)(param_2 + 6) = uVar7;
          *param_2 = uVar3;
          param_2[1] = uVar4;
          param_2[2] = uVar5;
          param_2[3] = uVar6;
          *(undefined8 *)(puVar10 + 4) = 0;
        }
        else {
          cVar8 = FUN_1400170b4(*(longlong *)(param_1 + 0x58) + lVar9 * 0x40 + 0x20,"false");
          if (cVar8 == '\0') {
            uVar3 = *puVar10;
            uVar4 = puVar10[1];
            uVar5 = puVar10[2];
            uVar6 = puVar10[3];
            uVar7 = *(undefined8 *)(puVar10 + 6);
            *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar10 + 4);
            *(undefined8 *)(param_2 + 6) = uVar7;
            *param_2 = uVar3;
            param_2[1] = uVar4;
            param_2[2] = uVar5;
            param_2[3] = uVar6;
            *(undefined8 *)(puVar10 + 4) = 0;
          }
          else {
            puVar10 = (undefined4 *)FUN_140113dd4();
            *puVar10 = 0;
            FUN_140006874(local_98,local_40);
            lVar9 = FUN_140022bdc(local_98);
            piVar11 = (int *)FUN_140113dd4();
            if (*piVar11 == 0) {
              if (lVar9 == -1) {
                FUN_140006874(param_2,&DAT_14013b820);
              }
              else if (lVar9 == 1) {
                FUN_140006874(param_2,"false");
              }
              else {
                FUN_1400272c4(param_2,-lVar9);
              }
              goto code_r0x00014001fcc8;
            }
            puVar10 = (undefined4 *)FUN_140113dd4();
            *puVar10 = 0;
            uVar3 = *local_40;
            uVar4 = local_40[1];
            uVar5 = local_40[2];
            uVar6 = local_40[3];
            uVar7 = *(undefined8 *)(local_40 + 6);
            *(undefined8 *)(param_2 + 4) = *(undefined8 *)(local_40 + 4);
            *(undefined8 *)(param_2 + 6) = uVar7;
            *param_2 = uVar3;
            param_2[1] = uVar4;
            param_2[2] = uVar5;
            param_2[3] = uVar6;
            *(undefined8 *)(local_40 + 4) = 0;
            puVar10 = local_40;
          }
        }
        goto code_r0x00014001fcbb;
      }
    }
    if (*(char *)(param_1 + 0x26a) == '\x01') {
      puVar12 = &DAT_14013b820;
      if (-1 < lVar9) {
        puVar12 = (undefined *)(*(longlong *)(param_1 + 0x58) + 0x20 + lVar9 * 0x40);
      }
      FUN_140006874(param_2,puVar12);
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x58) + 0x20 + lVar9 * 0x40;
      if (lVar9 < 0) {
        lVar13 = param_1 + 0xe8;
      }
      FUN_140006874(param_2,lVar13);
    }
  }
code_r0x00014001fcc8:
  FUN_1400017de(local_40);
  return param_2;
}

