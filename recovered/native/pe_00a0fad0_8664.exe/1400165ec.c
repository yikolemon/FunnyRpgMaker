/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400165ec */

undefined8 FUN_1400165ec(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_238 [16];
  undefined1 local_228 [8];
  undefined1 local_220 [224];
  undefined1 local_140 [64];
  undefined1 local_100 [32];
  longlong local_e0;
  undefined4 local_d8;
  longlong local_d0;
  longlong local_c0;
  longlong local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_90 = param_1;
  local_88 = param_2;
  local_7c = param_4;
  FUN_140009eb0(local_238,1);
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  puVar6 = *(undefined8 **)(param_3 + 0x138);
  puVar1 = *(undefined8 **)(param_3 + 0x140);
  do {
    lVar2 = lStack_70;
    if (puVar6 == puVar1) {
      for (lVar4 = local_78; lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
        local_d8 = local_7c;
        local_e0 = param_3;
        local_d0 = lVar4;
        FUN_140016c22(local_140,&local_e0);
        FUN_140016ae0(param_3,&local_c0,local_140);
        if ((*(longlong *)(lVar4 + 0x10) != 0) && (local_c0 != local_b8[0])) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          FUN_14001700e(&local_a8,local_b8[0] - local_c0 >> 3,&local_c0,local_b8);
          FUN_140006874(local_100,lVar4);
          (**(code **)(*local_90 + 0x10))(local_90,&local_e0,local_100,0,&local_a8);
          FUN_1400058b9(local_228,&local_e0);
          FUN_1400017de(&local_e0);
          cVar3 = FUN_1400170b4(lVar4,lStack_70 + -0x20);
          if (cVar3 == '\0') {
            FUN_1400052b8(local_228,&DAT_1401728dd);
          }
        }
        FUN_140016e5c(&local_c0);
      }
      FUN_1400170f8(local_220,local_88);
      FUN_14000eeca(&local_78);
      FUN_140009ff0(local_238);
      return local_88;
    }
    uVar7 = *puVar6;
    lVar4 = local_78;
    if (local_78 == lStack_70) {
LAB_1400166b2:
      FUN_14000d086(&local_78,uVar7);
    }
    else {
      do {
        cVar3 = FUN_1400170b4(lVar4,uVar7);
        lVar5 = lVar4;
        if (cVar3 != '\0') break;
        lVar4 = lVar4 + 0x20;
        lVar5 = lVar2;
      } while (lVar4 != lVar2);
      if (lVar5 == lStack_70) {
        uVar7 = *puVar6;
        goto LAB_1400166b2;
      }
    }
    puVar6 = puVar6 + 1;
  } while( true );
}

