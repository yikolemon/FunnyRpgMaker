/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101426f2 */

void __thiscall FUN_101426f2(int *param_1,int param_2,char *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  
  if (param_3 != param_4) {
    iVar6 = *param_1;
    uVar1 = param_1[2];
    if (param_4 == (char *)0x0) {
      sVar8 = _strlen(param_3);
    }
    else {
      sVar8 = (int)param_4 - (int)param_3;
    }
    if (((uVar1 >> 0x16 & 1) == 0) && (~param_1[8] + param_1[9] < (int)sVar8)) {
      iVar2 = FUN_100fab65(param_3,param_3 + sVar8,param_3 + ~param_1[8] + param_1[9]);
      sVar8 = iVar2 - (int)param_3;
    }
    if (sVar8 != 0) {
      iVar2 = param_1[8];
      if ((uVar1 & 0x400200) == 0x400000 && *(int *)(iVar6 + 0x2488) <= (int)(sVar8 + iVar2)) {
        uVar3 = FUN_100fbc6a(0x100,sVar8);
        iVar4 = FUN_10125d9a(sVar8 * 4,0x20,uVar3);
        iVar7 = iVar4 + iVar2 + 1;
        iVar4 = iVar4 + iVar2 + 2;
        iVar2 = *(int *)(iVar6 + 0x248c);
        if (iVar2 < iVar4) {
          if (iVar2 == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = iVar2 / 2 + iVar2;
          }
          if (iVar2 <= iVar4) {
            iVar2 = iVar4;
          }
          iVar5 = FUN_100fa1fa(iVar2);
          if (*(int *)(iVar6 + 0x2490) != 0) {
            FUN_1025b2d0(iVar5,*(int *)(iVar6 + 0x2490),*(undefined4 *)(iVar6 + 0x2488));
            FUN_100fa2cb(*(undefined4 *)(iVar6 + 0x2490));
          }
          *(int *)(iVar6 + 0x2490) = iVar5;
          *(int *)(iVar6 + 0x248c) = iVar2;
        }
        else {
          iVar5 = *(int *)(iVar6 + 0x2490);
        }
        *(int *)(iVar6 + 0x2488) = iVar4;
        *(int *)(iVar6 + 0x2484) = iVar5;
        param_1[7] = iVar5;
        *(int *)(iVar6 + 0x24ac) = iVar7;
        param_1[9] = iVar7;
        iVar2 = param_1[8];
      }
      if (iVar2 - param_2 != 0) {
        FUN_1025b2d0(param_1[7] + param_2 + sVar8,param_1[7] + param_2,iVar2 - param_2);
      }
      FUN_1025b2d0(param_1[7] + param_2,param_3,sVar8);
      *(undefined1 *)(sVar8 + param_1[7] + param_1[8]) = 0;
      *(undefined1 *)((int)param_1 + 0x1b) = 1;
      iVar6 = param_1[8];
      param_1[8] = iVar6 + sVar8;
      iVar2 = param_1[10];
      if (param_2 <= iVar2) {
        iVar2 = iVar2 + sVar8;
        param_1[10] = iVar2;
      }
      iVar6 = FUN_10125d9a(iVar2,0,iVar6 + sVar8);
      param_1[10] = iVar6;
      param_1[0xc] = iVar6;
      param_1[0xb] = iVar6;
    }
  }
  return;
}

