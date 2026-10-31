/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017f2fa */

undefined8
FUN_14017f2fa(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
             undefined4 param_6,uint param_7)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined4 local_360;
  undefined4 local_358;
  uint local_354;
  undefined4 local_350;
  int local_34c;
  undefined4 local_348;
  int local_344;
  undefined8 local_340;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_388;
  uVar8 = *(uint *)(param_1 + 0x44);
  local_340 = *(undefined8 *)(param_1 + 0x40);
  local_348 = param_2;
  local_344 = param_3;
  local_350 = param_4;
  local_34c = param_5;
  local_358 = param_6;
  local_354 = param_7;
  puVar4 = &local_358;
  do {
    uVar7 = param_7;
    if ((int)uVar8 < (int)param_7) {
      uVar7 = uVar8;
    }
    iVar6 = param_5;
    if (param_3 < param_5) {
      iVar6 = param_3;
    }
    uVar3 = -*(int *)(param_1 + 4);
    if (iVar6 < (int)(uVar7 & uVar3)) {
LAB_14017f3aa:
      puVar5 = puVar4 + 6;
      FUN_14017da1a(puVar4);
    }
    else {
      if (param_5 < param_3) {
        param_5 = param_3;
      }
      uVar7 = param_7;
      if ((int)param_7 < (int)uVar8) {
        uVar7 = uVar8;
      }
      if ((int)((*(int *)(param_1 + 4) + uVar7) - 1 & uVar3) < param_5) goto LAB_14017f3aa;
      if (uVar8 != param_7) {
        iVar6 = ((int)param_7 <= (int)uVar8) + 1;
        if (*(int *)(param_1 + 0x70) == iVar6) {
LAB_14017f3f4:
          local_368 = *(undefined4 *)(param_1 + 0x48);
          local_360 = *(undefined4 *)(param_1 + 0x4c);
          if ((int)uVar8 < (int)param_7) {
            cVar1 = FUN_14017f773(param_1,3,puVar4,FUN_14017da1a);
          }
          else {
            cVar1 = FUN_14017f890(param_1,3,puVar4,FUN_14017da1a);
          }
          if (cVar1 == '\0') goto LAB_14017f43b;
        }
        else if (*(int *)(param_1 + 0x70) == 0) {
LAB_14017f3e6:
          cVar1 = FUN_14017f4a9(param_1,iVar6);
          if (cVar1 == '\0') goto LAB_14017f3f4;
        }
        else {
          cVar1 = FUN_14017efae(param_1);
          if (cVar1 == '\0') goto LAB_14017f3e6;
        }
        uVar2 = 1;
        goto LAB_14017f46d;
      }
LAB_14017f43b:
      *(undefined4 *)(param_1 + 0x40) = param_6;
      *(uint *)(param_1 + 0x44) = param_7;
      if (puVar4 == &local_358) {
        uVar2 = 0;
LAB_14017f46d:
        if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_388)) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_140188a00(local_48 ^ (ulonglong)auStack_388);
      }
      puVar5 = puVar4 + -6;
    }
    uVar8 = puVar5[7];
    param_3 = puVar5[5];
    param_5 = puVar5[3];
    param_6 = *puVar5;
    param_7 = puVar5[1];
    puVar4 = puVar5;
  } while( true );
}

