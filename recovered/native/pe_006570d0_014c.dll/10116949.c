/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116949 */

undefined4 FUN_10116949(uint param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1039d74c;
  uVar3 = FUN_101168ce(param_1);
  cVar2 = FUN_10113f33(uVar3);
  if ((cVar2 != '\0') && (cVar2 = FUN_10111b70(0x20), cVar2 != '\0')) {
    if ((param_1 >> 8 & 1) == 0) {
      return 1;
    }
    cVar2 = FUN_1010bfbb();
    if (cVar2 == '\0') {
      return 1;
    }
  }
  if (((*(int *)(iVar1 + 0x2080) != 0) && (*(int *)(*(int *)(iVar1 + 0x14cc) + 8) != 0)) &&
     (cVar2 = FUN_10111ac1(*(undefined4 *)(iVar1 + 0x2048),*(int *)(iVar1 + 0x14cc),0,0),
     cVar2 != '\0')) {
    return 1;
  }
  return 0;
}

