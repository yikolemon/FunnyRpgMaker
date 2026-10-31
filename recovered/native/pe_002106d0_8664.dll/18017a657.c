/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017a657 */

undefined8 FUN_18017a657(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  
  pcVar1 = *(char **)(param_1 + 0xc0);
  lVar3 = 0;
  do {
    if (pcVar1 < *(char **)(param_1 + 200)) {
LAB_18017a68b:
      *(char **)(param_1 + 0xc0) = pcVar1 + 1;
      cVar2 = *pcVar1;
      pcVar1 = pcVar1 + 1;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        pcVar1 = *(char **)(param_1 + 0xc0);
        goto LAB_18017a68b;
      }
      cVar2 = '\0';
    }
    if (cVar2 != *(char *)(param_2 + lVar3)) {
      return 0;
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 4) {
      return 1;
    }
  } while( true );
}

