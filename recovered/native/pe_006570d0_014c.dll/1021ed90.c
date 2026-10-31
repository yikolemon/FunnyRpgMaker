/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021ed90 */

undefined4 __fastcall
FUN_1021ed90(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,uint param_7)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_32c;
  undefined4 local_328;
  uint local_324;
  int local_320;
  undefined4 local_31c;
  uint local_318;
  undefined4 local_314;
  int local_310;
  undefined4 local_30c;
  int local_308;
  undefined8 local_304;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_32c;
  local_324 = *(uint *)(param_1 + 0x30);
  local_304 = *(undefined8 *)(param_1 + 0x2c);
  local_30c = param_2;
  local_308 = param_3;
  local_314 = param_4;
  local_310 = param_5;
  local_328 = param_6;
  local_31c = param_6;
  local_318 = param_7;
  local_32c = param_1;
  puVar6 = &local_31c;
  do {
    uVar2 = param_7;
    if ((int)local_324 < (int)param_7) {
      uVar2 = local_324;
    }
    local_320 = param_3;
    iVar4 = param_5;
    if (param_3 < param_5) {
      iVar4 = param_3;
    }
    uVar5 = -*(int *)(local_32c + 4);
    if (iVar4 < (int)(uVar2 & uVar5)) {
LAB_1021ee3d:
      puVar7 = puVar6 + 6;
      FUN_1021f386(puVar6);
    }
    else {
      if (param_5 < param_3) {
        param_5 = param_3;
      }
      uVar2 = param_7;
      if ((int)param_7 < (int)local_324) {
        uVar2 = local_324;
      }
      if ((int)((uVar2 + *(int *)(local_32c + 4)) - 1 & uVar5) < param_5) goto LAB_1021ee3d;
      if (local_324 != param_7) {
        if (*(int *)(local_32c + 0x50) == ((int)param_7 <= (int)local_324) + 1) {
LAB_1021ee84:
          if ((int)local_324 < (int)param_7) {
            cVar1 = FUN_1021f1df(puVar6,FUN_1021f386,*(undefined4 *)(local_32c + 0x34),
                                 *(undefined4 *)(local_32c + 0x38));
          }
          else {
            cVar1 = FUN_1021f34b(puVar6,FUN_1021f386,*(undefined4 *)(local_32c + 0x34),
                                 *(undefined4 *)(local_32c + 0x38));
          }
          if (cVar1 == '\0') goto LAB_1021eebd;
        }
        else if (*(int *)(local_32c + 0x50) == 0) {
LAB_1021ee76:
          cVar1 = FUN_1021ef1e();
          if (cVar1 == '\0') goto LAB_1021ee84;
        }
        else {
          cVar1 = FUN_1021ea91();
          if (cVar1 == '\0') goto LAB_1021ee76;
        }
        uVar3 = 1;
        goto LAB_1021eef2;
      }
LAB_1021eebd:
      *(undefined4 *)(local_32c + 0x2c) = local_328;
      *(uint *)(local_32c + 0x30) = param_7;
      if (puVar6 == &local_31c) {
        uVar3 = 0;
LAB_1021eef2:
        if (DAT_10388d00 == (local_14 ^ (uint)&local_32c)) {
          return uVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      puVar7 = puVar6 + -6;
    }
    local_324 = puVar7[7];
    param_3 = puVar7[5];
    param_5 = puVar7[3];
    local_328 = *puVar7;
    param_7 = puVar7[1];
    puVar6 = puVar7;
  } while( true );
}

