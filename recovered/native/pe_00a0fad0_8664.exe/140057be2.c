/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140057be2 */

undefined8 FUN_140057be2(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (*param_1 == '\x01') {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar3 = *plVar1;
    if (lVar3 != plVar1[1]) {
      do {
        cVar2 = FUN_1400170b4(lVar3,param_2);
        if (cVar2 != '\0') break;
        lVar3 = lVar3 + 0x30;
      } while (lVar3 != plVar1[1]);
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                      lVar3 != *(longlong *)(*(longlong *)(param_1 + 8) + 8));
    }
  }
  return 0;
}

