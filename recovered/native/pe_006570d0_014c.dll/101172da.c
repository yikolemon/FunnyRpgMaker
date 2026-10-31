/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101172da */

void FUN_101172da(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  
  iVar4 = DAT_1039d74c;
  *(undefined1 *)(DAT_1039d74c + 0x20d9) = 0;
  *(undefined4 *)(iVar4 + 0x1e80) = *param_2;
  *(uint *)(iVar4 + 0x1e84) = param_2[2] & 0xffdfffff;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  *(undefined4 *)(iVar4 + 0x1e9c) = param_2[3];
  *(undefined4 *)(iVar4 + 0x1ea0) = uVar1;
  *(undefined4 *)(iVar4 + 0x1ea4) = uVar2;
  *(undefined4 *)(iVar4 + 0x1ea8) = uVar3;
  FUN_10112734();
  FUN_10117123(1);
  uVar5 = 1;
  if (*(char *)(DAT_1039d74c + 0x20d9) == '\0') {
    uVar5 = *(undefined1 *)(DAT_1039d74c + 0x209a);
  }
  *(undefined1 *)(DAT_1039d74c + 0x2099) = uVar5;
  return;
}

