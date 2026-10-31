/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a27f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a27f8(uint param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if (*param_2 != 0) {
    puVar9 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
    uVar12 = (ulonglong)param_1;
    uVar13 = (ulonglong)(uint)param_2[2];
    uVar8 = *param_2 * 0x18;
    uVar11 = 0;
    uVar4 = (ulonglong)_DAT_150b3ff68;
    *puVar9 = _DAT_150b3ff68;
    puVar9[2] = param_1;
    puVar9[1] = uVar8;
    do {
      iVar3 = *(int *)(uVar13 + uVar11);
      if (iVar3 == 1) {
        if ((*(byte *)(uVar4 + 0x27b4) & 0x40) != 0) {
          bVar1 = *(byte *)(uVar13 + 4 + uVar11);
          uVar5 = 0x10334ef6;
          if (bVar1 != 0) {
            uVar5 = 0x103368c3;
          }
          *(undefined8 *)((longlong)puVar9 + -8) = uVar5;
          *(ulonglong *)((longlong)puVar9 + -0x10) = (ulonglong)bVar1;
          *(ulonglong *)((longlong)puVar9 + -0x18) = uVar12;
          *(undefined8 *)((longlong)puVar9 + -0x20) = 0x103556b1;
          *(undefined8 *)((longlong)puVar9 + -0x28) = 0x1407a2859;
          FUN_1407518b6();
          uVar4 = (ulonglong)*(uint *)((longlong)puVar9 + -0x10);
          puVar9 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x20) + 0x10);
          iVar3 = *(int *)(uVar13 + uVar11);
          goto LAB_1407a2863;
        }
      }
      else {
LAB_1407a2863:
        if ((iVar3 == 2) && ((*(byte *)(uVar4 + 0x27b4) & 0x40) != 0)) {
          cVar2 = *(char *)(uVar13 + 5 + uVar11);
          puVar9[3] = (uint)*(byte *)(uVar13 + 4 + uVar11);
          uVar6 = (ulonglong)*(uint *)(uVar13 + 0x10 + uVar11);
          uVar12 = (ulonglong)*(uint *)(uVar13 + 0x14 + uVar11);
          uVar4 = (ulonglong)*(uint *)(uVar13 + 8 + uVar11);
          uVar7 = (ulonglong)*(uint *)(uVar13 + 0xc + uVar11);
          *(ulonglong *)(puVar9 + -2) = (ulonglong)(uint)(int)cVar2;
          uVar8 = *puVar9;
          *(undefined8 *)(puVar9 + -4) = *(undefined8 *)(puVar9 + 2);
          *(ulonglong *)(puVar9 + -6) = uVar12;
          *(ulonglong *)(puVar9 + -8) = uVar6;
          *(ulonglong *)(puVar9 + -10) = uVar7;
          *(ulonglong *)(puVar9 + -0xc) = uVar4;
          *(ulonglong *)(puVar9 + -0xe) = uVar12;
          uVar12 = (ulonglong)puVar9[-5];
          *(ulonglong *)(puVar9 + -0x10) = uVar6;
          *(ulonglong *)(puVar9 + -0x12) = uVar7;
          *(ulonglong *)(puVar9 + -0x14) = uVar4;
          *(ulonglong *)(puVar9 + -0x16) = uVar12;
          puVar9[-0x18] = 0x103557c7;
          puVar9[-0x17] = 0;
          puVar9[-0x1a] = 0x407a28af;
          puVar9[-0x19] = 1;
          FUN_1407518b6();
          uVar4 = (ulonglong)puVar9[-0xc];
          puVar9 = (uint *)(ulonglong)((int)(puVar9 + -0x18) + 0x30);
        }
      }
      uVar10 = (int)uVar11 + 0x18;
      uVar11 = (ulonglong)uVar10;
    } while (uVar8 != uVar10);
  }
  return;
}

