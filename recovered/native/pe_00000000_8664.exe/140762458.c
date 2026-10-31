/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140762458 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140762458(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  pcVar3 = (char *)(ulonglong)_DAT_14cc888b1039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_14cc888b1039d74c;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  uVar4 = (ulonglong)*(uint *)(pcVar3 + 0x14cc);
  FUN_1407e0254(*(undefined4 *)(uVar4 + 0x2e8));
  puVar1 = (undefined8 *)
           (((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar4 + 0x2e8) + 0x8c) - 0x10) +
           (ulonglong)(uint)(*(int *)((ulonglong)*(uint *)(uVar4 + 0x2e8) + 0x84) << 4));
  uVar2 = puVar1[1];
  *(undefined8 *)(uVar4 + 0x28c) = *puVar1;
  *(undefined8 *)(uVar4 + 0x294) = uVar2;
  return;
}

