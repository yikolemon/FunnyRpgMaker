/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180024d00 */

void FUN_180024d00(undefined8 param_1,undefined8 *param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_98;
  if ((param_2[1] != 2) || (*(short *)*param_2 != 0x7d7b)) {
    local_68 = *param_2;
    uStack_60 = param_2[1];
    local_58 = local_58 & 0xffffffff00000000;
    local_48 = *param_3;
    uStack_40 = param_3[1];
    local_78 = *(undefined4 *)param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = *(undefined4 *)(param_2 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_50 = param_1;
    local_38 = param_4;
    FUN_180024f74(&local_78,&local_68);
    goto LAB_180024d62;
  }
  uVar1 = *param_3;
  local_30 = param_1;
  if ((longlong)uVar1 < 0) {
    if (0 < (int)(uint)uVar1) {
      puVar2 = (ulonglong *)param_3[1];
      uVar3 = (uint)puVar2[2];
      goto LAB_180024da3;
    }
  }
  else {
    uVar3 = (uint)uVar1 & 0xf;
    if ((uVar1 & 0xf) != 0) {
      puVar2 = (ulonglong *)param_3[1];
LAB_180024da3:
      uVar1 = *puVar2;
      switch(uVar3) {
      case 1:
        FUN_1800256aa(&local_68,param_1,uVar1);
        break;
      case 2:
        FUN_180025878(&local_68,param_1);
        break;
      case 3:
        FUN_180025910(&local_68,param_1);
        break;
      case 4:
        FUN_180025b47(&local_68,param_1);
        break;
      default:
        goto switchD_180024dc9_caseD_5;
      case 7:
        FUN_1800255b6(&local_30,uVar1 & 0xffffff01);
        break;
      case 8:
        FUN_1800288d7(&local_68,param_1);
        break;
      case 9:
        FUN_18002892f(&local_68,param_1,uVar1 & 0xffffffff);
        break;
      case 10:
        FUN_180029d42(&local_68,param_1);
        break;
      case 0xb:
        FUN_180029d42(&local_68,param_1);
        break;
      case 0xc:
        FUN_18002affe(&local_68,param_1);
        break;
      case 0xd:
        FUN_180025857(&local_68,uVar1,(code *)puVar2[1] + uVar1,param_1);
        break;
      case 0xe:
        FUN_180025630(&local_30,uVar1);
        break;
      case 0xf:
        local_28 = 0;
        uStack_20 = 0;
        local_18 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_68 = param_1;
        (*(code *)puVar2[1])(uVar1,&local_28,&local_68);
      }
      goto LAB_180024d62;
    }
  }
switchD_180024dc9_caseD_5:
  FUN_18002554a(&local_30);
LAB_180024d62:
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_98);
}

