/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001de0c */

undefined8 FUN_18001de0c(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if ((lVar2 == param_1[1]) ||
     (uVar3 = FUN_180019d5a(param_1[0xb],lVar2,lVar2 + 1,*(uint *)(param_1 + 0xd) >> 8 & 1),
     (short)uVar3 == 0)) {
    return 0;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x75);
  if (cVar1 == 'W') {
    uVar4 = 0x100;
  }
  else if (cVar1 == 'S') {
    uVar4 = 0x200;
  }
  else {
    if (cVar1 != 'D') {
      uVar4 = 0;
      if (param_2 != '\0') {
        FUN_18001e0c0(param_1 + 7);
      }
      goto LAB_18001de97;
    }
    uVar4 = 0x400;
  }
  if (param_2 != '\0') {
    FUN_18001e0c0(param_1 + 7);
    FUN_18001d792(param_1 + 7);
    uVar4 = 0;
  }
LAB_18001de97:
  FUN_18001e156(param_1 + 7,uVar3,uVar4);
  FUN_18001d674(param_1);
  return 1;
}

