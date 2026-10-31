/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10148cb5 */

undefined1 FUN_10148cb5(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar2 = DAT_1039d74c;
  uVar4 = 1;
  if ((param_2 >> 8 & 1) == 0) {
    iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
    if ((*(byte *)(DAT_1039d74c + 0x1e48) & 2) == 0) {
      iVar3 = FUN_100fb06c(param_1,param_2 >> 5 & 1);
      uVar4 = iVar3 != 0;
    }
    else if (((*(byte *)(DAT_1039d74c + 0x1e6d) & 1) == 0) &&
            (iVar3 = FUN_100fb06c(param_1,0xffffffff), iVar3 != -1)) {
      uVar4 = iVar3 != 0;
    }
    else {
      uVar4 = *(undefined1 *)(iVar2 + 0x1e6c);
      FUN_10148c94(param_1,uVar4);
    }
    if ((((param_2 & 0x10) == 0) && (*(char *)(iVar2 + 0x2748) != '\0')) &&
       (*(int *)(iVar1 + 0x1cc) - *(int *)(iVar2 + 0x2770) < *(int *)(iVar2 + 0x2774))) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

