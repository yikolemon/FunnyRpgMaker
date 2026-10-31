/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140041993 */

void FUN_140041993(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if ((*(byte *)(lVar1 + 0x110) & 8) != 0) {
    lVar2 = (longlong)(int)param_1[10];
    lVar3 = *(short *)(lVar1 + 0x6a) * lVar2;
    *(uint *)((longlong)param_1 + 0x54) =
         (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    lVar3 = *(short *)(lVar1 + 0x6c) * lVar2;
    *(uint *)(param_1 + 0xb) =
         (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    lVar2 = *(short *)(lVar1 + 0x6e) * lVar2;
    *(uint *)((longlong)param_1 + 0x5c) =
         (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
  }
  return;
}

