/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077381c */

undefined8 * FUN_14077381c(uint param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uStack_20;
  
  puVar3 = &stack0xffffffffffffffe8;
  if (param_2 == 0) {
    uStack_20 = (ulonglong)param_1;
    param_2 = FUN_14077340b();
    puVar3 = (undefined1 *)(ulonglong)((int)&uStack_20 + 4);
  }
  if ((*(byte *)((ulonglong)param_1 + 0x27b5) & 4) != 0) {
    *(ulonglong *)(puVar3 + -8) = (ulonglong)param_2;
    *(undefined8 *)(puVar3 + -0x10) = 0x1034d72a;
    *(undefined8 *)(puVar3 + -0x18) = 0x140773849;
    FUN_1407518b6();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -0x10) + 8);
  }
  *(undefined8 *)(puVar3 + -8) = 0xb0;
  *(undefined8 *)(puVar3 + -0x10) = 0x140773857;
  uVar1 = FUN_1407520ca();
  uVar4 = (ulonglong)((int)(puVar3 + -8) + 4);
  puVar2 = (undefined8 *)(ulonglong)uVar1;
  *(ulonglong *)(uVar4 - 8) = (ulonglong)param_2;
  *(undefined8 *)(uVar4 - 0x10) = 0x140773864;
  FUN_140774060(uVar1);
  *(undefined8 **)(uVar4 - 0x10) = puVar2;
  *(undefined8 *)(uVar4 - 0x18) = *puVar2;
  *(undefined8 *)(uVar4 - 0x20) = 0x140773874;
  FUN_14075324c(param_1 + 0x269c);
  return puVar2;
}

