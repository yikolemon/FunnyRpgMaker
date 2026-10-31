/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140017008 */

longlong *
FUN_140017008(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined2 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140002673();
  }
  uVar2 = param_1[3];
  uVar4 = param_2 + lVar1 | 7;
  local_50 = 0x7ffffffffffffffe;
  if (((uVar4 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (local_50 = (uVar2 >> 1) + uVar2, local_50 < uVar4)) {
    local_50 = uVar4;
  }
  lVar3 = FUN_140002684(param_1,&local_50);
  param_1[2] = param_2 + lVar1;
  param_1[3] = local_50;
  if (uVar2 < 8) {
    FUN_1401c5180(lVar3,param_1,lVar1 * 2);
    lVar1 = lVar3 + lVar1 * 2;
    if (param_4 != 0) {
      lVar6 = 0;
      do {
        *(undefined2 *)(lVar1 + lVar6 * 2) = param_5;
        lVar6 = lVar6 + 1;
      } while (param_4 != lVar6);
    }
    *(undefined2 *)(lVar1 + param_4 * 2) = 0;
  }
  else {
    lVar6 = *param_1;
    FUN_1401c5180(lVar3,lVar6,lVar1 * 2);
    lVar1 = lVar3 + lVar1 * 2;
    if (param_4 != 0) {
      lVar5 = 0;
      do {
        *(undefined2 *)(lVar1 + lVar5 * 2) = param_5;
        lVar5 = lVar5 + 1;
      } while (param_4 != lVar5);
    }
    *(undefined2 *)(lVar1 + param_4 * 2) = 0;
    FUN_140016a7a(param_1,lVar6,uVar2);
  }
  *param_1 = lVar3;
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

