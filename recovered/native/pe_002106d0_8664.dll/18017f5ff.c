/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f5ff */

undefined8 FUN_18017f5ff(longlong param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*param_2 != '\0') {
    pbVar1 = *(byte **)(param_1 + 0xc0);
    do {
      pcVar3 = param_2 + 1;
      if (pbVar1 < *(byte **)(param_1 + 200)) {
LAB_18017f638:
        *(byte **)(param_1 + 0xc0) = pbVar1 + 1;
        uVar2 = (uint)*pbVar1;
        pbVar1 = pbVar1 + 1;
      }
      else {
        if (*(int *)(param_1 + 0x30) != 0) {
          FUN_180176673(param_1);
          pbVar1 = *(byte **)(param_1 + 0xc0);
          goto LAB_18017f638;
        }
        uVar2 = 0;
      }
      if (uVar2 != (int)*param_2) {
        return 0;
      }
      param_2 = pcVar3;
    } while (*pcVar3 != '\0');
  }
  FUN_180176664(param_1);
  return 1;
}

