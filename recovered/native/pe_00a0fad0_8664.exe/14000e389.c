/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000e389 */

undefined8 * FUN_14000e389(undefined8 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_48 = param_1;
  if (0xf < *(ulonglong *)(param_2 + 0x10)) {
    FUN_14000e9ea(param_1);
    local_48[2] = 0;
  }
  pcVar4 = *(char **)param_2;
  uVar5 = *(ulonglong *)(param_2 + 0x18);
  pcVar9 = param_2;
  if (0xf < uVar5) {
    pcVar9 = pcVar4;
  }
  do {
    if (uVar5 < 0x10) {
      pcVar4 = param_2;
    }
    if (pcVar4 + *(longlong *)(param_2 + 0x10) <= pcVar9) {
      return local_48;
    }
    if (*pcVar9 == '\\') {
      if ((longlong)(pcVar4 + *(longlong *)(param_2 + 0x10)) - (longlong)pcVar9 < 2) {
        FUN_140006fbc(local_68,"invalid escape sequence ",param_2);
        FUN_14000ead6(local_158,local_68);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_158,&DAT_14017a200);
      }
      pcVar4 = pcVar9 + 1;
      lVar3 = FUN_14000e108("btnfr\"\\",pcVar9[1],0);
      if (lVar3 == -1) {
        cVar1 = *pcVar4;
        if (cVar1 == '0') {
          FUN_14000cf50(local_48,0);
          pcVar9 = pcVar4;
        }
        else if (cVar1 == 'U') {
          pcVar4 = param_2;
          if (0xf < *(ulonglong *)(param_2 + 0x18)) {
            pcVar4 = *(char **)param_2;
          }
          if ((longlong)(pcVar4 + (*(longlong *)(param_2 + 0x10) - (longlong)pcVar9)) < 10) {
            FUN_140006fbc(local_68,"unicode sequence must have 8 hex codes ",param_2);
            FUN_14000ead6(local_110,local_68);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(local_110,&DAT_14017a200);
          }
          iVar6 = 0;
          uVar2 = 0x10000000;
          lVar3 = 0;
          do {
            cVar1 = pcVar9[lVar3 + 2];
            iVar7 = (int)cVar1;
            if ((byte)(cVar1 - 0x30U) < 10) {
              uVar8 = iVar7 - 0x30;
            }
            else if ((byte)(cVar1 + 0xbfU) < 6) {
              uVar8 = iVar7 - 0x37;
            }
            else if (((byte)(cVar1 + 0x99U) < 0xfa) || (uVar8 = iVar7 - 0x57, 0xf < uVar8)) {
              FUN_140006fbc(local_68,"unicode sequence must have 8 hex codes ",param_2);
              FUN_14000ead6(local_f8,local_68);
                    /* WARNING: Subroutine does not return */
              FUN_140106270(local_f8,&DAT_14017a200);
            }
            iVar6 = iVar6 + uVar8 * uVar2;
            uVar2 = uVar2 >> 4;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 8);
          FUN_14000ec81(local_48,iVar6);
          pcVar9 = pcVar9 + 9;
        }
        else {
          if (cVar1 != 'u') {
            FUN_14000169c(&local_88,"unrecognized escape sequence \\");
            FUN_14000cf50(&local_88,cVar1);
            local_98 = (undefined4)local_78;
            uStack_94 = local_78._4_4_;
            uStack_90 = (undefined4)uStack_70;
            uStack_8c = uStack_70._4_4_;
            local_a8 = local_88;
            uStack_a4 = uStack_84;
            uStack_a0 = uStack_80;
            uStack_9c = uStack_7c;
            local_78 = 0;
            uStack_70 = 0xf;
            local_88 = local_88 & 0xffffff00;
            FUN_14000ed8c(local_c8,&local_a8,&DAT_140172054);
            FUN_140009e5b(local_68,local_c8,param_2);
            FUN_14000ead6(local_e0,local_68);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(local_e0,&DAT_14017a200);
          }
          pcVar4 = param_2;
          if (0xf < *(ulonglong *)(param_2 + 0x18)) {
            pcVar4 = *(char **)param_2;
          }
          if ((longlong)(pcVar4 + (*(longlong *)(param_2 + 0x10) - (longlong)pcVar9)) < 6) {
            FUN_140006fbc(local_68,"unicode sequence must have 4 hex codes ",param_2);
            FUN_14000ead6(local_140,local_68);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(local_140,&DAT_14017a200);
          }
          iVar6 = 0;
          uVar2 = 0x1000;
          lVar3 = 0;
          do {
            cVar1 = pcVar9[lVar3 + 2];
            iVar7 = (int)cVar1;
            if ((byte)(cVar1 - 0x30U) < 10) {
              uVar8 = iVar7 - 0x30;
            }
            else if ((byte)(cVar1 + 0xbfU) < 6) {
              uVar8 = iVar7 - 0x37;
            }
            else if (((byte)(cVar1 + 0x99U) < 0xfa) || (uVar8 = iVar7 - 0x57, 0xf < uVar8)) {
              FUN_140006fbc(local_68,"unicode sequence must have 4 hex codes ",param_2);
              FUN_14000ead6(local_128,local_68);
                    /* WARNING: Subroutine does not return */
              FUN_140106270(local_128,&DAT_14017a200);
            }
            iVar6 = iVar6 + uVar8 * uVar2;
            uVar2 = uVar2 >> 4;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 4);
          FUN_14000ec81(local_48,iVar6);
          pcVar9 = pcVar9 + 5;
        }
      }
      else {
        FUN_14000cf50(local_48,(&DAT_140139020)[lVar3]);
        pcVar9 = pcVar4;
      }
    }
    else {
      FUN_14000cf50(local_48);
    }
    pcVar4 = *(char **)param_2;
    uVar5 = *(ulonglong *)(param_2 + 0x18);
    pcVar9 = pcVar9 + 1;
  } while( true );
}

