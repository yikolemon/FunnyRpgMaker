/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e3632 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e3632(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 *puVar7;
  
  iVar6 = (int)&stack0xfffffffffffffff0;
  puVar7 = (undefined4 *)(ulonglong)(iVar6 - 0x28U);
  uVar9 = (ulonglong)param_1;
  uVar2 = puVar7[0x12];
  puVar7[9] = _DAT_150b6c343 ^ iVar6 - 0x28U;
  if ((uVar2 & 0x8000000f) == 0) {
    uVar3 = puVar7[0xf];
    if (0xffffff < uVar3) {
      uVar1 = puVar7[0x10];
      uVar4 = puVar7[0xd];
      if ((*(byte *)(uVar9 + 0x24) & 1) == 0) {
        uVar10 = *(undefined8 *)(ulonglong)(uint)puVar7[0xe];
        uVar10 = CONCAT44((float)((ulonglong)uVar10 >> 0x20) + fRam0000000150ae4a44,
                          (float)uVar10 + _DAT_150ae4a40);
      }
      else {
        uVar10 = *(undefined8 *)(ulonglong)(uint)puVar7[0xe];
        uVar10 = CONCAT44((float)((ulonglong)uVar10 >> 0x20) + fRam0000000150a9cb81,
                          (float)uVar10 + _DAT_150a9cb7d);
      }
      *(undefined8 *)((ulonglong)(puVar7 + 7) & 0xffffffff) = uVar10;
      *(ulonglong *)((ulonglong)(puVar7 + 5) & 0xffffffff) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(ulonglong)uVar4 >> 0x20) +
                    fRam0000000150a9c073,(float)*(undefined8 *)(ulonglong)uVar4 + _DAT_150a9c06f);
      puVar7[3] = uVar2;
      puVar7[2] = uVar1;
      puVar7[1] = (int)(puVar7 + 7);
      *puVar7 = (int)(puVar7 + 5);
      *(undefined8 *)(puVar7 + -2) = 0x1407e36ce;
      FUN_1407e2d14(uVar9);
      puVar8 = (undefined4 *)(ulonglong)(iVar6 - 0x38);
      uVar1 = *(undefined4 *)(uVar9 + 0x38);
      uVar5 = *(undefined4 *)(uVar9 + 0x40);
      puVar8[3] = puVar8[0x11];
      puVar8[2] = uVar3;
      puVar8[1] = uVar1;
      *puVar8 = uVar5;
      puVar8[4] = 0x200;
      *(undefined8 *)(puVar8 + -2) = 0x1407e36fd;
      FUN_1407e0774(param_1);
      puVar7 = (undefined4 *)(ulonglong)(iVar6 - 0x4c);
      *(undefined4 *)(uVar9 + 0x38) = 0;
    }
  }
  else {
    *puVar7 = 0x1033cee8;
    *(undefined8 *)(puVar7 + -2) = 0x1407e365c;
    FUN_140754dc5();
  }
  if (_DAT_150b6c413 == (*(uint *)((longlong)puVar7 + 0x24) ^ (uint)puVar7)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar7 + -8) = FUN_1407e372a;
  FUN_1408802b0(*(uint *)((longlong)puVar7 + 0x24) ^ (uint)puVar7);
}

