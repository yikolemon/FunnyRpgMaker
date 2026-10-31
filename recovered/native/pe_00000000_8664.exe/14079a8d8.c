/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a8d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079a8d8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(ulonglong)_DAT_2544888b1039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_2544888b1039d74c;
  *(undefined4 *)((ulonglong)*(uint *)(pcVar2 + 0x1220) + 8) = param_1;
  *(undefined4 *)((ulonglong)*(uint *)(pcVar2 + 0x1224) + 0x30) = *(undefined4 *)(pcVar2 + 0x2524);
  *(undefined4 *)((ulonglong)*(uint *)(pcVar2 + 0x1224) + 0xc) = *(undefined4 *)(pcVar2 + 0x2500);
  uVar3 = (ulonglong)*(uint *)(pcVar2 + 0x1224);
  uVar1 = *(undefined4 *)(pcVar2 + 0x250c);
  *(undefined4 *)(pcVar2 + 0x250c) = *(undefined4 *)(uVar3 + 0x18);
  *(undefined4 *)(uVar3 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(pcVar2 + 0x2510);
  *(undefined4 *)(pcVar2 + 0x2510) = *(undefined4 *)(uVar3 + 0x1c);
  *(undefined4 *)(uVar3 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(pcVar2 + 0x2514);
  *(undefined4 *)(pcVar2 + 0x2514) = *(undefined4 *)(uVar3 + 0x20);
  *(undefined4 *)(uVar3 + 0x20) = uVar1;
  puVar4 = (undefined4 *)(ulonglong)*(uint *)(pcVar2 + 0x1224);
  uVar1 = *(undefined4 *)(pcVar2 + 0x24f4);
  *(undefined4 *)(pcVar2 + 0x24f4) = *puVar4;
  *puVar4 = uVar1;
  uVar1 = *(undefined4 *)(pcVar2 + 0x24f8);
  *(undefined4 *)(pcVar2 + 0x24f8) = puVar4[1];
  puVar4[1] = uVar1;
  uVar1 = *(undefined4 *)(pcVar2 + 0x24fc);
  *(undefined4 *)(pcVar2 + 0x24fc) = puVar4[2];
  puVar4[2] = uVar1;
  return;
}

