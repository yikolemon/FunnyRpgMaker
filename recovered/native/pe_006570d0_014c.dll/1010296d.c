/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010296d */

undefined4 FUN_1010296d(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = DAT_1039d74c;
  if (((((((*(int *)(DAT_1039d74c + 0x2048) == 0) ||
          (iVar3 = *(int *)(*(int *)(DAT_1039d74c + 0x2048) + 0x3b0), iVar3 == 0)) ||
         (*(char *)(iVar3 + 0xfa) != '\x01')) || (iVar3 == *(int *)(param_1 + 0x3b0))) ||
       (((*(uint *)(iVar3 + 0xc) >> 0x1b & 1) == 0 &&
        (((param_2 & 0x20) != 0 || ((*(uint *)(iVar3 + 0xc) & 0x4000000) == 0)))))) ||
      (cVar2 = FUN_101029f7(*(undefined4 *)(param_1 + 0x3a8),iVar3), cVar2 != '\0')) &&
     ((iVar3 = *(int *)(param_1 + 0x3c), iVar3 == *(int *)(iVar1 + 0x1ff0) ||
      ((iVar3 = *(int *)(iVar1 + 0x14dc), iVar3 != 0 &&
       (*(int *)(param_1 + 0x3b0) == *(int *)(iVar3 + 0x3b0))))))) {
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return 0;
}

