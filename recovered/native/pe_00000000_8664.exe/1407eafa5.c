/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eafa5 */

ulonglong FUN_1407eafa5(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint *puVar10;
  
  puVar9 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  uVar1 = puVar9[0xb];
  uVar2 = puVar9[10];
  uVar8 = (ulonglong)uVar2;
  uVar3 = *(undefined4 *)((ulonglong)uVar1 + 0x10);
  puVar9[2] = puVar9[0xd];
  puVar9[1] = puVar9[0xc];
  *puVar9 = uVar3;
  puVar9[-2] = 0x407eafd7;
  puVar9[-1] = 1;
  uVar5 = FUN_1407eaf4c();
  iVar4 = *(int *)(uVar8 + 0x290);
  *puVar9 = uVar5;
  puVar9[1] = 0;
  puVar9[-2] = 0x407eaff4;
  puVar9[-1] = 1;
  puVar6 = (uint *)FUN_140753084(iVar4 + 0xc0);
  puVar10 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x1c);
  uVar7 = (ulonglong)*puVar6;
  if (*puVar6 == 0) {
    if (((*(byte *)((ulonglong)uVar1 + 8) & 8) != 0) || (*(char *)(uVar8 + 0x40) == '\x01')) {
      puVar10[3] = puVar10[0xd];
      puVar10[2] = puVar10[0xc];
      puVar10[1] = uVar1;
      *puVar10 = uVar2;
      puVar10[-2] = 0x407eb02f;
      puVar10[-1] = 1;
      uVar7 = FUN_1407e8f0a();
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (*(char *)(uVar8 + 0x40) != '\0') {
        return 0;
      }
    }
    puVar10[4] = uVar5;
    puVar10[3] = puVar10[0xd];
    puVar10[2] = puVar10[0xc];
    puVar10[1] = uVar1;
    *puVar10 = uVar2;
    puVar10[-2] = 0x407eb063;
    puVar10[-1] = 1;
    uVar7 = FUN_1407e8a30();
    *(int *)((ulonglong)puVar6 & 0xffffffff) = (int)uVar7;
  }
  return uVar7;
}

