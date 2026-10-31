/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006cdaa */

void FUN_1006cdaa(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_2 + 0xd);
  while (cVar1 == '\0') {
    FUN_1006cdaa(param_1,param_2[2]);
    piVar2 = (int *)*param_2;
    FUN_10001f04();
    FUN_102283a0(param_2,0x28);
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}

