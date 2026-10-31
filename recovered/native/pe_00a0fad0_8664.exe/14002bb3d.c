/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002bb3d */

undefined8 * FUN_14002bb3d(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_d8 [32];
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = param_1;
  FUN_140006874(local_d8);
  FUN_14002ce04(&local_70,local_d8);
  puVar8 = local_68;
  FUN_14002d0e6(&local_98,local_70,local_68);
  puVar6 = local_58;
  FUN_14002d04a(&local_70,&local_b8,CONCAT44(uStack_94,local_98),puVar8);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  FUN_14002d1b0(local_58,(longlong)local_68 - (longlong)local_70 >> 5);
  for (puVar8 = local_70; puVar8 != local_68; puVar8 = puVar8 + 4) {
    lVar3 = FUN_14000e108(puVar8,0x7b,0);
    FUN_14000169c(&local_98,"false");
    puVar6 = (undefined8 *)*puVar8;
    if (lVar3 != -1) {
      puVar7 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar7 = puVar6;
      }
      if (*(char *)((longlong)puVar7 + puVar8[2] + -1) == '}') {
        FUN_1400191d4(&local_b8,puVar8,lVar3 + 1,0xffffffffffffffff,&local_49);
        FUN_1400065bc(&local_98);
        local_88 = local_a8;
        uStack_80 = (undefined4)uStack_a0;
        uStack_7c = uStack_a0._4_4_;
        local_98 = local_b8;
        uStack_94 = uStack_b4;
        uStack_90 = uStack_b0;
        uStack_8c = uStack_ac;
        local_a8 = 0;
        uStack_a0 = 0xf;
        local_b8 = local_b8 & 0xffffff00;
        FUN_1400017de(&local_b8);
        puVar5 = &local_98;
        if (0xf < CONCAT44(uStack_7c,uStack_80)) {
          puVar5 = (uint *)CONCAT44(uStack_94,local_98);
        }
        lVar2 = local_88 + -1;
        local_88 = local_88 + -1;
        *(undefined1 *)((longlong)puVar5 + lVar2) = 0;
        FUN_1400287f0(puVar8,lVar3,0xffffffffffffffff);
        puVar6 = (undefined8 *)*puVar8;
      }
    }
    if ((ulonglong)puVar8[3] < 0x10) {
      puVar6 = puVar8;
    }
    uVar4 = FUN_140026231(puVar6,puVar8[2],0,&DAT_140171d3f,2);
    uVar1 = puVar8[2];
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
    }
    puVar6 = puVar8;
    if (0xf < (ulonglong)puVar8[3]) {
      puVar6 = (undefined8 *)*puVar8;
    }
    FUN_140135ff0(puVar6,uVar4 + (longlong)puVar6,(uVar1 - uVar4) + 1);
    puVar8[2] = uVar1 - uVar4;
    FUN_14002d512(local_58,puVar8);
    FUN_1400017de(&local_98);
  }
  FUN_14000eeca(&local_70);
  return local_58;
}

