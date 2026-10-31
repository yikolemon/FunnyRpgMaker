/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048c139 */

void __thiscall FUN_0048c139(void *this,uint param_1,byte param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0x440);
  if (*(int *)((int)this + 0x440) == 0) {
    iVar5 = (int)this + 0x3c;
  }
  uVar3 = FUN_0048c8ca((int)this + 0x3c);
  puVar1 = (ushort *)(iVar5 + -2 + uVar3 * 2);
  *(ushort **)((int)this + 0x30) = puVar1;
  puVar4 = puVar1;
  while ((0 < *(int *)((int)this + 0x24) || (param_1 != 0))) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    uVar3 = param_1 & 0xf;
    param_1 = param_1 >> 4;
    uVar3 = uVar3 + 0x30;
    uVar2 = (ushort)uVar3;
    if (0x39 < uVar3) {
      uVar2 = (ushort)(byte)((param_2 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *puVar4 = uVar2;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -2;
    puVar4 = *(ushort **)((int)this + 0x30);
  }
  *(int *)((int)this + 0x34) = (int)puVar1 - (int)puVar4 >> 1;
  *(ushort **)((int)this + 0x30) = puVar4 + 1;
  return;
}

