/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100752c4 */

int __fastcall FUN_100752c4(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
      iVar3 = *(int *)(param_1 + 0x50);
      iVar4 = *(int *)(param_1 + 0x54);
      **(int **)(param_1 + 0xc) = iVar3;
      **(int **)(param_1 + 0x1c) = iVar3;
      **(int **)(param_1 + 0x2c) = iVar4 - iVar3;
    }
    cVar2 = FUN_10074f54();
    iVar4 = FUN_1026d543(*(undefined4 *)(param_1 + 0x4c));
    iVar3 = 0;
    if (iVar4 == 0) {
      iVar3 = param_1;
    }
    if (cVar2 == '\0') {
      iVar3 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(int *)(param_1 + 0xc) = param_1 + 4;
  *(int *)(param_1 + 0x10) = param_1 + 8;
  *(int *)(param_1 + 0x1c) = param_1 + 0x14;
  *(int *)(param_1 + 0x20) = param_1 + 0x18;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(int *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar1 = DAT_1039cbbc;
  *(undefined4 *)(param_1 + 0x44) = DAT_1039cbc0;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return iVar3;
}

