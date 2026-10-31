/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006204c */

void FUN_14006204c(longlong *param_1,longlong *param_2,ulonglong *param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_4 == 0) {
LAB_1400620e6:
    if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
      return;
    }
  }
  else {
    uVar4 = param_4 * 0x10;
    uVar3 = (ulonglong)((uint)*param_2 & 7);
    uVar2 = 8 - uVar3;
    if (uVar3 == 0) {
      uVar2 = 0;
    }
    if (uVar4 <= *param_3 - uVar2 && uVar2 <= *param_3) {
      *param_2 = *param_2 + uVar2;
      *param_3 = *param_3 - uVar2;
      lVar1 = *param_2;
      if (lVar1 != 0) {
        local_48 = 0;
        uStack_40 = 0;
        FUN_14006244e(lVar1,lVar1 + uVar4);
        *(undefined1 *)(param_1 + 2) = 0;
        *param_1 = lVar1;
        param_1[1] = lVar1 + uVar4;
        *param_2 = *param_2 + uVar4;
        *param_3 = *param_3 + param_4 * -0x10;
        goto LAB_1400620e6;
      }
    }
    if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
      FUN_140062396(param_1,param_4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

