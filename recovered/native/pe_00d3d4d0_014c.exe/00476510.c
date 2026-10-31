/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00476510 */

undefined4 __fastcall
FUN_00476510(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,int param_6
            ,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  byte *local_32c;
  int local_328;
  uint local_324;
  int local_320;
  int local_31c;
  uint local_318;
  undefined4 local_314;
  int local_310;
  undefined4 local_30c;
  int local_308;
  undefined8 local_304;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_32c;
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
  piVar4 = &local_31c;
  do {
    uVar1 = param_7;
    if ((int)local_324 < (int)param_7) {
      uVar1 = local_324;
    }
    local_320 = param_3;
    iVar6 = param_5;
    if (param_3 < param_5) {
      iVar6 = param_3;
    }
    uVar3 = -*(int *)(local_32c + 4);
    if (iVar6 < (int)(uVar1 & uVar3)) {
LAB_004765bd:
      piVar5 = piVar4 + 6;
      FUN_00476b06(piVar4);
    }
    else {
      if (param_5 < param_3) {
        param_5 = param_3;
      }
      uVar1 = param_7;
      if ((int)param_7 < (int)local_324) {
        uVar1 = local_324;
      }
      if ((int)((uVar1 + *(int *)(local_32c + 4)) - 1 & uVar3) < param_5) goto LAB_004765bd;
      if (local_324 != param_7) {
        iVar6 = ((int)param_7 <= (int)local_324) + 1;
        if (*(int *)(local_32c + 0x50) == iVar6) {
LAB_00476604:
          if ((int)local_324 < (int)param_7) {
            uVar2 = FUN_0047695f(local_32c,3,piVar4,FUN_00476b06,*(uint *)(local_32c + 0x34),
                                 *(uint *)(local_32c + 0x38));
          }
          else {
            uVar2 = FUN_00476acb(local_32c,3,piVar4,FUN_00476b06,*(uint *)(local_32c + 0x34),
                                 *(uint *)(local_32c + 0x38));
          }
          if ((char)uVar2 == '\0') goto LAB_0047663d;
        }
        else if (*(int *)(local_32c + 0x50) == 0) {
LAB_004765f6:
          uVar2 = FUN_0047669e(local_32c,iVar6);
          if ((char)uVar2 == '\0') goto LAB_00476604;
        }
        else {
          uVar2 = FUN_00476211((int)local_32c);
          if ((char)uVar2 == '\0') goto LAB_004765f6;
        }
        uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
        goto LAB_00476672;
      }
LAB_0047663d:
      *(int *)(local_32c + 0x2c) = local_328;
      *(uint *)(local_32c + 0x30) = param_7;
      if (piVar4 == &local_31c) {
        uVar2 = 0;
LAB_00476672:
        if (DAT_0050e8c0 == (local_14 ^ (uint)&local_32c)) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_14 ^ (uint)&local_32c);
      }
      piVar5 = piVar4 + -6;
    }
    local_324 = piVar5[7];
    param_3 = piVar5[5];
    param_5 = piVar5[3];
    local_328 = *piVar5;
    param_7 = piVar5[1];
    piVar4 = piVar5;
  } while( true );
}

