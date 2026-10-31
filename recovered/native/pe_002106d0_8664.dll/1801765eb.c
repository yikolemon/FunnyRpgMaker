/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801765eb */

undefined8 FUN_1801765eb(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  
  pcVar1 = *(char **)(param_1 + 0xc0);
  lVar3 = 0;
  do {
    if (pcVar1 < *(char **)(param_1 + 200)) {
LAB_180176623:
      *(char **)(param_1 + 0xc0) = pcVar1 + 1;
      cVar2 = *pcVar1;
      pcVar1 = pcVar1 + 1;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        pcVar1 = *(char **)(param_1 + 0xc0);
        goto LAB_180176623;
      }
      cVar2 = '\0';
    }
    if (cVar2 != (&DAT_1802e0890)[lVar3]) {
      FUN_1801765d0("bad png sig");
      return 0;
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 8) {
      return 1;
    }
  } while( true );
}

