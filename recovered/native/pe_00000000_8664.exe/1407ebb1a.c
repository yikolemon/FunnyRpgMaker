/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ebb1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ebb1a(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar7;
  float fVar8;
  ulonglong uVar6;
  
  puVar5 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x1c);
  uVar4 = puVar5[9];
  uVar7 = puVar5[0xb];
  puVar2 = (undefined4 *)((ulonglong)(puVar5 + 4) & 0xffffffff);
  *puVar2 = puVar5[10];
  puVar2[1] = uVar7;
  fVar8 = *(float *)((ulonglong)*(uint *)((ulonglong)uVar4 + 0x2c) + 0x14);
  uVar7 = 0xc;
  if (_DAT_150aecfb8 <= fVar8) {
    uVar7 = 0;
  }
  uVar3 = 8;
  if (_DAT_150aecfcf <= fVar8) {
    uVar3 = uVar7;
  }
  fVar8 = fVar8 * _DAT_150aa47f2;
  puVar5[2] = puVar5[0xc];
  puVar5[1] = fVar8;
  *puVar5 = (int)(puVar5 + 4);
  puVar5[3] = uVar3;
  *(undefined8 *)(puVar5 + -2) = 0x1407ebb98;
  FUN_1407e3fcc();
  uVar4 = (int)&stack0xfffffffffffffff8 - 0x2c;
  uVar6 = (ulonglong)uVar4;
  if (_DAT_150b748a7 == (*(uint *)(uVar6 + 0x18) ^ uVar4)) {
    return;
  }
  uVar1 = *(uint *)(uVar6 + 0x18);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar6 - 8) = &UNK_1407ebbbb;
  FUN_1408802b0(uVar1 ^ uVar4);
}

