/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407812c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407812c2(ulonglong param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  uint uVar5;
  float *pfVar6;
  
  uVar5 = (int)&stack0xfffffffffffffff8 - 0x14;
  pfVar6 = (float *)(ulonglong)uVar5;
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *pfVar6 = fVar2;
  pfVar6[1] = fVar3;
  pfVar6[2] = (float)uVar1 + fVar2;
  pfVar6[3] = (float)((ulonglong)uVar1 >> 0x20) + fVar3;
  pfVar6[-2] = 3.8761551;
  pfVar6[-1] = 1.4013e-45;
  uVar4 = FUN_140781489();
  *(undefined2 *)((param_1 & 0xffffffff) + 0x86) = uVar4;
  if (_DAT_150b0a000 == ((uint)pfVar6[4] ^ uVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar6 + -2) = &UNK_140781314;
  FUN_1408802b0((uint)pfVar6[4] ^ uVar5);
}

