/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000da87 */

void FUN_14000da87(ulonglong param_1,undefined1 (*param_2) [32])

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  
  if ((int)param_1 != 0) {
    lVar4 = 0;
    bVar1 = true;
    do {
      bVar5 = bVar1;
      iVar2 = (int)param_1;
      uVar3 = param_1 & 0xffffffff;
      param_1 = uVar3 / 10000;
      uVar6 = (int)(uVar3 / 10000) * -10000 + iVar2;
      *(undefined2 *)((longlong)param_2 + (7 - lVar4)) =
           *(undefined2 *)(&DAT_1400b7520 + (ulonglong)(uVar6 % 100) * 2);
      *(undefined2 *)((longlong)param_2 + (5 - lVar4)) =
           *(undefined2 *)(&DAT_1400b7520 + ((ulonglong)uVar6 / 100) * 2);
      lVar4 = 4;
      bVar1 = false;
    } while (bVar5);
    (*param_2)[0] = (char)param_1 + '0';
    return;
  }
  thunk_FUN_1400b3c00(param_2,0x30,9);
  return;
}

