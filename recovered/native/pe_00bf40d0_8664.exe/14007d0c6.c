/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007d0c6 */

undefined8 FUN_14007d0c6(byte *param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStackY_288 [32];
  int local_258;
  uint local_254;
  undefined4 local_250;
  int local_24c;
  undefined8 local_248;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_288;
  uVar5 = *(uint *)(param_1 + 0x44);
  local_248 = *(undefined8 *)(param_1 + 0x40);
  local_250 = param_2;
  local_24c = param_3;
  local_258 = param_4;
  local_254 = param_5;
  piVar6 = &local_258;
  do {
    uVar3 = param_5;
    if ((int)uVar5 < (int)param_5) {
      uVar3 = uVar5;
    }
    uVar1 = -*(int *)(param_1 + 4);
    if (param_3 < (int)(uVar3 & uVar1)) {
LAB_14007d150:
      piVar7 = piVar6 + 4;
      FUN_14007d676(piVar6);
    }
    else {
      uVar3 = param_5;
      if ((int)param_5 < (int)uVar5) {
        uVar3 = uVar5;
      }
      if ((int)((*(int *)(param_1 + 4) + uVar3) - 1 & uVar1) < param_3) goto LAB_14007d150;
      if (uVar5 != param_5) {
        iVar4 = ((int)param_5 <= (int)uVar5) + 1;
        if (*(int *)(param_1 + 0x70) == iVar4) {
LAB_14007d19a:
          if ((int)uVar5 < (int)param_5) {
            uVar2 = FUN_14007d6c7(param_1,2,piVar6,FUN_14007d676,*(uint *)(param_1 + 0x48),
                                  *(uint *)(param_1 + 0x4c));
          }
          else {
            uVar2 = FUN_14007d7e4(param_1,2,piVar6,FUN_14007d676,*(uint *)(param_1 + 0x48),
                                  *(uint *)(param_1 + 0x4c));
          }
          if ((char)uVar2 == '\0') goto LAB_14007d1e1;
        }
        else if (*(int *)(param_1 + 0x70) == 0) {
LAB_14007d18c:
          uVar2 = FUN_14007d3fd(param_1,iVar4);
          if ((char)uVar2 == '\0') goto LAB_14007d19a;
        }
        else {
          uVar2 = FUN_14007cf02((longlong)param_1);
          if ((char)uVar2 == '\0') goto LAB_14007d18c;
        }
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        goto LAB_14007d212;
      }
LAB_14007d1e1:
      *(int *)(param_1 + 0x40) = param_4;
      *(uint *)(param_1 + 0x44) = param_5;
      if (piVar6 == &local_258) {
        uVar2 = 0;
LAB_14007d212:
        if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_288)) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_140086440(local_48 ^ (ulonglong)auStackY_288);
      }
      piVar7 = piVar6 + -4;
    }
    uVar5 = piVar7[5];
    param_3 = piVar7[3];
    param_4 = *piVar7;
    param_5 = piVar7[1];
    piVar6 = piVar7;
  } while( true );
}

