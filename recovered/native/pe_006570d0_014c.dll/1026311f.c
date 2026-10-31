/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026311f */

void __thiscall FUN_1026311f(int param_1,uint param_2,uint param_3,byte param_4)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar6;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x440);
  if (*(int *)(param_1 + 0x440) == 0) {
    iVar4 = param_1 + 0x3c;
  }
  iVar3 = FUN_10263784();
  puVar1 = (ushort *)(iVar4 + -2 + iVar3 * 2);
  *(ushort **)(param_1 + 0x30) = puVar1;
  puVar6 = puVar1;
  do {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 < 1) {
      if (param_2 == 0 && param_3 == 0) {
        *(int *)(param_1 + 0x34) = (int)puVar1 - (int)puVar6 >> 1;
        *(ushort **)(param_1 + 0x30) = puVar6 + 1;
        return;
      }
      iVar4 = *(int *)(param_1 + 0x24);
    }
    *(int *)(param_1 + 0x24) = iVar4 + -1;
    uVar5 = (param_2 & 0xf) + 0x30;
    uVar2 = (ushort)uVar5;
    param_2 = param_2 >> 4 | param_3 << 0x1c;
    param_3 = param_3 >> 4;
    if (0x39 < uVar5) {
      uVar2 = (ushort)(byte)((param_4 ^ 1) * ' ' + '\a' + (char)uVar5);
    }
    *puVar6 = uVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -2;
    puVar6 = *(ushort **)(param_1 + 0x30);
  } while( true );
}

