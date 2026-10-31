/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007f06b */

void FUN_14007f06b(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_140f2a910;
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

