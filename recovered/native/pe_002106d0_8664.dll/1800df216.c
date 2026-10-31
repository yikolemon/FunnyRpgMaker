/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800df216 */

void FUN_1800df216(undefined8 *param_1,longlong param_2,char ****param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  char *pcVar10;
  char ***local_1f0 [2];
  undefined8 local_1e0;
  ulonglong local_1d8;
  char ***local_180;
  size_t local_178 [3];
  longlong local_160;
  undefined1 local_158 [32];
  undefined8 local_138;
  char ***local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 local_f8;
  undefined8 ***local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 local_d0 [2];
  char *local_c0 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 ***local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
  undefined *local_78;
  undefined8 local_70;
  char local_68;
  undefined7 uStack_67;
  char *local_60;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_a8 = param_4;
  FUN_180044980(&DAT_180402770);
  local_180 = (char ***)param_3;
  local_178[0] = strlen((char *)param_3);
  FUN_1800dcf0b(&local_68,*param_1,&local_180);
  local_a0 = param_1;
  for (pcVar10 = (char *)CONCAT71(uStack_67,local_68); pcVar10 != local_60; pcVar10 = pcVar10 + 0x10
      ) {
    if (*pcVar10 == '\x01') {
      local_78 = &DAT_18036a525;
      local_70 = 2;
      FUN_1800df105(local_c0,pcVar10,&local_78);
      local_1f0[0] = (char ***)0x0;
      FUN_1800dcb19(local_c0,local_1f0);
      local_180 = local_1f0[0];
      local_100 = "name";
      local_f8 = 4;
      FUN_1800dfa68(local_1f0,pcVar10,&local_100);
      local_110 = (char ***)local_1f0;
      if (0xf < local_1d8) {
        local_110 = local_1f0[0];
      }
      local_108 = local_1e0;
      FUN_18015ace8(local_178,&local_110);
      local_e0 = "description";
      local_d8 = 0xb;
      local_4a = 1;
      FUN_1800dfa68(local_98,pcVar10,&local_e0);
      local_f0 = local_98;
      if (0xf < local_80) {
        local_f0 = local_98[0];
      }
      local_e8 = local_88;
      local_49 = 1;
      FUN_18015ace8(local_158,&local_f0);
      local_138 = 0;
      uVar4 = FUN_1800dfb7c(pcVar10,&DAT_18036a525);
      local_d0[0] = 0;
      FUN_1800dcb19(uVar4,local_d0);
      local_b0 = local_d0[0];
      FUN_1800dfdc4(param_2,local_d0,&local_b0,&local_180);
      FUN_180001ef2(local_158);
      FUN_180001ef2(local_178);
      local_49 = 0;
      FUN_180001ef2(local_98);
      local_4a = 0;
      FUN_180001ef2(local_1f0);
      FUN_1800137c6(local_c0);
    }
  }
  FUN_180016e50(&local_68);
  puVar5 = *(undefined8 **)(param_2 + 8);
  for (puVar1 = (undefined8 *)*puVar5; puVar1 != puVar5; puVar1 = (undefined8 *)*puVar1) {
    puVar1[0xc] = 0;
  }
  uVar4 = FUN_1800136a6(*local_a0,local_a8);
  FUN_1800136fa(&local_68,uVar4);
  if (local_68 == '\x01') {
    local_c0[0] = &local_68;
    FUN_1800dfbe0(local_c0,&local_180);
    FUN_1800dfc96(local_c0,local_1f0);
    while (cVar3 = FUN_18005324c(&local_180,local_1f0), cVar3 == '\0') {
      puVar5 = (undefined8 *)thunk_FUN_1800e033c(&local_180);
      uVar4 = thunk_FUN_1800e04aa(&local_180);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      local_78 = (undefined *)FUN_18028b424(puVar5,0,0);
      uVar6 = FUN_1800dbb7b(&local_78);
      lVar7 = (uVar6 & *(ulonglong *)(param_2 + 0x30)) * 0x10;
      lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + lVar7);
      if (lVar9 != *(longlong *)(param_2 + 8)) {
        if (local_78 != *(undefined **)(lVar9 + 0x10)) {
          do {
            if (lVar9 == *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar7)) goto LAB_1800df5f1;
            lVar9 = *(longlong *)(lVar9 + 8);
          } while (local_78 != *(undefined **)(lVar9 + 0x10));
        }
        local_98[0] = (undefined8 ****)0x0;
        FUN_1800dcb19(uVar4,local_98);
        pppuVar2 = local_98[0];
        FUN_1800db800(param_2,local_98);
        local_98[0][0xc] = pppuVar2;
      }
LAB_1800df5f1:
      FUN_1800531d0(&local_180);
      local_160 = local_160 + 1;
    }
    FUN_1800dfd44(local_1f0);
    FUN_1800dfd44(&local_180);
  }
  plVar8 = (longlong *)**(longlong **)(param_2 + 0x48);
  if (plVar8 != *(longlong **)(param_2 + 0x48)) {
    do {
      uVar4 = FUN_1800dbb7b(plVar8 + 2);
      FUN_1800db986(param_2,&local_180,plVar8 + 2,uVar4);
      if (local_178[0] == 0) {
        plVar8 = (longlong *)FUN_1800e05b8(param_2 + 0x40,plVar8);
      }
      else {
        plVar8 = (longlong *)*plVar8;
      }
    } while (plVar8 != *(undefined8 **)(param_2 + 0x48));
  }
  *(undefined1 *)(param_2 + 0x98) = 1;
  FUN_1800137c6(&local_68);
  FUN_18023d6e0(&DAT_180402770);
  return;
}

