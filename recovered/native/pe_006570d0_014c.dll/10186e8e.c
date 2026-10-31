/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10186e8e */

void __thiscall FUN_10186e8e(int param_1,float param_2)

{
  float fVar1;
  undefined1 uVar2;
  int iVar3;
  float10 fVar4;
  
  if ((*(float *)(param_1 + 0x20) != param_2) || (NAN(*(float *)(param_1 + 0x20)) || NAN(param_2)))
  {
    *(float *)(param_1 + 0x20) = param_2;
    iVar3 = 0;
    do {
      if (iVar3 == 0) {
        uVar2 = 0x30;
      }
      else {
        fVar4 = (float10)FUN_100ea38a(*(undefined4 *)(param_1 + 0x20),(float)iVar3);
        fVar4 = (float10)FUN_1026cb00((double)(DAT_1028b430 - (float)fVar4 / (float)iVar3));
        fVar4 = (float10)FUN_1026d3b0((double)(DAT_102b9604 / (float)fVar4));
        uVar2 = FUN_10125d9a(((int)fVar4 - ((int)fVar4 + 1 >> 0x1f)) + 1U & 0xfffffffe,4,0x200);
      }
      *(undefined1 *)(param_1 + 0x1dc + iVar3) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x40);
    fVar1 = *(float *)(param_1 + 0x20);
    fVar4 = (float10)FUN_100fdbca(0x42400000,0x40490fdb);
    fVar4 = (float10)FUN_1026d4b0((double)(DAT_102b9604 / (float)fVar4));
    *(float *)(param_1 + 0x1d8) = fVar1 / (DAT_1028b430 - (float)fVar4);
  }
  return;
}

