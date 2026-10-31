/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10174620 */

undefined4 __fastcall FUN_10174620(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = *(char **)(param_1 + 0xac);
  iVar3 = 0;
  do {
    if (pcVar1 < *(char **)(param_1 + 0xb0)) {
LAB_1017464e:
      *(char **)(param_1 + 0xac) = pcVar1 + 1;
      cVar2 = *pcVar1;
      pcVar1 = pcVar1 + 1;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        pcVar1 = *(char **)(param_1 + 0xac);
        goto LAB_1017464e;
      }
      cVar2 = '\0';
    }
    if (cVar2 != *(char *)(param_2 + iVar3)) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 4) {
      return 1;
    }
  } while( true );
}

