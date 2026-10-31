/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa8b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407aa8b4(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  float fVar8;
  
  uVar4 = _DAT_150b4801a;
  puVar7 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 100);
  uVar6 = (ulonglong)_DAT_150b4801a;
  fVar8 = *(float *)(uVar6 + 0x1228);
  puVar7[5] = *(float *)(uVar6 + 0xd10) + *(float *)(uVar6 + 0xd10) + fVar8;
  fVar8 = fVar8 + _DAT_150a63e48;
  puVar7[6] = fVar8;
  uVar2 = *(uint *)(uVar6 + 0x14cc);
  puVar7[8] = fVar8 + fVar8;
  puVar7[0xb] = *(undefined4 *)((ulonglong)uVar2 + 0x144);
  puVar7[0xc] = *(undefined4 *)((ulonglong)uVar2 + 0x148);
  uVar3 = *(undefined8 *)(uVar6 + 0xe08);
  puVar5 = (undefined8 *)((ulonglong)(puVar7 + 0x14) & 0xffffffff);
  *puVar5 = *(undefined8 *)(uVar6 + 0xe00);
  puVar5[1] = uVar3;
  *(float *)((longlong)puVar5 + 0xc) = *(float *)((longlong)puVar5 + 0xc) * _DAT_150a61a19;
  puVar7[1] = (int)(puVar7 + 0x14);
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + -2) = 0x1407aa94c;
  FUN_140754c50();
  puVar5 = (undefined8 *)((ulonglong)(puVar7 + 0x10) & 0xffffffff);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar7[1] = (int)(puVar7 + 0x10);
  *puVar7 = 0x16;
  *(undefined8 *)(puVar7 + -2) = 0x1407aa966;
  FUN_140754c50();
  puVar7[1] = 0;
  *puVar7 = 10;
  *(undefined8 *)(puVar7 + -2) = 0x1407aa979;
  FUN_14076964d();
  puVar7[10] = uVar4;
  *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)(uVar6 + 0x94);
  *(undefined8 *)(uVar6 + 0x94) = _DAT_150a64013;
  uVar1 = *(undefined4 *)((ulonglong)param_1 + 0x30);
  puVar7[1] = *(float *)((ulonglong)param_1 + 0x38) - (float)puVar7[8];
  *puVar7 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -2) = &UNK_1407aa9bb;
  FUN_140755a9a();
}

