/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f79b */

void __fastcall FUN_0045f79b(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x14);
  if (puVar2 == (ushort *)0x0) {
    return;
  }
  uVar1 = *puVar2;
  uVar5 = (uint)uVar1;
  if (uVar5 < 2) {
    uVar7 = 0;
    if (uVar5 == 0) {
      uVar6 = (uint)puVar2[1];
      uVar7 = 0;
      bVar4 = true;
      goto LAB_0045f7dc;
    }
  }
  else {
    uVar7 = *(ushort *)(*(int *)(puVar2 + 6) + -4 + uVar5 * 2) + 1;
  }
  uVar6 = (uint)puVar2[1];
  if (uVar7 == uVar6) {
    *puVar2 = uVar1 - 1;
    return;
  }
  bVar4 = false;
LAB_0045f7dc:
  if ((((1 < (ushort)uVar6) &&
       (iVar3 = *(int *)(puVar2 + 2),
       *(int *)(iVar3 + uVar7 * 8) == *(int *)(iVar3 + -8 + uVar6 * 8))) &&
      (*(int *)(iVar3 + 4 + uVar7 * 8) == *(int *)(iVar3 + -4 + uVar6 * 8))) &&
     (*(char *)(*(int *)(puVar2 + 4) + -1 + uVar6) == '\x01')) {
    uVar6 = uVar6 - 1;
    puVar2[1] = (ushort)uVar6;
  }
  if (!bVar4) {
    uVar8 = (uVar6 & 0xffff) - 1;
    if (uVar7 == uVar8) {
      *puVar2 = uVar1 - 1;
      puVar2[1] = (short)uVar6 - 1;
    }
    else {
      *(short *)(*(int *)(puVar2 + 6) + -2 + uVar5 * 2) = (short)uVar8;
    }
  }
  return;
}

