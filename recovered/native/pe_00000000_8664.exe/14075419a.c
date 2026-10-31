/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075419a */

undefined4 FUN_14075419a(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  byte bVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  piVar7 = (int *)(param_1 & 0xffffffff);
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x28);
  _local_20 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),*(undefined4 *)(param_1 + 0x10));
  uStack_28 = 0x1407541b2;
  uVar3 = FUN_140754262();
  iVar1 = piVar7[1];
  iVar2 = *piVar7;
  pfVar5 = (float *)&local_20;
  if (((*(uint *)(uVar8 + 0x2308) != 0) &&
      (pfVar5 = (float *)&local_20, *(char *)((ulonglong)*(uint *)(uVar8 + 0x2308) + 0x1f9) == '\0')
      ) && (pfVar5 = (float *)&local_20, (*(byte *)(uVar8 + 0x27b4) & 0x20) != 0)) {
    uStack_28 = 0x10355093;
    FUN_1407518b6();
    pfVar5 = (float *)(ulonglong)((int)&uStack_28 + 4);
  }
  bVar4 = (byte)uVar3 & iVar2 < iVar1;
  if (*pfVar5 <= 0.0) {
    if ((0.0 < (float)piVar7[4]) && ((*(byte *)(uVar8 + 0x27b4) & 0x20) != 0)) {
      puVar6 = (undefined4 *)(ulonglong)((int)pfVar5 - 0xc);
      *(double *)(puVar6 + 1) = (double)(float)piVar7[4];
      *puVar6 = 0x1035523a;
      *(undefined8 *)(puVar6 + -2) = 0x14075421c;
      FUN_1407518b6();
      pfVar5 = (float *)((ulonglong)pfVar5 & 0xffffffff);
    }
  }
  if (bVar4 == 0) {
    if ((*(uint *)(uVar8 + 0x27b4) & 0x20) != 0) {
      *(undefined8 *)((longlong)pfVar5 + -8) = 0x1035538a;
      *(undefined8 *)((longlong)pfVar5 + -0x10) = 0x14075424f;
      FUN_1407518b6();
      pfVar5 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar5 + -8) + 4);
    }
    *(undefined8 *)((longlong)pfVar5 + -8) = 0x140754259;
    FUN_140753b60(piVar7);
  }
  else if ((*(uint *)(uVar8 + 0x27b4) & 0x20) != 0) {
    *(undefined8 *)((longlong)pfVar5 + -8) = *(undefined8 *)(piVar7 + 1);
    *(undefined8 *)((longlong)pfVar5 + -0x10) = *(undefined8 *)piVar7;
    *(undefined8 *)((longlong)pfVar5 + -0x18) = 0x103553a1;
    *(undefined8 *)((longlong)pfVar5 + -0x20) = 0x14075423c;
    FUN_1407518b6();
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11(iVar2 < iVar1,(byte)uVar3))
                        >> 8),bVar4);
}

