/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021ec3f */

undefined4 __fastcall
FUN_1021ec3f(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int local_224;
  undefined4 local_220;
  undefined4 local_21c;
  uint local_218;
  undefined4 local_214;
  int local_210;
  undefined8 local_20c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_224;
  uVar6 = *(uint *)(param_1 + 0x30);
  local_20c = *(undefined8 *)(param_1 + 0x2c);
  local_214 = param_2;
  local_210 = param_3;
  local_220 = param_4;
  local_21c = param_4;
  local_218 = param_5;
  puVar4 = &local_21c;
  local_224 = param_1;
  do {
    uVar7 = param_5;
    if ((int)uVar6 < (int)param_5) {
      uVar7 = uVar6;
    }
    uVar3 = -*(int *)(local_224 + 4);
    if (param_3 < (int)(uVar7 & uVar3)) {
LAB_1021ecb5:
      puVar5 = puVar4 + 4;
      FUN_1021f191(puVar4);
    }
    else {
      uVar7 = param_5;
      if ((int)param_5 < (int)uVar6) {
        uVar7 = uVar6;
      }
      if ((int)((*(int *)(local_224 + 4) + uVar7) - 1 & uVar3) < param_3) goto LAB_1021ecb5;
      if (uVar6 != param_5) {
        if (*(int *)(local_224 + 0x50) == ((int)param_5 <= (int)uVar6) + 1) {
LAB_1021ecff:
          if ((int)uVar6 < (int)param_5) {
            cVar1 = FUN_1021f1df(puVar4,FUN_1021f191,*(undefined4 *)(local_224 + 0x34),
                                 *(undefined4 *)(local_224 + 0x38));
          }
          else {
            cVar1 = FUN_1021f34b(puVar4,FUN_1021f191,*(undefined4 *)(local_224 + 0x34),
                                 *(undefined4 *)(local_224 + 0x38));
          }
          if (cVar1 == '\0') goto LAB_1021ed31;
        }
        else if (*(int *)(local_224 + 0x50) == 0) {
LAB_1021ecee:
          cVar1 = FUN_1021ef1e();
          if (cVar1 == '\0') goto LAB_1021ecff;
        }
        else {
          cVar1 = FUN_1021ea91();
          if (cVar1 == '\0') goto LAB_1021ecee;
        }
        uVar2 = 1;
        goto LAB_1021ed64;
      }
LAB_1021ed31:
      *(undefined4 *)(local_224 + 0x2c) = local_220;
      *(uint *)(local_224 + 0x30) = param_5;
      if (puVar4 == &local_21c) {
        uVar2 = 0;
LAB_1021ed64:
        if (DAT_10388d00 == (local_14 ^ (uint)&local_224)) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      puVar5 = puVar4 + -4;
    }
    uVar6 = puVar5[5];
    param_3 = puVar5[3];
    local_220 = *puVar5;
    param_5 = puVar5[1];
    puVar4 = puVar5;
  } while( true );
}

