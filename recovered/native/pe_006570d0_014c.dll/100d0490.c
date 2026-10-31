/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d0490 */

undefined4
FUN_100d0490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9
            ,undefined4 *param_10,undefined4 param_11,code *param_12)

{
  int iVar1;
  uint unaff_ESI;
  code *pcVar2;
  undefined4 uVar3;
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
  
  local_14 = DAT_10388d00 ^ (uint)auStack_28;
  pcVar2 = (code *)&DAT_1028a90f;
  if (param_12 != (code *)0x0) {
    pcVar2 = param_12;
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
  iVar1 = (*pcVar2)();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uStack_50 = param_1;
    iVar1 = FUN_100cf0d1(*param_10,&uStack_50,1);
    if ((iVar1 == 0) && (iVar1 = FUN_100d0187(param_10[2],param_1,pcVar2), iVar1 == 0)) {
      TerminateProcess((HANDLE)*param_10,0xffffffff);
      uVar3 = 0;
    }
    else {
      if ((unaff_ESI & 4) == 0) {
        ResumeThread((HANDLE)param_10[1]);
      }
      uVar3 = 1;
      if (param_10 != &uStack_4c) goto LAB_100d0555;
    }
    CloseHandle((HANDLE)*param_10);
    CloseHandle((HANDLE)param_10[1]);
  }
LAB_100d0555:
  if (DAT_10388d00 != (uStack_3c ^ (uint)&uStack_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar3;
}

