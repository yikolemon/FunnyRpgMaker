/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101435be */

void __fastcall
FUN_101435be(undefined4 param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6,
            int param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  local_2c = param_5 + param_7;
  local_28 = *param_4;
  piVar2 = (int *)param_4[2];
  piVar1 = piVar2 + local_28;
  local_24 = param_2;
  piVar4 = (int *)FUN_10152785(param_7);
  iVar3 = local_24;
  if ((piVar2 < piVar4) &&
     (((piVar4 == piVar1 || (*piVar4 != param_7)) ||
      ((0.0 < *(float *)(param_3 + 0x4c) &&
       (((*(char *)(param_3 + 0x5a) == '\x01' && (*(char *)(local_2c + -1) != '\0')) &&
        (*(char *)(local_2c + -1) != '\n')))))))) {
    piVar4 = piVar4 + -1;
  }
  iVar6 = (int)piVar4 - (int)piVar2 >> 2;
  iVar5 = 0;
  if (piVar4 == piVar2) {
    iVar6 = 0;
  }
  if (local_28 != 0) {
    iVar5 = piVar2[iVar6];
  }
  FUN_10152211(param_5 + iVar5,local_2c,param_6,0,2);
  *local_20 = local_1c;
  local_20[1] = (float)(iVar6 + 1) * *(float *)(iVar3 + 0x1228);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

