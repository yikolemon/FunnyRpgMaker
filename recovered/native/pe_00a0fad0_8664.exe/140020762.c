/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140020762 */

void FUN_140020762(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong *puVar6;
  byte bVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  ulonglong local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar15 = *param_2;
  lVar1 = param_2[1];
  if (lVar15 != lVar1) {
    do {
      FUN_1400017de(lVar15);
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != lVar1);
    param_2[1] = *param_2;
  }
  uVar10 = local_68;
  switch(*(undefined1 *)(param_1 + 0x27)) {
  case 1:
    uVar13 = param_3[1] - *param_3 >> 5;
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x1a8));
    cVar5 = FUN_1400217d0(&local_68,*(undefined4 *)(param_1 + 0x1b4));
    uVar10 = 1;
    if (1 < (int)(uint)local_68) {
      uVar10 = local_68 & 0xffffffff;
    }
    uVar11 = 0x20000000;
    if (cVar5 != '\0') {
      uVar11 = uVar10;
    }
    if (uVar13 < uVar11) {
      uVar11 = uVar13;
    }
    uVar10 = local_68;
    if (param_3[1] - *param_3 >> 5 != uVar11) {
      FUN_140020e9e(param_2,param_3[1] + uVar11 * -0x20);
      uVar10 = local_68;
    }
    break;
  case 2:
    uVar13 = param_3[1] - *param_3 >> 5;
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x1a8));
    cVar5 = FUN_1400217d0(&local_68,*(undefined4 *)(param_1 + 0x1b4));
    uVar10 = 1;
    if (1 < (int)(uint)local_68) {
      uVar10 = local_68 & 0xffffffff;
    }
    uVar11 = 0x20000000;
    if (cVar5 != '\0') {
      uVar11 = uVar10;
    }
    if (uVar13 < uVar11) {
      uVar11 = uVar13;
    }
    uVar10 = local_68;
    if (param_3[1] - *param_3 >> 5 != uVar11) {
      FUN_140020e9e(param_2);
      uVar10 = local_68;
    }
    break;
  case 3:
    if (0x20 < (ulonglong)(*(longlong *)(param_1 + 0x240) - *(longlong *)(param_1 + 0x238))) {
      bVar7 = 10;
      if (*(byte *)(param_1 + 0x25) != 0) {
        bVar7 = *(byte *)(param_1 + 0x25);
      }
      local_88[1] = 0;
      local_88[2] = 1;
      local_88[3] = 0xf;
      local_88[0] = (ulonglong)bVar7;
      FUN_1400198e7(&local_68,param_3,local_88);
      FUN_14001a45e(param_2,&local_68);
      FUN_1400017de(&local_68);
      uVar10 = local_68;
    }
    break;
  case 4:
    break;
  case 5:
    FUN_14002218a(&local_68,param_3);
    FUN_14001a45e(param_2,&local_68);
    FUN_1400017de(&local_68);
    uVar10 = local_68;
    break;
  case 6:
    uVar13 = param_3[1] - *param_3 >> 5;
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x1a8));
    cVar5 = FUN_1400217d0(&local_68,*(undefined4 *)(param_1 + 0x1b4));
    uVar10 = 1;
    if (1 < (int)(uint)local_68) {
      uVar10 = local_68 & 0xffffffff;
    }
    uVar11 = 0x20000000;
    if (cVar5 != '\0') {
      uVar11 = uVar10;
    }
    if (uVar13 < uVar11) {
      uVar11 = uVar13;
    }
    if ((1 < uVar11) || (param_3[1] - *param_3 >> 5 != uVar11)) {
      FUN_140020e9e(param_2,param_3[1] + uVar11 * -0x20);
    }
    puVar6 = (ulonglong *)*param_2;
    puVar2 = (ulonglong *)param_2[1];
    uVar10 = local_68;
    if (puVar6 != puVar2) {
      do {
        puVar9 = puVar2 + -4;
        uVar10 = local_68;
        if (puVar9 == puVar6) break;
        uVar10 = *puVar6;
        uVar13 = puVar6[1];
        local_58 = puVar6[2];
        uStack_50 = puVar6[3];
        uVar11 = *puVar9;
        uVar3 = puVar2[-3];
        uVar4 = puVar2[-1];
        puVar6[2] = puVar2[-2];
        puVar6[3] = uVar4;
        *puVar6 = uVar11;
        puVar6[1] = uVar3;
        local_68._0_4_ = (uint)uVar10;
        local_68._4_4_ = (undefined4)(uVar10 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar13;
        uStack_60._4_4_ = (undefined4)(uVar13 >> 0x20);
        puVar2[-2] = local_58;
        puVar2[-1] = uStack_50;
        *(uint *)puVar9 = (uint)local_68;
        *(undefined4 *)((longlong)puVar2 + -0x1c) = local_68._4_4_;
        *(undefined4 *)(puVar2 + -3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)puVar2 + -0x14) = uStack_60._4_4_;
        puVar6 = puVar6 + 4;
        puVar2 = puVar9;
        local_68 = uVar10;
        uStack_60 = uVar13;
      } while (puVar9 != puVar6);
    }
    break;
  default:
    iVar12 = *(int *)(param_1 + 0x1b0) * *(int *)(param_1 + 0x1ac);
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x1a8));
    cVar5 = FUN_1400217d0(&local_68,*(undefined4 *)(param_1 + 0x1b4));
    uVar8 = 0x20000000;
    if (cVar5 != '\0') {
      uVar8 = (uint)local_68;
    }
    iVar12 = iVar12 + (uint)(iVar12 == 0);
    iVar14 = uVar8 + (uVar8 == 0);
    lVar15 = *param_3;
    uVar13 = param_3[1] - lVar15 >> 5;
    if (uVar13 < (ulonglong)(longlong)iVar12) {
      FUN_14001190c(param_1,local_c8,0,0);
      FUN_14002245c(local_148,local_c8,iVar12,uVar13);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_148,&DAT_14017a2d8);
    }
    uVar10 = local_68;
    if ((ulonglong)(longlong)iVar14 < uVar13) {
      if ((uVar8 < 2) && (param_3[1] - lVar15 == 0x40)) {
        cVar5 = FUN_14000d7b8(lVar15 + 0x20,&DAT_140171d1a);
        lVar15 = *param_3;
        if (cVar5 != '\0') {
          cVar5 = FUN_14000d7b8(lVar15,&DAT_14016e735);
          if (cVar5 != '\0') {
            uVar10 = local_68;
            if (param_2 != param_3) {
              FUN_140020e9e(param_2,*param_3,param_3[1] - *param_3 >> 5);
              uVar10 = local_68;
            }
            break;
          }
          lVar15 = *param_3;
        }
      }
      lVar1 = param_3[1];
      FUN_14001190c(param_1,local_a8,0,0);
      FUN_1400227a4(local_108,local_a8,iVar14,lVar1 - lVar15 >> 5);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_108,&DAT_14017a2d8);
    }
  }
  local_68 = uVar10;
  lVar15 = *param_2;
  if (lVar15 == param_2[1]) {
    if (param_3[1] - *param_3 != 0x20) {
      return;
    }
    cVar5 = FUN_14000d7b8(*param_3,&DAT_14016e735);
    if (cVar5 == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x1b0) * *(int *)(param_1 + 0x1ac) < 1) {
      return;
    }
    FUN_1400259c4(param_2,&DAT_14016e735);
  }
  else {
    if (param_2[1] - lVar15 != 0x20) {
      return;
    }
    cVar5 = FUN_14000d7b8(lVar15,&DAT_14016e735);
    if (cVar5 == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x1b0) * *(int *)(param_1 + 0x1ac) < 1) {
      return;
    }
  }
  FUN_1400259c4(param_2,&DAT_140171d1a);
  return;
}

