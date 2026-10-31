/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032d65c */

void FUN_14032d65c(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  lVar4 = DAT_14062a630;
  *(undefined1 *)(DAT_14062a630 + 0x22a1) = 0;
  *(undefined4 *)(lVar4 + 0x1fe0) = *param_2;
  *(uint *)(lVar4 + 0x1fe4) = param_2[2] & 0xffdfffff;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  *(undefined4 *)(lVar4 + 0x1ffc) = param_2[3];
  *(undefined4 *)(lVar4 + 0x2000) = uVar1;
  *(undefined4 *)(lVar4 + 0x2004) = uVar2;
  *(undefined4 *)(lVar4 + 0x2008) = uVar3;
  FUN_140328920();
  FUN_14032d490(1);
  uVar5 = 1;
  if (*(char *)(DAT_14062a630 + 0x22a1) == '\0') {
    uVar5 = *(undefined1 *)(DAT_14062a630 + 0x2262);
  }
  *(undefined1 *)(DAT_14062a630 + 0x2261) = uVar5;
  return;
}

