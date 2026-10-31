/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022fa86 */

undefined8
FUN_18022fa86(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  uint local_254;
  undefined4 local_250;
  int local_24c;
  undefined8 local_248;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_288;
  uVar6 = *(uint *)(param_1 + 0x44);
  local_248 = *(undefined8 *)(param_1 + 0x40);
  local_250 = param_2;
  local_24c = param_3;
  local_258 = param_4;
  local_254 = param_5;
  puVar7 = &local_258;
  do {
    uVar4 = param_5;
    if ((int)uVar6 < (int)param_5) {
      uVar4 = uVar6;
    }
    uVar2 = -*(int *)(param_1 + 4);
    if (param_3 < (int)(uVar4 & uVar2)) {
LAB_18022fb10:
      puVar8 = puVar7 + 4;
      FUN_180230036(puVar7);
    }
    else {
      uVar4 = param_5;
      if ((int)param_5 < (int)uVar6) {
        uVar4 = uVar6;
      }
      if ((int)((*(int *)(param_1 + 4) + uVar4) - 1 & uVar2) < param_3) goto LAB_18022fb10;
      if (uVar6 != param_5) {
        iVar5 = ((int)param_5 <= (int)uVar6) + 1;
        if (*(int *)(param_1 + 0x70) == iVar5) {
LAB_18022fb5a:
          local_268 = *(undefined4 *)(param_1 + 0x48);
          local_260 = *(undefined4 *)(param_1 + 0x4c);
          if ((int)uVar6 < (int)param_5) {
            cVar1 = FUN_180230087(param_1,2,puVar7,FUN_180230036);
          }
          else {
            cVar1 = FUN_1802301a4(param_1,2,puVar7,FUN_180230036);
          }
          if (cVar1 == '\0') goto LAB_18022fba1;
        }
        else if (*(int *)(param_1 + 0x70) == 0) {
LAB_18022fb4c:
          cVar1 = FUN_18022fdbd(param_1,iVar5);
          if (cVar1 == '\0') goto LAB_18022fb5a;
        }
        else {
          cVar1 = FUN_18022f8c2(param_1);
          if (cVar1 == '\0') goto LAB_18022fb4c;
        }
        uVar3 = 1;
        goto LAB_18022fbd2;
      }
LAB_18022fba1:
      *(undefined4 *)(param_1 + 0x40) = param_4;
      *(uint *)(param_1 + 0x44) = param_5;
      if (puVar7 == &local_258) {
        uVar3 = 0;
LAB_18022fbd2:
        if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_288)) {
          return uVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1802396d0(local_48 ^ (ulonglong)auStack_288);
      }
      puVar8 = puVar7 + -4;
    }
    uVar6 = puVar8[5];
    param_3 = puVar8[3];
    param_4 = *puVar8;
    param_5 = puVar8[1];
    puVar7 = puVar8;
  } while( true );
}

