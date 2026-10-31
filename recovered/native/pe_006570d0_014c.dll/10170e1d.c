/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10170e1d */

undefined4 __fastcall FUN_10170e1d(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = *(char **)(param_1 + 0xac);
  iVar3 = -8;
  do {
    if (pcVar1 < *(char **)(param_1 + 0xb0)) {
LAB_10170e4b:
      *(char **)(param_1 + 0xac) = pcVar1 + 1;
      cVar2 = *pcVar1;
      pcVar1 = pcVar1 + 1;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        pcVar1 = *(char **)(param_1 + 0xac);
        goto LAB_10170e4b;
      }
      cVar2 = '\0';
    }
    if (cVar2 != (&DAT_102babe0)[iVar3]) {
      FUN_10170e07();
      return 0;
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 0) {
      return 1;
    }
  } while( true );
}

