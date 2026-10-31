/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007876a */

undefined8 FUN_14007876a(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (*param_1 == '\x01') {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar3 = *plVar1;
    if (lVar3 != plVar1[1]) {
      do {
        cVar2 = FUN_14000d7b8(lVar3,param_2);
        if (cVar2 != '\0') break;
        lVar3 = lVar3 + 0x30;
      } while (lVar3 != plVar1[1]);
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                      lVar3 != *(longlong *)(*(longlong *)(param_1 + 8) + 8));
    }
  }
  return 0;
}

