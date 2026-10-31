/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140016fb5 */

undefined8 FUN_140016fb5(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  cVar2 = FUN_1400170b4(lVar1,param_1[2]);
  if ((cVar2 != '\0') &&
     ((lVar3 = *(longlong *)(lVar1 + 0x40), lVar3 != *(longlong *)(lVar1 + 0x48) ||
      (lVar3 = *(longlong *)(lVar1 + 0x30), *(longlong *)(lVar1 + 0x28) != lVar3)))) {
    if ((int)param_1[1] != 2) {
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    lVar3 = *param_1;
    if (*(longlong *)(lVar3 + 0x210) != lVar1) {
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),*(longlong *)(lVar3 + 0x218) != lVar1);
    }
  }
  return 0;
}

