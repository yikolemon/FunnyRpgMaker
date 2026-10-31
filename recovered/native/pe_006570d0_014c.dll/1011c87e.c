/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c87e */

void FUN_1011c87e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1011b528(DAT_1039d74c,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x44) = param_2;
    *(undefined4 *)(iVar1 + 0x48) = param_3;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x44);
    *(uint *)(iVar1 + 0xa8) = *(uint *)(iVar1 + 0xa8) & 0xffffffc7 | 8;
  }
  return;
}

