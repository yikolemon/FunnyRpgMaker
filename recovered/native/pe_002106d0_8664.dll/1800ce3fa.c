/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ce3fa */

ulonglong FUN_1800ce3fa(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                       longlong param_5)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_158 [40];
  char local_130 [256];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_158;
  uVar3 = 0xffffffffffffffff;
  if ((param_2 != 0) && (param_5 != 0)) {
    uVar3 = param_2 - 1U;
    if (param_3 <= param_2 - 1U) {
      uVar3 = param_3;
    }
    if (0xf < uVar3 + param_5 + 1) {
      if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_158)) {
        uVar3 = FUN_18023b540(param_1,uVar3 + 1,param_4,param_5);
        return uVar3;
      }
      goto LAB_1800ce50d;
    }
    lVar4 = 0;
    FUN_1802a89a0(local_130,0,0x100);
    do {
      local_130[*(byte *)(param_4 + lVar4)] = '\x01';
      lVar4 = lVar4 + 1;
    } while (param_5 != lVar4);
    bVar2 = *(byte *)(param_1 + uVar3);
    while (local_130[bVar2] == '\0') {
      if (uVar3 == 0) {
        uVar3 = 0xffffffffffffffff;
        break;
      }
      pbVar1 = (byte *)(param_1 + -1 + uVar3);
      uVar3 = uVar3 - 1;
      bVar2 = *pbVar1;
    }
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_158)) {
    return uVar3;
  }
LAB_1800ce50d:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_158);
}

