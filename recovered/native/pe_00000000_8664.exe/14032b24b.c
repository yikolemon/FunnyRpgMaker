/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032b24b */

void FUN_14032b24b(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = DAT_14062a630;
  if ((*(byte *)(DAT_14062a630 + 0x1fe4) & 0x40) == 0) {
    uVar1 = *(uint *)(DAT_14062a630 + 0x1fc8);
    if ((uVar1 >> 0x12 & 1) == 0) {
      uVar2 = *(undefined4 *)(DAT_14062a630 + 0x1fc4);
    }
    else {
      *(byte *)(DAT_14062a630 + 0x1fe9) = *(byte *)(DAT_14062a630 + 0x1fe9) | 4;
      uVar2 = *(undefined4 *)(lVar3 + 0x1fc4);
      *(undefined4 *)(lVar3 + 0x202c) = uVar2;
    }
    cVar4 = FUN_14031c837(uVar2,uVar1 & 0x3fcff,param_1);
    if ((cVar4 != '\0') && (*(int *)(lVar3 + 0x2214) == 0)) {
      *(undefined4 *)(lVar3 + 0x2214) = param_1;
      *(undefined4 *)(lVar3 + 0x2220) = 0x11;
      *(undefined4 *)(lVar3 + 0x221c) = param_1;
      *(undefined4 *)(lVar3 + 0x2218) = param_1;
      FUN_14032d478(param_1);
      return;
    }
  }
  return;
}

