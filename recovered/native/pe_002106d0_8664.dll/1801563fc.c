/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801563fc */

undefined8 FUN_1801563fc(int param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = 0;
  do {
    piVar1 = (int *)((longlong)&DAT_1802def60 + lVar2);
    if (param_1 == *piVar1) break;
    bVar3 = lVar2 != 0x70;
    lVar2 = lVar2 + 4;
  } while (bVar3);
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),param_1 == *piVar1);
}

