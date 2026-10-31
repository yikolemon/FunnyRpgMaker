/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140026081 */

bool FUN_140026081(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (lVar2 == 0) {
    bVar3 = true;
  }
  else {
    lVar5 = 0;
    do {
      bVar1 = *(byte *)((longlong)param_1 + lVar5);
      iVar4 = isprint((uint)bVar1);
      bVar6 = (byte)(bVar1 - 9) < 2;
      bVar3 = bVar6 || iVar4 != 0;
      if (!bVar6 && iVar4 == 0) {
        return bVar3;
      }
      bVar6 = lVar2 + -1 != lVar5;
      lVar5 = lVar5 + 1;
    } while (bVar6);
  }
  return bVar3;
}

