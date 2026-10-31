/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400152e0 */

undefined8 FUN_1400152e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_240 [16];
  undefined1 local_230 [8];
  undefined1 local_228 [224];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0 [4];
  undefined8 *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a8 = param_2;
  local_78 = param_1;
  local_50 = param_3;
  FUN_140009eb0(local_240,1);
  if (*(longlong *)(local_50 + 0x118) == 0) {
    if (*(int *)(local_50 + 0x1ac) != 0) {
      FUN_140019f68(local_50,&local_70);
      lVar5 = local_60;
      FUN_1400017de();
      if (lVar5 != 0) {
        uVar3 = FUN_1400052b8(local_230,&DAT_1401728a8);
        FUN_140019f68(local_50,local_148);
        FUN_1400173aa(local_78,&local_70,local_148);
        FUN_1400058b9(uVar3,&local_70);
        FUN_1400017de(&local_70);
      }
      lVar5 = local_50 + 0xe8;
      FUN_140006874(&local_70,lVar5);
      lVar2 = local_60;
      FUN_1400017de();
      if (lVar2 != 0) {
        uVar3 = FUN_1400052b8(local_230,&DAT_14017066c);
        FUN_140006874(&local_70,lVar5);
        uVar3 = FUN_1400058b9(uVar3,&local_70);
        FUN_1400052b8(uVar3,&DAT_140172297);
        FUN_1400017de(&local_70);
      }
      if (*(int *)(local_50 + 0x1b4) == 0x20000000) {
        FUN_1400052b8(local_230," ...");
      }
      else if (1 < *(int *)(local_50 + 0x1b0)) {
        uVar3 = FUN_1400052b8(local_230,&DAT_140171d83);
        FUN_1400056d6(uVar3,*(undefined4 *)(local_50 + 0x1b0));
      }
      if (*(char *)(local_50 + 0x20) == '\x01') {
        uVar3 = FUN_1400052b8(local_230,&DAT_1401728a8);
        FUN_14000169c(local_128,"REQUIRED");
        FUN_1400173aa(local_78,&local_70,local_128);
        FUN_1400058b9(uVar3,&local_70);
        FUN_1400017de(&local_70);
      }
    }
    lVar5 = local_50 + 0xa8;
    FUN_140006874(&local_70,lVar5);
    FUN_1400017de();
    if (local_60 != 0) {
      uVar3 = FUN_1400052b8(local_230," (");
      FUN_14000169c(local_108,&DAT_14016e815);
      FUN_1400173aa(local_78,&local_70,local_108);
      uVar3 = FUN_1400058b9(uVar3,&local_70);
      uVar3 = FUN_1400052b8(uVar3,&DAT_140170ae9);
      FUN_140006874(local_a0,lVar5);
      uVar3 = FUN_1400058b9(uVar3,local_a0);
      FUN_1400052b8(uVar3,")");
      FUN_1400017de(local_a0);
      FUN_1400017de(&local_70);
    }
    lVar5 = local_50 + 0x1d0;
    FUN_14001a112(&local_70,lVar5);
    lVar2 = local_68;
    FUN_14001a382(&local_70,&local_70,*(undefined8 *)(local_70 + 8));
    thunk_FUN_1400ddcd0(local_70,0x28);
    if (lVar2 != 0) {
      uVar3 = FUN_1400052b8(local_230,&DAT_1401728a8);
      FUN_14000169c(local_e8,"Needs");
      FUN_1400173aa(local_78,&local_70,local_e8);
      uVar3 = FUN_1400058b9(uVar3,&local_70);
      FUN_1400052b8(uVar3,&DAT_140170ae9);
      FUN_1400017de(&local_70);
      FUN_14001a112(local_a0,lVar5);
      puVar1 = local_a0[0];
      local_80 = (undefined8 *)*local_a0[0];
      while (local_80 != puVar1) {
        uVar3 = local_80[4];
        uVar4 = FUN_1400052b8(local_230,&DAT_1401728a8);
        FUN_14001190c(uVar3,&local_70,0,0);
        FUN_1400058b9(uVar4,&local_70);
        FUN_1400017de(&local_70);
        FUN_14001010a(&local_80);
      }
      FUN_14001a382(local_a0,local_a0,local_a0[0][1]);
      thunk_FUN_1400ddcd0(local_a0[0],0x28);
    }
    lVar5 = local_50 + 0x1e0;
    FUN_14001a112(&local_70,lVar5);
    FUN_14001a382(&local_70,&local_70,*(undefined8 *)(local_70 + 8));
    thunk_FUN_1400ddcd0(local_70,0x28);
    if (local_68 != 0) {
      uVar3 = FUN_1400052b8(local_230,&DAT_1401728a8);
      FUN_14000169c(local_c8,"Excludes");
      FUN_1400173aa(local_78,&local_70,local_c8);
      uVar3 = FUN_1400058b9(uVar3,&local_70);
      FUN_1400052b8(uVar3,&DAT_140170ae9);
      FUN_1400017de(&local_70);
      FUN_14001a112(local_a0,lVar5);
      puVar1 = local_a0[0];
      local_80 = (undefined8 *)*local_a0[0];
      while (local_80 != puVar1) {
        uVar3 = local_80[4];
        uVar4 = FUN_1400052b8(local_230,&DAT_1401728a8);
        FUN_14001190c(uVar3,&local_70,0,0);
        FUN_1400058b9(uVar4,&local_70);
        FUN_1400017de(&local_70);
        FUN_14001010a(&local_80);
      }
      FUN_14001a382(local_a0,local_a0,local_a0[0][1]);
      thunk_FUN_1400ddcd0(local_a0[0],0x28);
    }
  }
  else {
    uVar3 = FUN_1400052b8(local_230,&DAT_1401728a8);
    FUN_1400058b9(uVar3,local_50 + 0x108);
  }
  FUN_1400170f8(local_228,local_a8);
  FUN_140009ff0(local_240);
  return local_a8;
}

