/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042f247 */

int __cdecl FUN_0042f247(undefined4 param_1,int *param_2,ushort *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_00430bb5(param_2,param_3);
  if (iVar3 == 0) {
    uVar4 = param_2[0x2af];
    if ((uVar4 & 1) == 0) {
      iVar3 = FUN_00432137(param_2,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_0043215d((int)param_2,param_4,0);
      uVar4 = param_2[0x2af];
    }
    if ((uVar4 & 2) == 0) {
      iVar3 = FUN_00432137(param_2,1);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_0043215d((int)param_2,param_4,1);
    }
    iVar3 = 0;
    bVar2 = true;
    do {
      bVar1 = bVar2;
      if (bVar1) {
        if ((param_2[0x2af] & 1U) == 0) goto LAB_0042f2d1;
      }
      else {
        if ((param_2[0x2af] & 2U) != 0) break;
LAB_0042f2d1:
        FUN_004322e3((int)param_2,iVar3);
        FUN_00432675((int)param_2,iVar3);
        FUN_0043272e((int)param_2,iVar3);
        FUN_0043291a((int)param_2,iVar3);
      }
      iVar3 = 1;
      bVar2 = false;
    } while (bVar1);
    FUN_00432abf((int)param_2,(int)param_3);
    iVar3 = 0;
  }
  return iVar3;
}

