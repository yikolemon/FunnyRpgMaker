/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116863 */

undefined8 FUN_180116863(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(uint *)(DAT_180419160 + 0x15d8) + 1;
  lVar2 = (ulonglong)*(uint *)(DAT_180419160 + 0x15d8) * 0x78;
  do {
    lVar2 = lVar2 + -0x78;
    iVar1 = iVar1 + -1;
    if (iVar1 < 1) break;
  } while (*(longlong *)(*(longlong *)(DAT_180419160 + 0x15e0) + lVar2) != param_1);
  return CONCAT71((int7)((ulonglong)DAT_180419160 >> 8),0 < iVar1);
}

