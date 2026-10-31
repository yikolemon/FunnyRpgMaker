/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105d53 */

void FUN_180105d53(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_180419160;
  if (0 < (int)param_2) {
    lVar2 = 0;
    do {
      *(undefined8 *)(lVar1 + 0x29d8 + (longlong)*(int *)(param_1 + lVar2) * 8) =
           *(undefined8 *)(param_1 + 8 + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)param_2 << 4 != lVar2);
  }
  return;
}

