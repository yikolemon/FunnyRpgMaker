/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000840b */

void FUN_18000840b(ulonglong param_1,ulonglong param_2,byte *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)param_2;
  uVar4 = 0;
  param_1 = param_1 & 0xffffffff;
  if (9999 < uVar1) {
    uVar4 = 0;
    do {
      uVar5 = (uint)param_2;
      uVar2 = param_2 & 0xffffffff;
      param_2 = uVar2 / 10000;
      uVar1 = (uint)param_2;
      uVar3 = (int)(uVar2 / 10000) * -10000 + uVar5;
      *(undefined2 *)(param_3 + (param_1 - uVar4) + -2) =
           *(undefined2 *)(&DAT_1802ac810 + (ulonglong)(uVar3 % 100) * 2);
      *(undefined2 *)(param_3 + (param_1 - uVar4) + -4) =
           *(undefined2 *)(&DAT_1802ac810 + ((ulonglong)uVar3 / 100) * 2);
      uVar4 = uVar4 + 4;
    } while (99999999 < uVar5);
  }
  uVar5 = uVar1;
  if (99 < uVar1) {
    uVar5 = (uVar1 & 0xffff) / 100;
    *(undefined2 *)(param_3 + (param_1 - uVar4) + -2) =
         *(undefined2 *)(&DAT_1802ac810 + (ulonglong)(uVar1 + uVar5 * -100 & 0xffff) * 2);
    uVar4 = uVar4 | 2;
  }
  if (uVar5 < 10) {
    *param_3 = (byte)uVar5 | 0x30;
  }
  else {
    *(undefined2 *)(param_3 + (param_1 - uVar4) + -2) =
         *(undefined2 *)(&DAT_1802ac810 + (ulonglong)uVar5 * 2);
  }
  return;
}

