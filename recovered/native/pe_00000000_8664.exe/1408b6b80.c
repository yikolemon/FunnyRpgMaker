/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b6b80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1408b6b80(uint param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint unaff_EDI;
  undefined4 *puVar5;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = (ulonglong)unaff_EDI;
  puVar5 = (undefined4 *)(ulonglong)param_1;
  uStack_28 = 0x1408b6b90;
  uVar3 = (*_DAT_150c14b20)();
  cVar1 = *(char *)(puVar5 + 2);
  *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4) = uVar3;
  if (cVar1 == '\0') {
    puVar5[1] = 0;
    uStack_28 = 0;
    *(undefined1 *)(puVar5 + 2) = 1;
  }
  else {
    uStack_28 = (ulonglong)(uint)puVar5[1];
  }
  uStack_30 = (ulonglong)((int)&stack0xfffffffffffffff8 - 4);
  uVar3 = FUN_1408cc3be();
  uVar4 = (ulonglong)((int)&uStack_30 + 8);
  *puVar5 = uVar3;
  *(undefined8 *)(uVar4 - 8) =
       *(undefined8 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4);
  pcVar2 = _DAT_150c14c71;
  *(undefined8 *)(uVar4 - 0x10) = 0x1408b6bc5;
  (*pcVar2)();
  return uVar3;
}

