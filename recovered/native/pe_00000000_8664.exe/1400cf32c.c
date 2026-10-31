/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cf32c */

undefined8 FUN_1400cf32c(int param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = 0;
  do {
    piVar1 = (int *)((longlong)&DAT_140211cd0 + lVar2);
    if (param_1 == *piVar1) break;
    bVar3 = lVar2 != 0x70;
    lVar2 = lVar2 + 4;
  } while (bVar3);
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),param_1 == *piVar1);
}

