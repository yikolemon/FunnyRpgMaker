/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011b9ab */

void __fastcall FUN_1011b9ab(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_2 + 0x30) == 0) || (*(int *)(param_1 + 0x30) != 0)) {
    bVar4 = 0;
  }
  else {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x30) = 0;
    bVar4 = 1;
  }
  iVar2 = *(int *)(param_2 + 0x24);
  iVar5 = *(int *)(param_2 + 0x2c);
  if (iVar2 != 0) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(iVar5 + iVar6);
      *(undefined4 *)(iVar3 + 0x430) = 0;
      pbVar1 = (byte *)(iVar3 + 0x409);
      *pbVar1 = *pbVar1 & 0xfe;
      FUN_10129877(bVar4 ^ 1);
      iVar6 = iVar6 + 4;
    } while (iVar2 << 2 != iVar6);
    iVar5 = *(int *)(param_2 + 0x2c);
  }
  if (iVar5 != 0) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    FUN_100fa2cb(iVar5);
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  if ((bVar4 == 0) && (*(int *)(param_2 + 0x30) != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18) =
           *(undefined4 *)(*(int *)(param_2 + 0x30) + 0x18);
    }
    FUN_1012a1ce();
    return;
  }
  return;
}

