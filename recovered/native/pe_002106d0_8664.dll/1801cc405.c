/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc405 */

void FUN_1801cc405(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)*(int *)(param_2 + 8);
  lVar2 = *(short *)(param_1 + 0x6a) * lVar1;
  *(uint *)(param_2 + 0xc) =
       (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) + 0x3fU & 0xffffffc0;
  lVar2 = *(short *)(param_1 + 0x6c) * lVar1;
  *(uint *)(param_2 + 0x10) =
       (uint)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) & 0xffffffc0;
  lVar1 = *(short *)(param_1 + 0x6e) * lVar1;
  *(uint *)(param_2 + 0x14) =
       (int)((ulonglong)(lVar1 + 0x8000 + (lVar1 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
  lVar1 = (longlong)*(short *)(param_1 + 0x70) * (longlong)*(int *)(param_2 + 4);
  *(uint *)(param_2 + 0x18) =
       (int)((ulonglong)(lVar1 + 0x8000 + (lVar1 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
  return;
}

