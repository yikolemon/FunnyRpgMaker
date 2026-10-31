/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012fcaa */

ulonglong FUN_14012fcaa(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,
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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  param_5 = (int)param_5 >> 0x1f ^ param_5;
  uVar7 = 1;
  if ((int)param_5 < param_4) {
    uVar2 = *param_1;
    iVar1 = *(int *)(param_3 + (ulonglong)param_5 * 4);
    uVar3 = FUN_14012d612(param_2,iVar1);
    if (uVar3 == 0) {
      uVar4 = FUN_14012d9e0(param_2,&local_4c);
      uVar7 = (ulonglong)local_4c;
      if (((local_4c == 0) && (uVar7 = 1, uVar4 != 0)) && (uVar7 = 9, uVar4 < 0x1000000)) {
        iVar5 = FUN_14012eefc(param_1,param_2,param_5,param_6);
        if (iVar5 == 0) {
          uVar7 = 0;
        }
        else {
          uVar3 = FUN_14012d612(param_2,iVar1 + 4);
          if (uVar3 != 0) goto LAB_14012fd04;
          piVar6 = (int *)FUN_14012afda(uVar2,uVar4,&local_4c);
          uVar7 = (ulonglong)local_4c;
          if (local_4c == 0) {
            uVar3 = FUN_14012d656(param_2,piVar6,uVar4);
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
              uVar7 = FUN_14012f2d9(param_1,piVar6,uVar4,0);
              if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_88)) {
                return uVar7;
              }
              goto LAB_14012fe44;
            }
            uVar7 = (ulonglong)uVar3;
            FUN_140128b39(uVar2,piVar6);
          }
        }
      }
    }
    else {
LAB_14012fd04:
      uVar7 = (ulonglong)uVar3;
    }
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_88)) {
    return uVar7;
  }
LAB_14012fe44:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
}

