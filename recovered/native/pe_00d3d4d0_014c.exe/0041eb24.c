/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041eb24 */

void __fastcall FUN_0041eb24(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 8);
  lVar1 = (longlong)(int)*(short *)(param_1 + 0x46) * (longlong)iVar2;
  iVar3 = (int)(lVar1 >> 0x3f);
  lVar1 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
  *(uint *)(param_2 + 0xc) =
       ((int)((ulonglong)lVar1 >> 0x20) * 0x10000 | (uint)lVar1 >> 0x10) + 0x3f & 0xffffffc0;
  lVar1 = (longlong)(int)*(short *)(param_1 + 0x48) * (longlong)iVar2;
  iVar3 = (int)(lVar1 >> 0x3f);
  lVar1 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
  *(uint *)(param_2 + 0x10) =
       (int)((ulonglong)lVar1 >> 0x20) * 0x10000 | (uint)lVar1 >> 0x10 & 0xffffffc0;
  lVar1 = (longlong)(int)*(short *)(param_1 + 0x4a) * (longlong)iVar2;
  iVar2 = (int)(lVar1 >> 0x3f);
  lVar1 = lVar1 + CONCAT44(iVar2,iVar2) + 0x8000;
  *(uint *)(param_2 + 0x14) =
       ((int)((ulonglong)lVar1 >> 0x20) * 0x10000 | (uint)lVar1 >> 0x10) + 0x20 & 0xffffffc0;
  lVar1 = (longlong)(int)*(short *)(param_1 + 0x4c) * (longlong)*(int *)(param_2 + 4);
  iVar2 = (int)(lVar1 >> 0x3f);
  lVar1 = lVar1 + CONCAT44(iVar2,iVar2) + 0x8000;
  *(uint *)(param_2 + 0x18) =
       ((int)((ulonglong)lVar1 >> 0x20) * 0x10000 | (uint)lVar1 >> 0x10) + 0x20 & 0xffffffc0;
  return;
}

