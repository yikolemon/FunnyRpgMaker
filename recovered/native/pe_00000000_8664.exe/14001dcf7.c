/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001dcf7 */

undefined8 * FUN_14001dcf7(undefined8 *param_1,longlong *param_2,undefined1 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar2 = param_2[1];
  uVar4 = lVar2 + 1;
  if ((ulonglong)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)(*param_2 + lVar2) = 0x5c;
  lVar2 = param_2[1];
  uVar4 = lVar2 + 1;
  if ((ulonglong)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)(*param_2 + lVar2) = param_3;
  local_2c = 0x30303030;
  pcVar3 = (char *)((longlong)&local_2c + 3);
  do {
    *pcVar3 = "0123456789abcdef"[param_4 & 0xf];
    pcVar3 = pcVar3 + -1;
    uVar1 = param_4 >> 4;
    param_4 = param_4 >> 4;
  } while (uVar1 != 0);
  FUN_140019fc2(param_2,&local_2c);
  *param_1 = param_2;
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

