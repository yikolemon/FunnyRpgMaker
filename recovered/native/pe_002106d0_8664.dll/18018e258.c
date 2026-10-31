/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018e258 */

void FUN_18018e258(longlong param_1,float param_2)

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
    fVar6 = DAT_1802df114;
    fVar1 = DAT_1802ac570;
    lVar3 = 0;
    do {
      if (lVar3 == 0) {
        uVar2 = 0x30;
      }
      else {
        fVar4 = (float)FUN_1800eebe2(*(undefined4 *)(param_1 + 0x2c),(float)(int)lVar3);
        fVar4 = (float)FUN_1802824d0(fVar1 - fVar4 / (float)(int)lVar3);
        fVar4 = (float)FUN_180283cd0(fVar6 / fVar4);
        uVar2 = FUN_18012bcdf(((int)fVar4 - ((int)fVar4 + 1 >> 0x1f)) + 1U & 0xfffffffe,4,0x200);
      }
      *(undefined1 *)(param_1 + 500 + lVar3) = uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x40);
    fVar4 = *(float *)(param_1 + 0x2c);
    fVar5 = (float)FUN_180102463(DAT_1802dc410,fVar6);
    fVar6 = (float)FUN_180284590(fVar6 / fVar5);
    *(float *)(param_1 + 0x1f0) = fVar4 / (fVar1 - fVar6);
  }
  return;
}

