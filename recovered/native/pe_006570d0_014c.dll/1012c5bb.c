/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c5bb */

int __fastcall FUN_1012c5bb(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  if (*param_1 != param_2) {
    *param_1 = param_2;
    *(undefined2 *)((int)param_1 + 5) = 0xff00;
    if (param_1[3] < 0) {
      iVar3 = FUN_100fa1fa(0);
      if (param_1[4] != 0) {
        FUN_1025b2d0(iVar3,param_1[4],param_1[2] * 0xc);
        FUN_100fa2cb(param_1[4]);
      }
      param_1[4] = iVar3;
      param_1[3] = 0;
    }
    param_1[2] = 0;
    FUN_1012c6a0(0);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    cVar5 = *(char *)((int)param_1 + 6);
    iVar4 = (int)cVar5;
    iVar2 = param_1[2];
    if (iVar4 < 0) {
      *(bool *)((int)param_1 + 5) = iVar2 == iVar4;
      if (cVar5 == -1) {
        *(undefined1 *)(param_1 + 1) = 1;
        iVar3 = param_2;
      }
    }
    else {
      if ((iVar4 < iVar2) &&
         ((*(char *)(param_1[4] + 5 + iVar4 * 0xc) != '\0' ||
          ('\x02' < *(char *)(param_1[4] + iVar4 * 0xc + 4))))) {
        cVar5 = cVar5 + '\x01';
        *(char *)((int)param_1 + 6) = cVar5;
        iVar4 = (int)cVar5;
      }
      *(bool *)((int)param_1 + 5) = iVar2 == iVar4;
      if (iVar4 < iVar2 && -1 < cVar5) {
        pcVar1 = (char *)(param_1[4] + 4 + iVar4 * 0xc);
        *pcVar1 = *pcVar1 + '\x01';
        *(undefined1 *)(param_1 + 1) = 1;
        iVar3 = *(int *)(param_1[4] + *(char *)((int)param_1 + 6) * 0xc);
      }
    }
  }
  return iVar3;
}

