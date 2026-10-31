/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017b3bb */

void FUN_18017b3bb(undefined1 *param_1,byte *param_2,byte *param_3,uint param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = (uint)*param_3;
  iVar2 = (uint)(ushort)*param_2 + (uint)(ushort)*param_2 * 2;
  if (param_4 == 1) {
    uVar1 = (undefined1)(iVar2 + uVar4 + 2 >> 2);
    param_1[1] = uVar1;
    *param_1 = uVar1;
  }
  else {
    uVar1 = (undefined1)(uVar4 + iVar2 + 2 >> 2);
    *param_1 = uVar1;
    if (1 < (int)param_4) {
      uVar5 = 1;
      iVar2 = iVar2 + uVar4;
      do {
        iVar3 = (uint)param_3[uVar5] + (uint)param_2[uVar5] + (uint)param_2[uVar5] * 2;
        param_1[uVar5 * 2 + -1] = (char)(iVar2 * 3 + iVar3 + 8U >> 4);
        param_1[uVar5 * 2] = (char)(iVar2 + iVar3 * 3 + 8U >> 4);
        uVar5 = uVar5 + 1;
        iVar2 = iVar3;
      } while (param_4 != uVar5);
      uVar1 = (undefined1)(iVar3 + 2U >> 2);
    }
    param_1[(longlong)(int)param_4 * 2 + -1] = uVar1;
  }
  return;
}

