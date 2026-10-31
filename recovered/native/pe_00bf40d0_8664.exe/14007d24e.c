/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007d24e */

undefined8
FUN_14007d24e(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
             int param_6,uint param_7)

{
  undefined8 uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_388 [32];
  int local_358;
  uint local_354;
  undefined4 local_350;
  int local_34c;
  undefined4 local_348;
  int local_344;
  undefined8 local_340;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_388;
  uVar7 = *(uint *)(param_1 + 0x44);
  local_340 = *(undefined8 *)(param_1 + 0x40);
  local_348 = param_2;
  local_344 = param_3;
  local_350 = param_4;
  local_34c = param_5;
  local_358 = param_6;
  local_354 = param_7;
  piVar3 = &local_358;
  do {
    uVar6 = param_7;
    if ((int)uVar7 < (int)param_7) {
      uVar6 = uVar7;
    }
    iVar5 = param_5;
    if (param_3 < param_5) {
      iVar5 = param_3;
    }
    uVar2 = -*(int *)(param_1 + 4);
    if (iVar5 < (int)(uVar6 & uVar2)) {
LAB_14007d2fe:
      piVar4 = piVar3 + 6;
      FUN_14007b96e(piVar3);
    }
    else {
      if (param_5 < param_3) {
        param_5 = param_3;
      }
      uVar6 = param_7;
      if ((int)param_7 < (int)uVar7) {
        uVar6 = uVar7;
      }
      if ((int)((*(int *)(param_1 + 4) + uVar6) - 1 & uVar2) < param_5) goto LAB_14007d2fe;
      if (uVar7 != param_7) {
        iVar5 = ((int)param_7 <= (int)uVar7) + 1;
        if (*(int *)(param_1 + 0x70) == iVar5) {
LAB_14007d348:
          if ((int)uVar7 < (int)param_7) {
            uVar1 = FUN_14007d6c7(param_1,3,piVar3,FUN_14007b96e,*(uint *)(param_1 + 0x48),
                                  *(uint *)(param_1 + 0x4c));
          }
          else {
            uVar1 = FUN_14007d7e4(param_1,3,piVar3,FUN_14007b96e,*(uint *)(param_1 + 0x48),
                                  *(uint *)(param_1 + 0x4c));
          }
          if ((char)uVar1 == '\0') goto LAB_14007d38f;
        }
        else if (*(int *)(param_1 + 0x70) == 0) {
LAB_14007d33a:
          uVar1 = FUN_14007d3fd(param_1,iVar5);
          if ((char)uVar1 == '\0') goto LAB_14007d348;
        }
        else {
          uVar1 = FUN_14007cf02((longlong)param_1);
          if ((char)uVar1 == '\0') goto LAB_14007d33a;
        }
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
        goto LAB_14007d3c1;
      }
LAB_14007d38f:
      *(int *)(param_1 + 0x40) = param_6;
      *(uint *)(param_1 + 0x44) = param_7;
      if (piVar3 == &local_358) {
        uVar1 = 0;
LAB_14007d3c1:
        if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_388)) {
          return uVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_140086440(local_48 ^ (ulonglong)auStackY_388);
      }
      piVar4 = piVar3 + -6;
    }
    uVar7 = piVar4[7];
    param_3 = piVar4[5];
    param_5 = piVar4[3];
    param_6 = *piVar4;
    param_7 = piVar4[1];
    piVar3 = piVar4;
  } while( true );
}

