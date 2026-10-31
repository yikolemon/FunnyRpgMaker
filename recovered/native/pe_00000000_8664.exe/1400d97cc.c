/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d97cc */

void FUN_1400d97cc(longlong param_1,float param_2)

{
  float fVar1;
  undefined1 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(float *)(param_1 + 0x2c) != param_2) || (NAN(*(float *)(param_1 + 0x2c)) || NAN(param_2)))
  {
    *(float *)(param_1 + 0x2c) = param_2;
    fVar6 = DAT_140211e84;
    fVar1 = DAT_1401c86c8;
    lVar3 = 0;
    do {
      if (lVar3 == 0) {
        uVar2 = 0x30;
      }
      else {
        fVar4 = (float)FUN_14004863e(*(undefined4 *)(param_1 + 0x2c),(float)(int)lVar3);
        fVar4 = (float)FUN_1401a07b0(fVar1 - fVar4 / (float)(int)lVar3);
        fVar4 = (float)FUN_1401a1f10(fVar6 / fVar4);
        uVar2 = FUN_1400a4c0f(((int)fVar4 - ((int)fVar4 + 1 >> 0x1f)) + 1U & 0xfffffffe,4,0x200);
      }
      *(undefined1 *)(param_1 + 500 + lVar3) = uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x40);
    fVar4 = *(float *)(param_1 + 0x2c);
    fVar5 = (float)FUN_14007b71f(DAT_140e8c6d0,fVar6);
    fVar6 = (float)FUN_1401a27d0(fVar6 / fVar5);
    *(float *)(param_1 + 0x1f0) = fVar4 / (fVar1 - fVar6);
  }
  return;
}

