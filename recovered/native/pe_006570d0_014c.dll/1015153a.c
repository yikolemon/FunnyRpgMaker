/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015153a */

void FUN_1015153a(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_1039d74c + 0x2358);
  if ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x12) & 0x10) != 0)) {
    iVar3 = FUN_1010cbda(param_1);
    if ((iVar3 != 0) &&
       (((*(byte *)(iVar3 + 0x409) & 1) != 0 && (iVar1 = *(int *)(iVar3 + 0x430), iVar1 != 0)))) {
      uVar2 = FUN_1014f899();
      FUN_1014f7e0(*(undefined4 *)(iVar1 + 0x30),uVar2);
      *(byte *)(iVar3 + 0x409) = *(byte *)(iVar3 + 0x409) | 8;
    }
  }
  else {
    uVar2 = FUN_1014f899();
    iVar3 = FUN_1014f645(iVar3,uVar2);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0x2c) = 1;
    }
  }
  return;
}

