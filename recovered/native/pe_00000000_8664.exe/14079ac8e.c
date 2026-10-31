/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079ac8e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079ac8e(undefined4 param_1,ulonglong param_2)

{
  undefined4 uVar1;
  uint in_ECX;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x20);
  puVar3 = (undefined4 *)(param_2 & 0xffffffff);
  if (*(char *)(param_2 + 0x17) != '\0') {
    *(undefined8 *)(puVar2 + -8) = 0;
    *(undefined4 *)(puVar2 + -4) = param_1;
    *(undefined8 *)(puVar2 + -0x10) = 0x14079acbe;
    FUN_1407a9a19((longlong)puVar2 + 4,(ulonglong)in_ECX);
    param_1 = *(undefined4 *)(puVar2 + -4);
    puVar2 = (undefined1 *)(ulonglong)((int)(puVar2 + -8) + 4);
  }
  if (puVar3[1] == puVar3[2]) {
    puVar3[1] = *puVar3;
  }
  *(undefined8 *)(puVar2 + -8) = 0x14079ace6;
  uVar1 = FUN_1407aa381(param_1,(int *)((ulonglong)(puVar2 + 4) & 0xffffffff));
  puVar3[2] = uVar1;
  *puVar3 = uVar1;
  *(bool *)((ulonglong)in_ECX + 0x5a) = *(int *)((ulonglong)(puVar2 + 4) & 0xffffffff) != 0;
  if (_DAT_150b239fe == (*(uint *)(puVar2 + 0x1c) ^ (uint)puVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar2 + -8) = FUN_14079ad14;
  FUN_1408802b0(*(uint *)(puVar2 + 0x1c) ^ (uint)puVar2);
}

