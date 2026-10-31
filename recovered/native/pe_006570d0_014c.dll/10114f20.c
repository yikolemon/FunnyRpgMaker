/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114f20 */

void __fastcall FUN_10114f20(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_1039d74c;
  if ((*(byte *)(DAT_1039d74c + 0x1e84) & 0x40) == 0) {
    uVar1 = *(uint *)(DAT_1039d74c + 0x1e68);
    if ((uVar1 >> 0x12 & 1) == 0) {
      uVar4 = *(undefined4 *)(DAT_1039d74c + 0x1e64);
    }
    else {
      *(byte *)(DAT_1039d74c + 0x1e89) = *(byte *)(DAT_1039d74c + 0x1e89) | 4;
      uVar4 = *(undefined4 *)(iVar2 + 0x1e64);
      *(undefined4 *)(iVar2 + 0x1ecc) = uVar4;
    }
    cVar3 = FUN_101065b0(uVar4,uVar1 & 0x3fcff,param_1);
    if ((cVar3 != '\0') && (*(int *)(iVar2 + 0x2058) == 0)) {
      *(undefined4 *)(iVar2 + 0x2058) = param_1;
      *(undefined4 *)(iVar2 + 0x2064) = 0x11;
      *(undefined4 *)(iVar2 + 0x2060) = param_1;
      *(undefined4 *)(iVar2 + 0x205c) = param_1;
      FUN_10117108(param_1);
    }
  }
  return;
}

