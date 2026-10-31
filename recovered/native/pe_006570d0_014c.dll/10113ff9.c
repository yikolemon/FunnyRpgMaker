/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113ff9 */

void FUN_10113ff9(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_1039d74c;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *(undefined4 *)(DAT_1039d74c + 0xac0) = uVar1;
  *(undefined4 *)(iVar3 + 0xac4) = uVar2;
  *(undefined4 *)(iVar3 + 0xe4) = uVar1;
  *(undefined4 *)(iVar3 + 0xe8) = uVar2;
  *(undefined4 *)(iVar3 + 0xd8) = 0;
  *(undefined4 *)(iVar3 + 0xdc) = 0;
  *(undefined1 *)(iVar3 + 0xbf) = 1;
  return;
}

