/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140016c60 */

longlong *
FUN_140016c60(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140002673();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar1 | 7;
  uStack_50 = 0x7ffffffffffffffe;
  if (((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (uStack_50 = (uVar2 >> 1) + uVar2, uStack_50 < uVar5)) {
    uStack_50 = uVar5;
  }
  lVar4 = FUN_140002684(param_1,&uStack_50);
  param_1[2] = param_2 + lVar1;
  param_1[3] = uStack_50;
  if (uVar2 < 8) {
    FUN_1401c5180(lVar4,param_1,lVar1 * 2);
    lVar1 = lVar4 + lVar1 * 2;
    FUN_1401c5180(lVar1,param_4,param_5 * 2);
    *(undefined2 *)(lVar1 + param_5 * 2) = 0;
  }
  else {
    lVar3 = *param_1;
    FUN_1401c5180(lVar4,lVar3,lVar1 * 2);
    lVar1 = lVar4 + lVar1 * 2;
    FUN_1401c5180(lVar1,param_4,param_5 * 2);
    *(undefined2 *)(lVar1 + param_5 * 2) = 0;
    FUN_140016a7a(param_1,lVar3,uVar2);
  }
  *param_1 = lVar4;
  if (DAT_140f17b40 != (uStack_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(uStack_48 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

