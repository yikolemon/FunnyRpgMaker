/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043fe02 */

void __cdecl FUN_0043fe02(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if ((*(byte *)(iVar4 + 0xb0) & 8) != 0) {
    iVar1 = param_1[0xe];
    lVar2 = (longlong)(int)*(short *)(iVar4 + 0x46) * (longlong)iVar1;
    iVar3 = (int)(lVar2 >> 0x3f);
    lVar2 = lVar2 + CONCAT44(iVar3,iVar3) + 0x8000;
    param_1[0xf] = ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + 0x20 &
                   0xffffffc0;
    lVar2 = (longlong)(int)*(short *)(iVar4 + 0x48) * (longlong)iVar1;
    iVar3 = (int)(lVar2 >> 0x3f);
    lVar2 = lVar2 + CONCAT44(iVar3,iVar3) + 0x8000;
    param_1[0x10] =
         ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + 0x20 & 0xffffffc0;
    lVar2 = (longlong)(int)*(short *)(iVar4 + 0x4a) * (longlong)iVar1;
    iVar4 = (int)(lVar2 >> 0x3f);
    lVar2 = lVar2 + CONCAT44(iVar4,iVar4) + 0x8000;
    param_1[0x11] =
         ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + 0x20 & 0xffffffc0;
  }
  return;
}

