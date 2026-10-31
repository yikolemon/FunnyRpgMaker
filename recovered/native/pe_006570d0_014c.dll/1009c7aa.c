/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009c7aa */

undefined4 __thiscall FUN_1009c7aa(undefined4 param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  
  FUN_1009c9e2();
  psVar1 = *(short **)param_2;
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    psVar2 = param_2;
    if (7 < *(uint *)(param_2 + 10)) {
      psVar2 = psVar1;
    }
    if (*psVar2 != 0x2e) {
      FUN_100045e8(0x2e);
      psVar1 = *(short **)param_2;
      iVar3 = *(int *)(param_2 + 8);
    }
  }
  if (*(uint *)(param_2 + 10) < 8) {
    psVar1 = param_2;
  }
  FUN_100048de(psVar1,iVar3);
  return param_1;
}

