/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101168ea */

undefined4 FUN_101168ea(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1039d74c;
  uVar3 = FUN_101168ce(param_1);
  cVar2 = FUN_10113f33(uVar3);
  if ((cVar2 != '\0') && (cVar2 = FUN_10102a1a(0x20), cVar2 != '\0')) {
    return 1;
  }
  if (*(int *)(iVar1 + 0x207c) == param_2) {
    cVar2 = FUN_10102c44();
    if (cVar2 != '\0') {
      return 1;
    }
    if (param_2 == *(int *)(*(int *)(iVar1 + 0x14cc) + 0xb4)) {
      return 1;
    }
  }
  return 0;
}

