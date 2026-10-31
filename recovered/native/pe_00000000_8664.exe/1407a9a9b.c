/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a9a9b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a9a9b(ulonglong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  float *pfVar8;
  float10 in_ST0;
  float fVar9;
  
  uVar6 = (ulonglong)((int)&stack0xfffffffffffffff0 - 0xc);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(uVar6 + 0x18);
  *(ulonglong *)(uVar6 - 8) = (ulonglong)(uint)(*(int *)(param_1 + 0x10) + iVar2);
  *(ulonglong *)(uVar6 - 0x10) = (ulonglong)(uint)(param_2 + iVar2 + iVar3);
  *(ushort **)(uVar6 - 0x18) = (ushort *)(uVar6 + 4 & 0xffffffff);
  *(undefined8 *)(uVar6 - 0x20) = 0x1407a9ac7;
  FUN_140750fa5();
  puVar7 = (undefined1 *)(ulonglong)((int)(uVar6 - 0x18) + 0xc);
  uVar1 = *(ushort *)(uVar6 + 4 & 0xffffffff);
  fVar9 = _DAT_150a6252a;
  if (uVar1 != 10) {
    uVar4 = *(uint *)(param_1 & 0xffffffff);
    uVar5 = *(undefined4 *)((ulonglong)uVar4 + 0x1224);
    pfVar8 = (float *)(puVar7 + -8);
    *(ulonglong *)(puVar7 + -8) = (ulonglong)uVar1;
    *(undefined8 *)(puVar7 + -0x10) = 0x1407a9aea;
    FUN_1407eae88(uVar5);
    *(float *)(puVar7 + -8) = (float)in_ST0;
    puVar7 = puVar7 + -8;
    fVar9 = *pfVar8 * *(float *)((ulonglong)uVar4 + 0x1230);
  }
  if (_DAT_150b32806 != (*(uint *)(puVar7 + 8) ^ (uint)puVar7)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_1407a9b1b;
    FUN_1408802b0(fVar9);
  }
  return;
}

