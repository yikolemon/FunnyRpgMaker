/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800343bc */

longlong * FUN_1800343bc(longlong *param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  longlong *plVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_18003404a(param_2,0x5c);
  FUN_18003404a(param_2,param_3);
  pcVar4 = (char *)((longlong)&local_38 + 7);
  local_38 = 0x3030303030303030;
  do {
    *pcVar4 = "0123456789abcdef"[param_4 & 0xf];
    pcVar4 = pcVar4 + -1;
    uVar3 = param_4 >> 4;
    param_4 = param_4 >> 4;
  } while (uVar3 != 0);
  plVar2 = (longlong *)*param_2;
  lVar7 = param_2[1];
  lVar8 = 0;
  do {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      uVar1 = *(undefined1 *)((longlong)&local_38 + lVar8);
      lVar5 = plVar2[1];
      uVar6 = lVar5 + 1;
      if ((ulonglong)plVar2[2] < uVar6) {
        (*(code *)plVar2[3])(plVar2);
        lVar5 = plVar2[1];
        uVar6 = lVar5 + 1;
      }
      plVar2[1] = uVar6;
      *(undefined1 *)(*plVar2 + lVar5) = uVar1;
      lVar7 = lVar7 + -1;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 8);
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar7;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

