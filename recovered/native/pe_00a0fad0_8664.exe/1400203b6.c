/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400203b6 */

void FUN_1400203b6(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 local_160 [64];
  undefined1 local_120 [64];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  int local_60 [4];
  longlong local_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x1b8) != *(longlong *)(param_1 + 0x1c0)) {
    local_60[0] = *(int *)(param_1 + 0x1a8);
    if (local_60[0] < 2) {
      lVar6 = *param_2;
      lVar8 = param_2[1];
      iVar3 = (int)((ulonglong)(lVar8 - lVar6) >> 5);
      iVar5 = 0;
      if ((*(int *)(param_1 + 0x1b4) < iVar3) &&
         ((*(char *)(param_1 + 0x27) == '\x06' || (iVar5 = 0, *(char *)(param_1 + 0x27) == '\x01')))
         ) {
        iVar5 = *(int *)(param_1 + 0x1b4) - iVar3;
      }
      for (; lVar6 != lVar8; lVar6 = lVar6 + 0x20) {
        FUN_140021146(param_1,local_60,lVar6,iVar5);
        if (local_50 != 0) {
          FUN_140006874(local_a0,local_60);
          FUN_14001190c(param_1,local_80,0,0);
          FUN_1400212cc(local_120,local_80,local_a0);
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_120,&DAT_14017a288);
        }
        iVar5 = iVar5 + 1;
        FUN_1400017de(local_60);
      }
    }
    else {
      cVar2 = FUN_1400217d0(local_60,*(undefined4 *)(param_1 + 0x1b4));
      iVar5 = 0x20000000;
      if (cVar2 != '\0') {
        iVar5 = local_60[0];
      }
      lVar6 = *param_2;
      lVar8 = param_2[1];
      uVar4 = 0;
      if ((iVar5 < (int)((ulonglong)(lVar8 - lVar6) >> 5)) &&
         ((*(char *)(param_1 + 0x27) == '\x06' || (uVar4 = 0, *(char *)(param_1 + 0x27) == '\x01')))
         ) {
        local_60[0] = *(int *)(param_1 + 0x1a8);
        cVar2 = FUN_1400217d0(local_60,*(undefined4 *)(param_1 + 0x1b4));
        iVar5 = 0x20000000;
        if (cVar2 != '\0') {
          iVar5 = local_60[0];
        }
        lVar6 = *param_2;
        lVar8 = param_2[1];
        uVar4 = iVar5 - (int)((ulonglong)(lVar8 - lVar6) >> 5);
      }
      for (; lVar6 != lVar8; lVar6 = lVar6 + 0x20) {
        if (*(longlong *)(lVar6 + 0x10) == 0) {
code_r0x0001400204b9:
          if ((*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1ac)) ||
             (uVar1 = 0, (int)uVar4 < 0)) goto LAB_1400204cd;
        }
        else {
          cVar2 = FUN_1400170b4(lVar6,&DAT_14013b3f8);
          if (cVar2 != '\0') goto code_r0x0001400204b9;
LAB_1400204cd:
          uVar7 = (ulonglong)uVar4;
          if (-1 < (int)uVar4) {
            uVar7 = (longlong)(int)uVar4 % (longlong)*(int *)(param_1 + 0x1a8) & 0xffffffff;
          }
          FUN_140021146(param_1,local_60,lVar6,uVar7);
          if (local_50 != 0) {
            FUN_140006874(local_e0,local_60);
            FUN_14001190c(param_1,local_c0,0,0);
            FUN_1400212cc(local_160,local_c0,local_e0);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(local_160,&DAT_14017a288);
          }
          FUN_1400017de(local_60);
          uVar1 = uVar4 + 1;
        }
        uVar4 = uVar1;
      }
    }
  }
  return;
}

