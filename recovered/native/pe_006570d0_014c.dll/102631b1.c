/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102631b1 */

void __thiscall FUN_102631b1(int param_1,uint param_2,byte param_3)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x440);
  if (*(int *)(param_1 + 0x440) == 0) {
    iVar6 = param_1 + 0x3c;
  }
  iVar3 = FUN_10263784();
  puVar1 = (ushort *)(iVar6 + -2 + iVar3 * 2);
  *(ushort **)(param_1 + 0x30) = puVar1;
  puVar4 = puVar1;
  while ((0 < *(int *)(param_1 + 0x24) || (param_2 != 0))) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    uVar5 = param_2 & 0xf;
    param_2 = param_2 >> 4;
    uVar5 = uVar5 + 0x30;
    uVar2 = (ushort)uVar5;
    if (0x39 < uVar5) {
      uVar2 = (ushort)(byte)((param_3 ^ 1) * ' ' + '\a' + (char)uVar5);
    }
    *puVar4 = uVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -2;
    puVar4 = *(ushort **)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x34) = (int)puVar1 - (int)puVar4 >> 1;
  *(ushort **)(param_1 + 0x30) = puVar4 + 1;
  return;
}

