/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017d561 */

void FUN_18017d561(byte *param_1,byte *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  bVar2 = *param_2;
  if (param_4 == 1) {
    param_1[1] = bVar2;
    *param_1 = bVar2;
  }
  else {
    *param_1 = bVar2;
    param_1[1] = (byte)((uint)(ushort)bVar2 + (uint)(ushort)bVar2 * 2 + (uint)param_2[1] + 2 >> 2);
    uVar1 = param_4 - 1;
    uVar3 = 2;
    if (2 < param_4) {
      lVar4 = 0;
      do {
        iVar5 = (uint)param_2[lVar4 + 1] + (uint)param_2[lVar4 + 1] * 2;
        param_1[lVar4 * 2 + 2] = (byte)((uint)param_2[lVar4] + iVar5 + 2 >> 2);
        param_1[lVar4 * 2 + 3] = (byte)(iVar5 + (uint)param_2[lVar4 + 2] + 2 >> 2);
        lVar4 = lVar4 + 1;
      } while ((ulonglong)uVar1 - 1 != lVar4);
      uVar3 = (ulonglong)(uVar1 * 2);
    }
    param_1[uVar3] =
         (byte)((uint)param_2[(longlong)param_4 + -2] + (uint)param_2[(longlong)param_4 + -2] * 2 +
                (uint)param_2[(int)uVar1] + 2 >> 2);
    param_1[uVar3 + 1] = param_2[(int)uVar1];
  }
  return;
}

