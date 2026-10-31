/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140083208 */

undefined8 * FUN_140083208(undefined8 param_1,undefined8 *param_2,longlong *param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (0x5cb7 < *param_4) {
    FUN_140117538(*(undefined1 *)(*param_3 + 4));
    uVar4 = 0x14;
    while( true ) {
      if ((ulonglong)(param_3[1] - *param_3) <= uVar4) break;
      uVar2 = FUN_140117550();
      *(byte *)(*param_3 + uVar4) = *(byte *)(*param_3 + uVar4) ^ (byte)(uVar2 >> 0xc);
      uVar4 = uVar4 + 1;
    }
    bVar1 = *(byte *)(*param_3 + 0x13);
    uVar4 = 0x1e;
    for (bVar3 = 0; bVar3 < bVar1; bVar3 = bVar3 + 1) {
      if ((undefined1 *)param_2[1] == (undefined1 *)param_2[2]) {
        FUN_1400660b8();
      }
      else {
        *(undefined1 *)param_2[1] = *(undefined1 *)(uVar4 + *param_3);
        param_2[1] = param_2[1] + 1;
      }
      uVar4 = (ulonglong)((int)uVar4 + 0x58b1 / bVar1);
    }
  }
  return param_2;
}

