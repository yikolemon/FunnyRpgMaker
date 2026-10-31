/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017906d */

undefined4 __fastcall FUN_1017906d(int param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*param_2 != '\0') {
    pbVar1 = *(byte **)(param_1 + 0xac);
    do {
      pcVar3 = param_2 + 1;
      if (pbVar1 < *(byte **)(param_1 + 0xb0)) {
LAB_1017909a:
        *(byte **)(param_1 + 0xac) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
        pbVar1 = pbVar1 + 1;
      }
      else {
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_10170e8c();
          pbVar1 = *(byte **)(param_1 + 0xac);
          goto LAB_1017909a;
        }
        uVar2 = 0;
      }
      if (uVar2 != (int)*param_2) {
        return 0;
      }
      param_2 = pcVar3;
    } while (*pcVar3 != '\0');
  }
  FUN_10170e7b();
  return 1;
}

