/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001a5c2 */

void FUN_14001a5c2(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  code cVar2;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  char *pcVar6;
  code *pcVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  code *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_f8;
  pcVar5 = (code *)*param_1;
  pcVar1 = pcVar5 + param_1[1];
  if (param_1[1] != 0) {
    pcVar6 = "invalid format string";
    pcVar7 = pcVar5;
    do {
      pcVar4 = pcVar7 + 1;
      if (*pcVar7 == (code)0x7d) {
        if ((pcVar4 != pcVar1) && (*pcVar4 == (code)0x7d)) {
          lVar8 = *(longlong *)(param_2 + 0x18);
LAB_14001a6d2:
          FUN_14001aea5(&local_80,pcVar5,pcVar4,lVar8);
          goto LAB_14001a6db;
        }
        FUN_140020f82(param_2,"unmatched \'}\' in format string");
        goto LAB_14001ab54;
      }
      if (*pcVar7 == (code)0x7b) {
        FUN_14001aea5(&local_80,pcVar5,pcVar7,*(undefined8 *)(param_2 + 0x18));
        pcVar5 = pcVar1;
        if (pcVar4 == pcVar1) {
LAB_14001ab35:
          FUN_140020f82(param_2,pcVar6);
          break;
        }
        cVar2 = *pcVar4;
        if (cVar2 == (code)0x3a) {
          uVar3 = FUN_1400215d2(param_2);
LAB_14001a712:
          pcVar4 = (code *)FUN_14002112c(param_2,uVar3,pcVar4 + 1,pcVar1);
          if ((pcVar4 == pcVar1) || (*pcVar4 != (code)0x7d)) {
            pcVar6 = "unknown format specifier";
            goto LAB_14001ab35;
          }
LAB_14001a73a:
          pcVar5 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        }
        else {
          if (cVar2 == (code)0x7b) {
            FUN_14001aea5(&local_80,pcVar4,pcVar7 + 2,*(undefined8 *)(param_2 + 0x18));
          }
          else {
            if (cVar2 != (code)0x7d) {
              local_c0 = 0;
              local_c8 = param_2;
              pcVar4 = (code *)FUN_140020fe7(pcVar4,pcVar1,&local_c8);
              if (pcVar4 != pcVar1) {
                uVar3 = local_c0;
                if (*pcVar4 == (code)0x3a) goto LAB_14001a712;
                if (*pcVar4 == (code)0x7d) {
                  FUN_14001a560(param_2 + 0x20,&local_b0,local_c0);
                  local_b8 = *(undefined8 *)(param_2 + 0x18);
                  switch(local_a0) {
                  case 1:
                    FUN_14001acf8(&local_80,local_b8,local_b0);
                    break;
                  case 2:
                    FUN_14001aec6(&local_80,local_b8,local_b0);
                    break;
                  case 3:
                    FUN_14001af5e(&local_80,local_b8,CONCAT44(uStack_ac,local_b0));
                    break;
                  case 4:
                    FUN_14001b195(&local_80,local_b8,CONCAT44(uStack_ac,local_b0));
                    break;
                  default:
                    FUN_14001ab98(&local_b8);
                    break;
                  case 7:
                    local_80 = 0x8000;
                    uStack_7c = 0x20;
                    uStack_78 = 0;
                    uStack_74 = 0xffffffff;
                    local_d8 = 0;
                    FUN_14001b3c9(&local_98,local_b8,(undefined1)local_b0,&local_80);
                    break;
                  case 8:
                    FUN_14001e40d(&local_80,local_b8,(undefined1)local_b0);
                    break;
                  case 9:
                    FUN_14001e465(&local_80,local_b8,local_b0);
                    break;
                  case 10:
                    FUN_14001f878(&local_80,local_b8,CONCAT44(uStack_ac,local_b0));
                    break;
                  case 0xb:
                    FUN_14001f878(&local_80,local_b8,CONCAT44(uStack_ac,local_b0));
                    break;
                  case 0xc:
                    FUN_140020b34(&local_80,local_b8,CONCAT44(uStack_ac,local_b0));
                    break;
                  case 0xd:
                    FUN_14001aea5(&local_80,CONCAT44(uStack_ac,local_b0),
                                  local_a8 + CONCAT44(uStack_ac,local_b0));
                    break;
                  case 0xe:
                    local_80 = 0x8000;
                    uStack_7c = 0x20;
                    uStack_78 = 0;
                    uStack_74 = 0xffffffff;
                    local_d8 = 0;
                    thunk_FUN_140020bd9(&local_98,local_b8,CONCAT44(uStack_ac,local_b0),&local_80);
                    break;
                  case 0xf:
                    local_98 = 0;
                    uStack_90 = 0;
                    local_88 = 0;
                    uStack_78 = 0;
                    uStack_74 = 0;
                    uStack_70 = 0;
                    local_80 = (undefined4)local_b8;
                    uStack_7c = (undefined4)((ulonglong)local_b8 >> 0x20);
                    local_68 = 0;
                    (*local_a8)(CONCAT44(uStack_ac,local_b0),&local_98,&local_80);
                  }
                  goto LAB_14001a73a;
                }
              }
              FUN_140020f82(param_2,"missing \'}\' in format string");
              pcVar4 = pcVar1;
              goto LAB_14001a6e1;
            }
            uVar3 = FUN_1400215d2(param_2);
            FUN_14001a560(param_2 + 0x20,&local_b0,uVar3);
            lVar8 = *(longlong *)(param_2 + 0x18);
            local_c8 = lVar8;
            switch(local_a0) {
            case 1:
              FUN_14001acf8(&local_80,lVar8,local_b0);
              break;
            case 2:
              FUN_14001aec6(&local_80,lVar8,local_b0);
              break;
            case 3:
              FUN_14001af5e(&local_80,lVar8,CONCAT44(uStack_ac,local_b0));
              break;
            case 4:
              FUN_14001b195(&local_80,lVar8,CONCAT44(uStack_ac,local_b0));
              break;
            default:
              FUN_14001ab98(&local_c8);
              break;
            case 7:
              local_80 = 0x8000;
              uStack_7c = 0x20;
              uStack_78 = 0;
              uStack_74 = 0xffffffff;
              local_d8 = 0;
              FUN_14001b3c9(&local_98,lVar8,(undefined1)local_b0,&local_80);
              break;
            case 8:
              FUN_14001e40d(&local_80,lVar8,(undefined1)local_b0);
              break;
            case 9:
              FUN_14001e465(&local_80,lVar8,local_b0);
              break;
            case 10:
              FUN_14001f878(&local_80,lVar8,CONCAT44(uStack_ac,local_b0));
              break;
            case 0xb:
              FUN_14001f878(&local_80,lVar8,CONCAT44(uStack_ac,local_b0));
              break;
            case 0xc:
              FUN_140020b34(&local_80,lVar8,CONCAT44(uStack_ac,local_b0));
              break;
            case 0xd:
              pcVar5 = (code *)CONCAT44(uStack_ac,local_b0);
              pcVar4 = local_a8 + (longlong)pcVar5;
              goto LAB_14001a6d2;
            case 0xe:
              local_80 = 0x8000;
              uStack_7c = 0x20;
              uStack_78 = 0;
              uStack_74 = 0xffffffff;
              local_d8 = 0;
              thunk_FUN_140020bd9(&local_98,lVar8,CONCAT44(uStack_ac,local_b0),&local_80);
              break;
            case 0xf:
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0;
              uStack_78 = 0;
              uStack_74 = 0;
              uStack_70 = 0;
              local_80 = (undefined4)lVar8;
              uStack_7c = (undefined4)((ulonglong)lVar8 >> 0x20);
              local_68 = 0;
              (*local_a8)(CONCAT44(uStack_ac,local_b0),&local_98,&local_80);
            }
          }
LAB_14001a6db:
          pcVar5 = pcVar7 + 2;
          pcVar4 = pcVar7 + 2;
        }
      }
LAB_14001a6e1:
      pcVar7 = pcVar4;
    } while (pcVar4 != pcVar1);
  }
  FUN_14001aea5(&local_80,pcVar5,pcVar1,*(undefined8 *)(param_2 + 0x18));
LAB_14001ab54:
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_f8);
}

