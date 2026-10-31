/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007e682 */

void FUN_18007e682(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 0;
  do {
    FUN_180289908(*(undefined1 *)(param_3 + lVar2));
    if (param_2[1] != *param_2) {
      uVar3 = 0;
      do {
        uVar1 = FUN_180289920();
        *(byte *)(*param_2 + uVar3) = *(byte *)(*param_2 + uVar3) ^ (byte)(uVar1 >> 0xc);
        uVar3 = uVar3 + (&DAT_1802b9320)[lVar2];
      } while (uVar3 < (ulonglong)(param_2[1] - *param_2));
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}

