/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140771e15 */

void FUN_140771e15(int param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uStack_18;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = (undefined8 *)(param_2 & 0xffffffff);
  if (*(uint *)(param_2 + 0x30) != 0) {
    uStack_18 = (ulonglong)*(uint *)(param_2 + 0x30);
    FUN_140781617();
    puVar1 = (undefined1 *)(ulonglong)((int)&uStack_18 + 4);
  }
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar1 + -8) = 0;
  *(undefined8 *)(puVar1 + -0x10) = *puVar2;
  *(undefined8 *)(puVar1 + -0x18) = 0x140771e40;
  FUN_14075324c(param_1 + 0x269c);
  *(undefined8 **)(puVar1 + -0x18) = puVar2;
  *(undefined8 *)(puVar1 + -0x20) = 0x140771e46;
  FUN_14078171b();
  return;
}

