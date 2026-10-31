/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140083902 */

undefined8 *
FUN_140083902(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [45];
  undefined1 auStack_3b [3];
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  lVar5 = *param_3;
  lVar2 = 0;
  do {
    auStack_3b[lVar2] = *(undefined1 *)(lVar5 + (ulonglong)*(byte *)(param_4 + lVar2));
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  lVar5 = 0;
  do {
    FUN_140117538(auStack_3b[lVar5]);
    lVar2 = param_3[1];
    lVar3 = lVar2;
    if (lVar2 != *param_3) {
      uVar4 = 0;
      do {
        uVar1 = FUN_140117550();
        *(byte *)(*param_3 + uVar4) = *(byte *)(*param_3 + uVar4) ^ (byte)(uVar1 >> 0xc);
        uVar4 = uVar4 + (&DAT_140164ab0)[lVar5];
        lVar2 = *param_3;
        lVar3 = param_3[1];
      } while (uVar4 < (ulonglong)(lVar3 - lVar2));
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_14005872a(param_2,lVar3 - lVar2,param_3,param_3 + 1);
  if (DAT_1401c9640 == (local_38 ^ (ulonglong)auStack_68)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_38 ^ (ulonglong)auStack_68);
}

