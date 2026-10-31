/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b50f */

undefined4
FUN_0041b50f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9
            ,undefined4 *param_10,undefined4 param_11,undefined *param_12)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint unaff_ESI;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_28;
  pcVar3 = (code *)&DAT_004a780d;
  if (param_12 != (undefined *)0x0) {
    pcVar3 = (code *)param_12;
  }
  if (param_10 == (undefined4 *)0x0) {
    param_10 = &local_24;
    local_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
  }
  uStack_3c = param_6 | 4;
  uStack_30 = param_9;
  uStack_34 = param_8;
  uStack_38 = param_7;
  uStack_40 = param_5;
  uStack_44 = param_4;
  uStack_48 = param_3;
  uStack_4c = param_2;
  uStack_50 = param_1;
  puStack_2c = param_10;
  iVar2 = (*pcVar3)();
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uStack_50 = param_1;
    bVar1 = FUN_0041a2bd((HANDLE)*param_10,(int)&uStack_50,1);
    if ((CONCAT31(extraout_var,bVar1) == 0) &&
       (iVar2 = FUN_0041b206(param_10[2],param_1,pcVar3), iVar2 == 0)) {
      TerminateProcess((HANDLE)*param_10,0xffffffff);
      uVar4 = 0;
    }
    else {
      if ((unaff_ESI & 4) == 0) {
        ResumeThread((HANDLE)param_10[1]);
      }
      uVar4 = 1;
      if (param_10 != &uStack_4c) goto LAB_0041b5d4;
    }
    CloseHandle((HANDLE)*param_10);
    CloseHandle((HANDLE)param_10[1]);
  }
LAB_0041b5d4:
  if (DAT_0050e8c0 != (uStack_3c ^ (uint)&uStack_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(uStack_3c ^ (uint)&uStack_50);
  }
  return uVar4;
}

