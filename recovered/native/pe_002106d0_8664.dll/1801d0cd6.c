/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d0cd6 */

ulonglong FUN_1801d0cd6(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,
                       uint param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  param_5 = (int)param_5 >> 0x1f ^ param_5;
  uVar7 = 1;
  if ((int)param_5 < param_4) {
    uVar2 = *param_1;
    iVar1 = *(int *)(param_3 + (ulonglong)param_5 * 4);
    uVar3 = FUN_1801ce63e(param_2,iVar1);
    if (uVar3 == 0) {
      uVar4 = FUN_1801cea0c(param_2,&local_4c);
      uVar7 = (ulonglong)local_4c;
      if (((local_4c == 0) && (uVar7 = 1, uVar4 != 0)) && (uVar7 = 9, uVar4 < 0x1000000)) {
        iVar5 = FUN_1801cff28(param_1,param_2,param_5,param_6);
        if (iVar5 == 0) {
          uVar7 = 0;
        }
        else {
          uVar3 = FUN_1801ce63e(param_2,iVar1 + 4);
          if (uVar3 != 0) goto LAB_1801d0d30;
          piVar6 = (int *)FUN_1801cc006(uVar2,uVar4,&local_4c);
          uVar7 = (ulonglong)local_4c;
          if (local_4c == 0) {
            uVar3 = FUN_1801ce682(param_2,piVar6,uVar4);
            if (uVar3 == 0) {
              if (uVar4 < 5) {
                local_68 = "truetype";
              }
              else {
                local_68 = "truetype";
                if (*piVar6 == 0x4f54544f) {
                  local_68 = "cff";
                }
              }
              local_60 = param_6;
              uVar7 = FUN_1801d0305(param_1,piVar6,uVar4,0);
              if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
                return uVar7;
              }
              goto LAB_1801d0e70;
            }
            uVar7 = (ulonglong)uVar3;
            FUN_1801c9b65(uVar2,piVar6);
          }
        }
      }
    }
    else {
LAB_1801d0d30:
      uVar7 = (ulonglong)uVar3;
    }
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
    return uVar7;
  }
LAB_1801d0e70:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
}

