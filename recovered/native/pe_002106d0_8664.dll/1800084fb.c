/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800084fb */

void FUN_1800084fb(ulonglong param_1,char *param_2)

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
      *(undefined2 *)(param_2 + (7 - lVar4)) =
           *(undefined2 *)(&DAT_1802ac810 + (ulonglong)(uVar6 % 100) * 2);
      *(undefined2 *)(param_2 + (5 - lVar4)) =
           *(undefined2 *)(&DAT_1802ac810 + ((ulonglong)uVar6 / 100) * 2);
      lVar4 = 4;
      bVar1 = false;
    } while (bVar5);
    *param_2 = (char)param_1 + '0';
    return;
  }
  thunk_FUN_1802a89a0(param_2,0x30,9);
  return;
}

