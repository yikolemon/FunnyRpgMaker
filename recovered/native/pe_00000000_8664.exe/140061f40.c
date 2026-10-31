/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140061f40 */

void FUN_140061f40(longlong *param_1,longlong *param_2,ulonglong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
LAB_140061fef:
    if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
  else {
    uVar4 = (ulonglong)((uint)*param_2 & 7);
    uVar3 = 8 - uVar4;
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    if ((ulonglong)(param_4 * 0x18) <= *param_3 - uVar3 && uVar3 <= *param_3) {
      *param_2 = *param_2 + uVar3;
      *param_3 = *param_3 - uVar3;
      lVar2 = *param_2;
      if (lVar2 != 0) {
        lVar1 = lVar2 + param_4 * 0x18;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        FUN_140062376(lVar2,lVar1);
        *(undefined1 *)(param_1 + 2) = 0;
        *param_1 = lVar2;
        param_1[1] = lVar1;
        *param_2 = *param_2 + param_4 * 0x18;
        *param_3 = *param_3 + param_4 * -0x18;
        goto LAB_140061fef;
      }
    }
    if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
      FUN_1400622b2(param_1,param_4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

