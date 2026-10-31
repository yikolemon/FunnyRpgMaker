/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140051e90 */

undefined4 * FUN_140051e90(undefined4 *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined4 *local_f0;
  undefined8 ***local_e8 [3];
  ulonglong local_d0;
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined8 ***local_90 [2];
  undefined8 local_80;
  ulonglong local_78;
  undefined2 local_70;
  undefined4 local_64;
  undefined4 *local_60;
  char local_52;
  undefined1 local_51;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_60 = param_1;
  FUN_1400523fe();
  local_c8 = local_60 + 0x12;
  FUN_1400524a2();
  local_c0 = local_60 + 0x3c;
  FUN_14000f628(local_c0,&DAT_140174404);
  local_b8 = local_60 + 0x44;
  FUN_14000f628(local_b8,&DAT_140174404);
  *(undefined1 *)(local_60 + 0x4d) = 0;
  local_60[0x4c] = 0;
  if (param_2[1] == *param_2) {
    FUN_140008fe8(local_120,"UberWolfLib: Invalid arguments count");
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_120,&DAT_14017a4d8);
  }
  local_64 = 0xffffffff;
  FUN_14000f628(local_e8,&DAT_140174404);
  local_52 = FUN_140004097();
  local_51 = 0;
  lVar7 = *param_2;
  if ((local_52 != '\0') && (0x40 < (ulonglong)(param_2[1] - lVar7))) {
    lVar8 = 0;
    uVar9 = 2;
    do {
      cVar1 = FUN_140058294(lVar7 + lVar8,&DAT_140173278);
      lVar7 = *param_2;
      uVar4 = param_2[1] - lVar7 >> 5;
      if (cVar1 != '\0') {
        if (uVar4 <= uVar9) {
          FUN_140008fe8(local_108,"UberWolfLib: -m argument requires two values");
                    /* WARNING: Subroutine does not return */
          FUN_140106270(local_108,&DAT_14017a4d8);
        }
        puVar6 = &local_b0;
        FUN_140052623(puVar6,lVar7 + lVar8 + 0x20);
        piVar3 = (int *)FUN_140113dd4();
        if (0xf < local_98) {
          puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
        }
        *piVar3 = 0;
        uVar2 = FUN_14011b85c(puVar6,&local_f0,10);
        if (puVar6 == local_f0) {
          FUN_1400d9cd0("invalid stoi argument");
        }
        else if (*piVar3 != 0x22) {
          local_64 = uVar2;
          FUN_1400017de(&local_b0);
          lVar7 = *param_2;
          ppppuVar5 = (undefined8 ****)(lVar7 + lVar8 + 0x40);
          if (ppppuVar5 != local_e8) {
            if (7 < *(ulonglong *)(lVar7 + 0x58 + lVar8)) {
              ppppuVar5 = *(undefined8 *****)(lVar7 + 0x40 + lVar8);
            }
            FUN_14000ffc0(local_e8,ppppuVar5,*(undefined8 *)(lVar7 + 0x50 + lVar8));
            lVar7 = *param_2;
          }
          if (uVar9 + 1 < (ulonglong)(param_2[1] - lVar7 >> 5)) {
            local_51 = FUN_140058294(lVar7 + lVar8 + 0x60,&DAT_140173116);
            lVar7 = *param_2;
          }
          break;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1400d9d30("stoi argument out of range");
      }
      lVar8 = lVar8 + 0x20;
      uVar10 = uVar9 - 1;
      uVar9 = uVar9 + 1;
    } while (uVar10 < uVar4);
  }
  FUN_1400746a4(&local_b0,lVar7,&local_64,&local_52);
  puVar6 = local_60;
  *local_60 = local_b0;
  puVar11 = local_60;
  if (local_60 != &local_b0) {
    FUN_1400582e8(local_60 + 2,local_a8,(local_a0 - local_a8 >> 4) * -0x3333333333333333);
    puVar11 = local_60;
    if (local_78 < 8) {
      local_90[0] = local_90;
    }
    FUN_14000ffc0(puVar6 + 8,local_90[0],local_80);
  }
  *(undefined2 *)(puVar11 + 0x10) = local_70;
  FUN_140075556(&local_b0);
  if (local_52 == '\x01') {
    _set_se_translator(FUN_1400589b0);
    ppppuVar5 = local_e8;
    if (7 < local_d0) {
      ppppuVar5 = (undefined8 ****)local_e8[0];
    }
    FUN_14000f628(&local_b0,ppppuVar5);
    FUN_14007730c(local_60,&local_b0,&local_51);
    FUN_140005242();
                    /* WARNING: Subroutine does not return */
    ExitProcess(0);
  }
  if (0x20 < (ulonglong)(param_2[1] - *param_2)) {
    FUN_14005273c(local_60,*param_2 + 0x20);
  }
  FUN_140005242(local_e8);
  return local_60;
}

