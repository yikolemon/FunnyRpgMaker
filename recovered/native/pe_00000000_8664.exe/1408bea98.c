/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408bea98 */

undefined8 FUN_1408bea98(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = FUN_1408b67dd();
  if (*(short *)(lVar2 + (ulonglong)
                         *(byte *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) * 2) < 0)
  {
    iVar3 = param_1 + 8;
    uVar1 = FUN_1408be905(iVar3);
    if (uVar1 != *(byte *)((ulonglong)param_1 + 0x2d)) {
      FUN_1408be91b(iVar3);
      FUN_1408be91b(iVar3);
      return 0;
    }
  }
  return 1;
}

