/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114fbc */

void FUN_10114fbc(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar1 + 0x14cc);
  uVar2 = param_1[1];
  *(undefined4 *)(iVar1 + 0x144) = *param_1;
  *(undefined4 *)(iVar1 + 0x148) = uVar2;
  *(undefined1 *)(iVar1 + 0x185) = 1;
  return;
}

