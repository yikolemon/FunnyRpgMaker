/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fbada */

void __thiscall FUN_100fbada(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_4 - param_3 != 0) {
    iVar4 = param_1[3];
    if ((iVar4 == 0) || (*(char *)(param_2 + -1 + iVar4) == '\n')) {
      iVar3 = *param_1;
      if (iVar3 == param_1[1]) {
        if (iVar3 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar3 / 2 + iVar3;
        }
        iVar5 = iVar3 + 1;
        if (iVar3 + 1 < iVar4) {
          iVar5 = iVar4;
        }
        iVar1 = FUN_100fa1fa(iVar5 * 4);
        if (param_1[2] != 0) {
          FUN_1025b2d0(iVar1,param_1[2],*param_1 << 2);
          FUN_100fa2cb(param_1[2]);
        }
        param_1[2] = iVar1;
        param_1[1] = iVar5;
        iVar3 = *param_1;
        iVar4 = param_1[3];
      }
      else {
        iVar1 = param_1[2];
      }
      *(int *)(iVar1 + iVar3 * 4) = iVar4;
      *param_1 = *param_1 + 1;
    }
    pvVar2 = _memchr((void *)(param_3 + param_2),10,param_4 - param_3);
    if (pvVar2 != (void *)0x0) {
      do {
        pvVar2 = (void *)((int)pvVar2 + 1);
        if (pvVar2 < (void *)(param_2 + param_4)) {
          iVar4 = *param_1;
          if (iVar4 == param_1[1]) {
            if (iVar4 == 0) {
              iVar3 = 8;
            }
            else {
              iVar3 = iVar4 / 2 + iVar4;
            }
            iVar1 = iVar4 + 1;
            if (iVar4 + 1 < iVar3) {
              iVar1 = iVar3;
            }
            iVar3 = FUN_100fa1fa(iVar1 * 4);
            if (param_1[2] != 0) {
              FUN_1025b2d0(iVar3,param_1[2],*param_1 << 2);
              FUN_100fa2cb(param_1[2]);
            }
            param_1[2] = iVar3;
            param_1[1] = iVar1;
            iVar4 = *param_1;
          }
          else {
            iVar3 = param_1[2];
          }
          *(int *)(iVar3 + iVar4 * 4) = (int)pvVar2 - param_2;
          *param_1 = *param_1 + 1;
        }
        pvVar2 = _memchr(pvVar2,10,(param_2 + param_4) - (int)pvVar2);
      } while (pvVar2 != (void *)0x0);
    }
    iVar4 = FUN_100fbc6a(param_1[3],param_4);
    param_1[3] = iVar4;
  }
  return;
}

