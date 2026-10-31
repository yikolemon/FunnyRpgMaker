/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116a0f */

undefined4 FUN_10116a0f(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_1039d74c;
  if (*(char *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfe) == '\0') {
    if (param_1 == 0) {
      uVar3 = *(undefined4 *)(DAT_1039d74c + 0x1e80);
      uVar4 = uVar3;
    }
    else {
      uVar4 = FUN_101021d4(param_1,0);
      uVar3 = *(undefined4 *)(iVar1 + 0x1e80);
    }
    cVar2 = FUN_101168ea(param_2,uVar3);
    if (cVar2 != '\0') {
      FUN_10115eed(uVar4,param_2);
    }
    uVar3 = FUN_1011653c(uVar4,0x141);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

