/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140033d10 */

ulonglong FUN_140033d10(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_f0 [64];
  undefined1 local_b0 [32];
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  plVar3 = *(longlong **)(param_1 + 0x138);
  if (plVar3 != *(longlong **)(param_1 + 0x140)) {
    lVar4 = 0;
    do {
      lVar7 = *plVar3;
      if ((*(longlong *)(lVar7 + 0x98) != 0) && (*(char *)(lVar7 + 0x20) == '\x01')) {
        uVar6 = *(int *)(lVar7 + 0x1b0) * *(int *)(lVar7 + 0x1ac);
        if ((0 < (int)uVar6) &&
           (lVar7 = *(longlong *)(lVar7 + 0x240) - *(longlong *)(lVar7 + 0x238) >> 5,
           (int)lVar7 < (int)uVar6)) {
          lVar4 = (lVar4 + (ulonglong)uVar6) - lVar7;
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != *(longlong **)(param_1 + 0x140));
    if (lVar4 != 0) {
      FUN_14003602c(param_1,param_2,0);
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      goto LAB_1400340a7;
    }
  }
  lVar4 = FUN_14003727a(param_1,param_2[1] + -0x20,1,1);
  local_90 = lVar4;
  if (lVar4 == 0) {
    lVar7 = FUN_14000e108(param_2[1] + -0x20,0x2e,0);
    if (lVar7 != -1) {
      FUN_1400191d4(&local_88,param_2[1] + -0x20,0,lVar7,&local_61);
      lVar4 = FUN_14003727a(param_1,&local_88,1,1);
      local_90 = lVar4;
      FUN_1400017de(&local_88);
      if (lVar4 != 0) {
        FUN_1400191d4(&local_88,param_2[1] + -0x20,lVar7 + 1,0xffffffffffffffff,&local_61);
        lVar7 = param_2[1];
        puVar8 = (undefined8 *)(lVar7 + -0x20);
        if (puVar8 != &local_88) {
          FUN_1400065bc(puVar8);
          *(undefined8 *)(lVar7 + -0x10) = local_78;
          *(undefined8 *)(lVar7 + -8) = uStack_70;
          *(undefined4 *)puVar8 = (undefined4)local_88;
          *(undefined4 *)(lVar7 + -0x1c) = local_88._4_4_;
          *(undefined4 *)(lVar7 + -0x18) = (undefined4)uStack_80;
          *(undefined4 *)(lVar7 + -0x14) = uStack_80._4_4_;
          local_78 = 0;
          uStack_70 = 0xf;
          local_88 = local_88 & 0xffffffffffffff00;
        }
        FUN_1400017de(&local_88);
        FUN_14001818a(lVar4,&local_88,0);
        FUN_14001a45e(param_2,&local_88);
        FUN_1400017de(&local_88);
        goto code_r0x000140033de6;
      }
    }
    if (*(longlong *)(param_1 + 0x348) == 0) {
      FUN_140006fbc(&local_88,"Subcommand ",param_2[1] + -0x20);
      FUN_14000ed8c(local_b0,&local_88," missing");
      FUN_140036a0a(local_f0,local_b0);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_f0,&DAT_14017a578);
    }
    uVar5 = 0;
  }
  else {
code_r0x000140033de6:
    FUN_1400017de(param_2[1] + -0x20);
    param_2[1] = param_2[1] + -0x20;
    if (*(char *)(lVar4 + 0x321) == '\0') {
      plVar3 = *(longlong **)(param_1 + 0x2b0);
      if (plVar3 == *(longlong **)(param_1 + 0x2b8)) {
        FUN_1400322a6(param_1 + 0x2a8,plVar3,&local_90);
      }
      else {
        *plVar3 = lVar4;
        *(longlong *)(param_1 + 0x2b0) = *(longlong *)(param_1 + 0x2b0) + 8;
      }
    }
    FUN_14003830e(local_90,param_2);
    lVar7 = *(longlong *)(local_90 + 0x348);
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if (lVar7 != param_1) {
      do {
        if (*(char *)(lVar7 + 0x4e) == '\0') {
          lVar4 = param_2[1];
          lVar2 = *param_2;
          *(undefined1 *)(lVar7 + 0x4e) = 1;
          plVar3 = *(longlong **)(lVar7 + 0x88);
          if (plVar3 != (longlong *)0x0) {
            local_88 = lVar4 - lVar2 >> 5;
            (**(code **)(*plVar3 + 0x10))(plVar3,&local_88);
          }
        }
        else if ((*(char *)(lVar7 + 0x4f) == '\x01') && (*(longlong *)(lVar7 + 0x18) != 0)) {
          uVar1 = *(undefined4 *)(lVar7 + 0x324);
          local_78 = *(undefined8 *)(lVar7 + 0x288);
          *(undefined8 *)(lVar7 + 0x288) = 0;
          local_88 = *(ulonglong *)(lVar7 + 0x278);
          uStack_80 = *(undefined8 *)(lVar7 + 0x280);
          *(undefined8 *)(lVar7 + 0x278) = 0;
          *(undefined8 *)(lVar7 + 0x280) = 0;
          FUN_140032a72(lVar7);
          *(undefined4 *)(lVar7 + 0x324) = uVar1;
          *(undefined1 *)(lVar7 + 0x4e) = 1;
          if ((undefined8 *)(lVar7 + 0x278) != &local_88) {
            FUN_14003184c();
            *(undefined4 *)(lVar7 + 0x278) = (undefined4)local_88;
            *(undefined4 *)(lVar7 + 0x27c) = local_88._4_4_;
            *(undefined4 *)(lVar7 + 0x280) = (undefined4)uStack_80;
            *(undefined4 *)(lVar7 + 0x284) = uStack_80._4_4_;
            *(undefined8 *)(lVar7 + 0x288) = local_78;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
          }
          FUN_14003184c(&local_88);
        }
        if (*(char *)(local_90 + 0x321) == '\0') {
          plVar3 = *(longlong **)(lVar7 + 0x2b0);
          if (plVar3 == *(longlong **)(lVar7 + 0x2b8)) {
            FUN_1400322a6(lVar7 + 0x2a8,plVar3,&local_90);
          }
          else {
            *plVar3 = local_90;
            *(longlong *)(lVar7 + 0x2b0) = *(longlong *)(lVar7 + 0x2b0) + 8;
          }
        }
        lVar7 = *(longlong *)(lVar7 + 0x348);
      } while (lVar7 != param_1);
    }
  }
LAB_1400340a7:
  return uVar5 & 0xffffffff;
}

