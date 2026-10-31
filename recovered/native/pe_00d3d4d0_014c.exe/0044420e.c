/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044420e */

undefined4 __fastcall FUN_0044420e(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x140) + *(int *)(param_1 + 0x14c);
  *(int *)(param_1 + 0x140) = iVar3;
  if (iVar3 < *(int *)(param_1 + 0x144)) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x13c) + iVar3);
    *(byte *)(param_1 + 0x148) = bVar1;
    cVar2 = (&DAT_004e296c)[bVar1];
    *(int *)(param_1 + 0x14c) = (int)cVar2;
    if ((bVar1 & 0xfe) == 0x40) {
      iVar3 = iVar3 + 1;
      if (*(int *)(param_1 + 0x144) <= iVar3) goto LAB_0044426f;
      *(uint *)(param_1 + 0x14c) =
           2 - (uint)*(byte *)(*(int *)(param_1 + 0x13c) + iVar3) * (int)cVar2;
    }
    uVar4 = 0;
  }
  else {
LAB_0044426f:
    *(undefined4 *)(param_1 + 0x10) = 0x83;
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return uVar4;
}

