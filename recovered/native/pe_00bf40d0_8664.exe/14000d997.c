/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000d997 */

void FUN_14000d997(ulonglong param_1,ulonglong param_2,byte *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = (uint)param_2;
  uVar5 = 0;
  uVar1 = param_1 & 0xffffffff;
  if (9999 < uVar2) {
    uVar5 = 0;
    do {
      uVar6 = (uint)param_2;
      uVar3 = param_2 & 0xffffffff;
      param_2 = uVar3 / 10000;
      uVar2 = (uint)param_2;
      uVar4 = (int)(uVar3 / 10000) * -10000 + uVar6;
      *(undefined2 *)(param_3 + (uVar1 - uVar5) + -2) =
           *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar4 % 100) * 2);
      *(undefined2 *)(param_3 + (uVar1 - uVar5) + -4) =
           *(undefined2 *)(&DAT_1400b7520 + ((ulonglong)uVar4 / 100) * 2);
      uVar5 = uVar5 + 4;
    } while (99999999 < uVar6);
  }
  uVar6 = uVar2;
  if (99 < uVar2) {
    uVar6 = (uVar2 & 0xffff) / 100;
    *(undefined2 *)(param_3 + (uVar1 - uVar5) + -2) =
         *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar2 + uVar6 * -100 & 0xffff) * 2);
    uVar5 = uVar5 | 2;
  }
  if (uVar6 < 10) {
    *param_3 = (byte)uVar6 | 0x30;
  }
  else {
    *(undefined2 *)(param_3 + (uVar1 - uVar5) + -2) =
         *(undefined2 *)(&DAT_1400b7520 + (ulonglong)uVar6 * 2);
  }
  return;
}

