/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001a34e */

void FUN_14001a34e(undefined8 param_1,undefined8 *param_2,ulonglong *param_3,undefined8 param_4)

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
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_98;
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
    FUN_14001a5c2(&local_78,&local_68);
    goto LAB_14001a3b0;
  }
  uVar1 = *param_3;
  local_30 = param_1;
  if ((longlong)uVar1 < 0) {
    if (0 < (int)(uint)uVar1) {
      puVar2 = (ulonglong *)param_3[1];
      uVar3 = (uint)puVar2[2];
      goto LAB_14001a3f1;
    }
  }
  else {
    uVar3 = (uint)uVar1 & 0xf;
    if ((uVar1 & 0xf) != 0) {
      puVar2 = (ulonglong *)param_3[1];
LAB_14001a3f1:
      uVar1 = *puVar2;
      switch(uVar3) {
      case 1:
        FUN_14001acf8(&local_68,param_1,uVar1);
        break;
      case 2:
        FUN_14001aec6(&local_68,param_1);
        break;
      case 3:
        FUN_14001af5e(&local_68,param_1);
        break;
      case 4:
        FUN_14001b195(&local_68,param_1);
        break;
      default:
        goto switchD_14001a417_caseD_5;
      case 7:
        FUN_14001ac04(&local_30,uVar1 & 0xffffff01);
        break;
      case 8:
        FUN_14001e40d(&local_68,param_1);
        break;
      case 9:
        FUN_14001e465(&local_68,param_1,uVar1 & 0xffffffff);
        break;
      case 10:
        FUN_14001f878(&local_68,param_1);
        break;
      case 0xb:
        FUN_14001f878(&local_68,param_1);
        break;
      case 0xc:
        FUN_140020b34(&local_68,param_1);
        break;
      case 0xd:
        FUN_14001aea5(&local_68,uVar1,(code *)puVar2[1] + uVar1,param_1);
        break;
      case 0xe:
        FUN_14001ac7e(&local_30,uVar1);
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
      goto LAB_14001a3b0;
    }
  }
switchD_14001a417_caseD_5:
  FUN_14001ab98(&local_30);
LAB_14001a3b0:
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_98);
}

