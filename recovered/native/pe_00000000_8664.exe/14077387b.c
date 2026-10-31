/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077387b */

void FUN_14077387b(uint param_1,ulonglong param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  puVar5 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  uVar8 = param_2 & 0xffffffff;
  uVar6 = (ulonglong)param_1;
  iVar2 = *(int *)(param_2 + 0x30);
  if ((iVar2 == 0) || (*(int *)(uVar6 + 0x30) != 0)) {
    uVar3 = 0;
  }
  else {
    *(int *)(uVar6 + 0x30) = iVar2;
    *(undefined4 *)(uVar8 + 0x30) = 0;
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
  iVar2 = *(int *)(uVar8 + 0x24);
  uVar4 = (ulonglong)*(uint *)(uVar8 + 0x2c);
  *puVar5 = iVar2;
  if (iVar2 != 0) {
    puVar5[2] = (int)param_2;
    *puVar5 = *puVar5 << 2;
    puVar5[1] = (int)uVar3;
    uVar8 = 0;
    do {
      uVar7 = *(uint *)(uVar4 + uVar8);
      *(undefined4 *)((ulonglong)uVar7 + 0x430) = 0;
      pbVar1 = (byte *)((ulonglong)uVar7 + 0x409);
      *pbVar1 = *pbVar1 & 0xfe;
      *(ulonglong *)((longlong)puVar5 + -8) = (ulonglong)(byte)((byte)uVar3 ^ 1);
      *(undefined8 *)((longlong)puVar5 + -0x10) = 0x1407738df;
      FUN_140781747(uVar6);
      puVar5 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar5 + -8) + 4);
      uVar7 = (int)uVar8 + 4;
      uVar8 = (ulonglong)uVar7;
    } while (*puVar5 != uVar7);
    uVar8 = (ulonglong)puVar5[2];
    uVar4 = (ulonglong)*(uint *)(uVar8 + 0x2c);
    uVar3 = (ulonglong)puVar5[1];
  }
  if ((int)uVar4 != 0) {
    *(undefined4 *)(uVar8 + 0x28) = 0;
    *(undefined4 *)(uVar8 + 0x24) = 0;
    *(ulonglong *)((longlong)puVar5 + -8) = uVar4;
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar5 + -0x10) = &UNK_14077390b;
    FUN_14075219b();
  }
  if (((char)uVar3 == '\0') && (*(uint *)(uVar8 + 0x30) != 0)) {
    if (*(uint *)(uVar6 + 0x30) != 0) {
      *(undefined4 *)((ulonglong)*(uint *)(uVar6 + 0x30) + 0x18) =
           *(undefined4 *)((ulonglong)*(uint *)(uVar8 + 0x30) + 0x18);
    }
    FUN_14078209e(uVar8);
    return;
  }
  return;
}

