/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180175327 */

longlong FUN_180175327(uint *param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  
  iVar4 = FUN_18017f165(param_1,param_1,param_1 + 1,param_1 + 2);
  *param_4 = iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  if ((param_1[1] < 0x1000001) && (*param_1 < 0x1000001)) {
    *param_2 = *param_1;
    uVar1 = param_1[1];
    *param_3 = uVar1;
    iVar4 = *param_4;
    iVar7 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    iVar7 = iVar7 >> 3;
    uVar2 = *param_1;
    uVar3 = param_1[2];
    iVar4 = FUN_18017f33a(uVar3,uVar2,uVar1,iVar7);
    if (iVar4 != 0) {
      lVar5 = FUN_18017f394(uVar3,uVar2,uVar1,iVar7);
      if (lVar5 == 0) {
        pcVar6 = "outofmem";
      }
      else {
        iVar4 = FUN_18017759e(param_1,lVar5,uVar2 * uVar3 * iVar7 * uVar1);
        if (iVar4 != 0) {
          uVar1 = param_1[2];
          if (uVar1 == 4) {
            return lVar5;
          }
          if (*param_4 == 0x10) {
            lVar5 = FUN_1801772c7();
            return lVar5;
          }
          lVar5 = FUN_18017710b(lVar5,uVar1,*param_1,param_1[1]);
          return lVar5;
        }
        thunk_FUN_180290e40(lVar5);
        pcVar6 = "bad PNM";
      }
      goto LAB_18017541c;
    }
  }
  pcVar6 = "too large";
LAB_18017541c:
  FUN_1801765d0(pcVar6);
  return 0;
}

