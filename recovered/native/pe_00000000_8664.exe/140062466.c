/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140062466 */

void FUN_140062466(longlong *param_1,longlong *param_2,ulonglong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_4 == 0) {
LAB_140062501:
    if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
      return;
    }
  }
  else {
    uVar4 = (ulonglong)((uint)*param_2 & 7);
    uVar3 = 8 - uVar4;
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    if ((ulonglong)(param_4 * 8) <= *param_3 - uVar3 && uVar3 <= *param_3) {
      *param_2 = *param_2 + uVar3;
      *param_3 = *param_3 - uVar3;
      lVar2 = *param_2;
      if (lVar2 != 0) {
        lVar1 = lVar2 + param_4 * 8;
        local_40 = 0;
        FUN_140062602(lVar2,lVar1);
        *(undefined1 *)(param_1 + 2) = 0;
        *param_1 = lVar2;
        param_1[1] = lVar1;
        *param_2 = *param_2 + param_4 * 8;
        *param_3 = *param_3 + param_4 * -8;
        goto LAB_140062501;
      }
    }
    if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
      FUN_14006255e(param_1,param_4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

