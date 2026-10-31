/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079b48e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079b48e(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar8;
  uint uVar10;
  int *piVar7;
  ulonglong uVar9;
  
  uVar5 = (int)&stack0xffffffffffffffe0 - 0x1c;
  piVar7 = (int *)(ulonglong)uVar5;
  piVar7[2] = param_2;
  piVar7[3] = param_1;
  iVar1 = piVar7[0xe];
  piVar7[6] = _DAT_150b241af ^ uVar5;
  *piVar7 = iVar1 + piVar7[0x10];
  iVar4 = *(int *)(ulonglong)(uint)piVar7[0xd];
  uVar5 = ((int *)(ulonglong)(uint)piVar7[0xd])[2];
  piVar7[1] = iVar4;
  uVar10 = uVar5 + iVar4 * 4;
  *(ulonglong *)(piVar7 + -2) = (ulonglong)(uint)piVar7[0x10];
  piVar7[-4] = 0x4079b4d1;
  piVar7[-3] = 1;
  puVar3 = (uint *)FUN_1407aa655((ulonglong)uVar5,uVar10);
  puVar8 = (uint *)(ulonglong)((int)(piVar7 + -2) + 4);
  uVar2 = (uint)puVar3;
  if (uVar5 < uVar2) {
    if ((uVar2 != uVar10) && (*puVar3 == puVar8[0x10])) {
      if ((*(float *)((ulonglong)puVar8[0xc] + 0x4c) <= 0.0) ||
         (((*(char *)((ulonglong)puVar8[0xc] + 0x5a) != '\x01' ||
           (*(char *)((ulonglong)*puVar8 - 1) == '\0')) ||
          (*(char *)((ulonglong)*puVar8 - 1) == '\n')))) goto LAB_14079b50e;
    }
    puVar3 = (uint *)(ulonglong)(uVar2 - 4);
  }
LAB_14079b50e:
  iVar4 = 0;
  uVar2 = (int)((uint)puVar3 - uVar5) >> 2;
  if ((uint)puVar3 == uVar5) {
    uVar2 = 0;
  }
  if (puVar8[1] != 0) {
    iVar4 = *(int *)((ulonglong)uVar5 + (ulonglong)uVar2 * 4);
  }
  uVar5 = puVar8[2];
  puVar8[-2] = 2;
  puVar8[-1] = 0;
  puVar8[-4] = 0;
  puVar8[-3] = 0;
  *(undefined8 *)(puVar8 + -6) = *(undefined8 *)(puVar8 + 0xd);
  *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -3);
  *(ulonglong *)(puVar8 + -10) = (ulonglong)(uint)(iVar1 + iVar4);
  puVar8[-0xc] = 0x4079b546;
  puVar8[-0xb] = 1;
  FUN_1407aa0e1((undefined4 *)((ulonglong)(puVar8 + 4) & 0xffffffff),(ulonglong)uVar5);
  uVar6 = (int)(puVar8 + -10) + 0x14;
  uVar9 = (ulonglong)uVar6;
  uVar10 = *(uint *)(uVar9 + 0xc);
  *(undefined4 *)(ulonglong)uVar10 = *(undefined4 *)((ulonglong)(puVar8 + 4) & 0xffffffff);
  ((undefined4 *)(ulonglong)uVar10)[1] = (float)(int)uVar2 * *(float *)((ulonglong)uVar5 + 0x1228);
  if (_DAT_150b24276 == (*(uint *)(uVar9 + 0x18) ^ uVar6)) {
    return;
  }
  uVar5 = *(uint *)(uVar9 + 0x18);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar9 - 8) = &UNK_14079b58d;
  FUN_1408802b0(uVar5 ^ uVar6);
}

