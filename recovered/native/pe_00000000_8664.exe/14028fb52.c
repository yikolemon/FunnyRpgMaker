/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028fb52 */

void FUN_14028fb52(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 0;
  do {
    FUN_14049add8(*(undefined1 *)(param_3 + lVar2));
    if (param_2[1] != *param_2) {
      uVar3 = 0;
      do {
        uVar1 = FUN_14049adf0();
        *(byte *)(*param_2 + uVar3) = *(byte *)(*param_2 + uVar3) ^ (byte)(uVar1 >> 0xc);
        uVar3 = uVar3 + (&DAT_1404ca7f0)[lVar2];
      } while (uVar3 < (ulonglong)(param_2[1] - *param_2));
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}

