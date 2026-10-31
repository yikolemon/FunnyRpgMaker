/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c169d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c169d(void)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  
  pfVar6 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x60);
  fVar8 = pfVar6[0x1e];
  fVar3 = pfVar6[0x1d];
  uVar5 = (ulonglong)_DAT_150b5edfe;
  *(undefined1 *)((ulonglong)*(uint *)(uVar5 + 0x14cc) + 0xfb) = 1;
  uVar1 = *(uint *)(uVar5 + 0x14cc);
  uVar7 = (ulonglong)uVar1;
  pfVar6[1] = fVar8;
  *pfVar6 = fVar3;
  pfVar6[-2] = 3.9388926;
  pfVar6[-1] = 1.4013e-45;
  fVar3 = (float)FUN_1407c1647();
  pfVar6[1] = fVar3;
  *pfVar6 = (float)uVar1;
  pfVar6[-2] = 3.9388955;
  pfVar6[-1] = 1.4013e-45;
  lVar4 = FUN_1407c123c();
  *(undefined4 *)(lVar4 + 0xc) = 0;
  *(float *)(lVar4 + 0x10) = fVar8;
  *(float *)(lVar4 + 4) = pfVar6[0x1f];
  *(int *)(uVar7 + 0x1e8) = (int)lVar4;
  *(undefined1 *)(uVar7 + 0x1a4) = 0;
  *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(uVar7 + 0x148);
  *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(uVar7 + 0x15c);
  uVar2 = *(undefined8 *)(uVar7 + 0x294);
  *(undefined8 *)(lVar4 + 0x2c) = *(undefined8 *)(uVar7 + 0x28c);
  *(undefined8 *)(lVar4 + 0x34) = uVar2;
  uVar2 = *(undefined8 *)(uVar7 + 0x284);
  *(undefined8 *)(lVar4 + 0x4c) = *(undefined8 *)(uVar7 + 0x27c);
  *(undefined8 *)(lVar4 + 0x54) = uVar2;
  *(undefined8 *)(uVar7 + 0x27c) = *(undefined8 *)(uVar7 + 0x26c);
  *(undefined8 *)(uVar7 + 0x284) = *(undefined8 *)(uVar7 + 0x274);
  pfVar6[4] = *(float *)(uVar5 + 0xd1c);
  fVar8 = *(float *)((ulonglong)uVar1 + 0x80) * _DAT_150a78841;
  pfVar6[1] = *(float *)((ulonglong)uVar1 + 0x8c);
  *pfVar6 = fVar8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar6 + -2) = &UNK_1407c1771;
  FUN_140755a9a();
}

