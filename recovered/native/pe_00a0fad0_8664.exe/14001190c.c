/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001190c */

undefined8 * FUN_14001190c(longlong param_1,undefined8 *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined4 *puVar11;
  undefined8 ***pppuVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  else {
    local_70 = param_2;
    if (param_4 == '\0') {
      if (param_3 == '\0') {
        plVar13 = *(longlong **)(param_1 + 0x40);
        if (plVar13 == (longlong *)*(longlong *)(param_1 + 0x48)) {
          plVar13 = *(longlong **)(param_1 + 0x28);
          if (plVar13 == (longlong *)*(longlong *)(param_1 + 0x30)) {
            FUN_140006874(param_2,param_1 + 0x88);
          }
          else {
            uStack_60 = 0;
            local_58 = 1;
            local_50 = 0xf;
            local_68 = (undefined8 **)0x2d;
            plVar1 = plVar13 + 2;
            if (0xf < (ulonglong)plVar13[3]) {
              plVar13 = (longlong *)*plVar13;
            }
            puVar11 = (undefined4 *)FUN_14000b1f8(&local_68,plVar13,*plVar1);
            uVar3 = *puVar11;
            uVar4 = puVar11[1];
            uVar5 = puVar11[2];
            uVar6 = puVar11[3];
            uVar7 = puVar11[5];
            uVar8 = puVar11[6];
            uVar9 = puVar11[7];
            *(undefined4 *)(local_70 + 2) = puVar11[4];
            *(undefined4 *)((longlong)local_70 + 0x14) = uVar7;
            *(undefined4 *)(local_70 + 3) = uVar8;
            *(undefined4 *)((longlong)local_70 + 0x1c) = uVar9;
            *(undefined4 *)local_70 = uVar3;
            *(undefined4 *)((longlong)local_70 + 4) = uVar4;
            *(undefined4 *)(local_70 + 1) = uVar5;
            *(undefined4 *)((longlong)local_70 + 0xc) = uVar6;
            *(undefined8 *)(puVar11 + 4) = 0;
            *(undefined8 *)(puVar11 + 6) = 0xf;
            *(undefined1 *)puVar11 = 0;
            FUN_1400017de(&local_68);
            param_2 = local_70;
          }
        }
        else {
          uStack_60 = 0;
          local_58 = 2;
          local_50 = 0xf;
          local_68 = (undefined8 **)0x2d2d;
          plVar1 = plVar13 + 2;
          if (0xf < (ulonglong)plVar13[3]) {
            plVar13 = (longlong *)*plVar13;
          }
          puVar11 = (undefined4 *)FUN_14000b1f8(&local_68,plVar13,*plVar1);
          uVar3 = *puVar11;
          uVar4 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          uVar7 = puVar11[5];
          uVar8 = puVar11[6];
          uVar9 = puVar11[7];
          *(undefined4 *)(local_70 + 2) = puVar11[4];
          *(undefined4 *)((longlong)local_70 + 0x14) = uVar7;
          *(undefined4 *)(local_70 + 3) = uVar8;
          *(undefined4 *)((longlong)local_70 + 0x1c) = uVar9;
          *(undefined4 *)local_70 = uVar3;
          *(undefined4 *)((longlong)local_70 + 4) = uVar4;
          *(undefined4 *)(local_70 + 1) = uVar5;
          *(undefined4 *)((longlong)local_70 + 0xc) = uVar6;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0xf;
          *(undefined1 *)puVar11 = 0;
          FUN_1400017de(&local_68);
          param_2 = local_70;
        }
      }
      else {
        FUN_140006874(param_2,param_1 + 0x88);
      }
    }
    else {
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
      if (((param_3 != '\0') && (*(longlong *)(param_1 + 0x98) != 0)) ||
         ((*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x30) &&
          (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_1 + 0x48))))) {
        FUN_14000d086(&local_88,param_1 + 0x88);
      }
      if ((*(int *)(param_1 + 0x1b0) == 0 || *(int *)(param_1 + 0x1ac) == 0) &&
         (*(longlong *)(param_1 + 0x70) != *(longlong *)(param_1 + 0x78))) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        for (lVar14 = *(longlong *)(param_1 + 0x28); lVar14 != lVar2; lVar14 = lVar14 + 0x20) {
          FUN_140006fbc(&local_68,&DAT_140171467,lVar14);
          FUN_14001a45e(&local_88,&local_68);
          FUN_1400017de(&local_68);
          FUN_140006874(local_168,lVar14);
          cVar10 = FUN_14002a4c2(param_1,local_168);
          if (cVar10 != '\0') {
            FUN_14000169c(local_128,&DAT_1401728de);
            FUN_14001f9b2(param_1,local_a8,lVar14,local_128);
            FUN_140018136(local_c8,&DAT_14016e73e,local_a8);
            FUN_14000ed8c(&local_68,local_c8,&DAT_14016e73c);
            pppuVar12 = &local_68;
            if (0xf < local_50) {
              pppuVar12 = (undefined8 ***)local_68;
            }
            FUN_14000b1f8(lStack_80 + -0x20,pppuVar12,local_58);
            FUN_1400017de(&local_68);
            FUN_1400017de(local_c8);
            FUN_1400017de(local_a8);
          }
        }
        lVar2 = *(longlong *)(param_1 + 0x48);
        for (lVar14 = *(longlong *)(param_1 + 0x40); lVar14 != lVar2; lVar14 = lVar14 + 0x20) {
          FUN_140006fbc(&local_68,&DAT_140171466,lVar14);
          FUN_14001a45e(&local_88,&local_68);
          FUN_1400017de(&local_68);
          FUN_140006874(local_148,lVar14);
          cVar10 = FUN_14002a4c2(param_1,local_148);
          if (cVar10 != '\0') {
            FUN_14000169c(local_108,&DAT_1401728de);
            FUN_14001f9b2(param_1,local_a8,lVar14,local_108);
            FUN_140018136(local_c8,&DAT_14016e73e,local_a8);
            FUN_14000ed8c(&local_68,local_c8,&DAT_14016e73c);
            pppuVar12 = &local_68;
            if (0xf < local_50) {
              pppuVar12 = (undefined8 ***)local_68;
            }
            FUN_14000b1f8(lStack_80 + -0x20,pppuVar12,local_58);
            FUN_1400017de(&local_68);
            FUN_1400017de(local_c8);
            FUN_1400017de(local_a8);
          }
        }
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x30);
        for (lVar14 = *(longlong *)(param_1 + 0x28); lVar14 != lVar2; lVar14 = lVar14 + 0x20) {
          FUN_140006fbc(&local_68,&DAT_140171467,lVar14);
          FUN_14001a45e(&local_88,&local_68);
          FUN_1400017de(&local_68);
        }
        lVar2 = *(longlong *)(param_1 + 0x48);
        for (lVar14 = *(longlong *)(param_1 + 0x40); lVar14 != lVar2; lVar14 = lVar14 + 0x20) {
          FUN_140006fbc(&local_68,&DAT_140171466,lVar14);
          FUN_14001a45e(&local_88,&local_68);
          FUN_1400017de(&local_68);
        }
      }
      FUN_14000169c(local_e8,&DAT_14017146a);
      FUN_1400198e7(local_70,&local_88,local_e8);
      FUN_14000eeca(&local_88);
      param_2 = local_70;
    }
  }
  return param_2;
}

