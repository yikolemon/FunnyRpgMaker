/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c74a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1408c74a0(longlong param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint unaff_EDI;
  uint uVar6;
  char *pcStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = (ulonglong)unaff_EDI;
  uVar4 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (ulonglong)*(uint *)(uVar4 + 8);
  uVar6 = *(uint *)(uVar4 + 8) + 1;
  if (_DAT_150c6c4b1 == 0) {
    if (0x100 < uVar6) {
      return (char *)0x0;
    }
    pcStack_30 = (char *)(ulonglong)_DAT_4b70f5f1039b408;
    if (SBORROW4(uVar6,0x100)) {
      uStack_28 = param_1;
      FUN_1408cc7ed();
      uVar2 = (ulonglong)((int)&pcStack_30 + 8);
      if (uVar6 < 0x101) {
        return (char *)(ulonglong)
                       (*(ushort *)((ulonglong)*(uint *)(ulonglong)*(uint *)(uVar4 - 4) + uVar5 * 2)
                       & 2);
      }
      if ((int)((uint *)(ulonglong)*(uint *)(uVar4 - 4))[1] < 2) {
        return (char *)0x0;
      }
      *(undefined8 *)(uVar2 - 8) = 0;
      *(undefined8 *)(uVar2 - 0x10) = 2;
      *(ulonglong *)(uVar2 - 0x18) = uVar5;
      *(undefined8 *)(uVar2 - 0x20) = 0x1408c7483;
      pcVar1 = (char *)FUN_1408d06fe();
      return pcVar1;
    }
    if (param_1 == 1 || uVar6 == 0x100) {
      return pcStack_30;
    }
    *pcStack_30 = *pcStack_30 + (char)_DAT_4b70f5f1039b408;
  }
  else {
    uStack_28 = 0x1408c74d6;
    pcStack_30 = (char *)FUN_1408cc29d();
  }
  *(undefined4 *)(uVar4 - 4) = *(undefined4 *)(pcStack_30 + 0x4c);
  uStack_28 = (ulonglong)((int)&stack0xfffffffffffffff8 - 4);
  FUN_1408cc7ed();
  uVar3 = (ulonglong)((int)&pcStack_30 + 8);
  if (uVar6 < 0x101) {
    return (char *)(ulonglong)
                   (*(ushort *)((ulonglong)*(uint *)(ulonglong)*(uint *)(uVar4 - 4) + uVar5 * 2) & 8
                   );
  }
  if ((int)((uint *)(ulonglong)*(uint *)(uVar4 - 4))[1] < 2) {
    return (char *)0x0;
  }
  *(undefined8 *)(uVar3 - 8) = 0;
  *(undefined8 *)(uVar3 - 0x10) = 8;
  *(ulonglong *)(uVar3 - 0x18) = uVar5;
  *(undefined8 *)(uVar3 - 0x20) = 0x1408c7513;
  pcVar1 = (char *)FUN_1408d06fe();
  return pcVar1;
}

