/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10251dc0 */

void FUN_10251dc0(int *param_1,int param_2,int param_3,int param_4,char param_5,undefined4 param_6,
                 undefined4 param_7,uint *param_8,double *param_9)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  double *pdVar4;
  int *piVar5;
  undefined4 ***pppuVar6;
  float10 fVar7;
  undefined4 **local_3c;
  undefined4 **local_38 [4];
  int local_28;
  uint local_24;
  undefined1 local_20 [12];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pdVar4 = param_9;
  puVar3 = param_8;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a39d;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10252020(local_38,&param_2,&param_4,param_6,param_7,local_20,local_14);
  local_8 = 0;
  if ((char)param_3 == '\0') {
    FUN_100e1fa2();
  }
  if (param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_10251e53;
  }
  else if (param_4 == 0) goto LAB_10251e53;
  *puVar3 = *puVar3 | 1;
LAB_10251e53:
  if (local_28 == 0) {
    *puVar3 = *puVar3 | 2;
  }
  else {
    pppuVar6 = local_38;
    if (0xf < local_24) {
      pppuVar6 = (undefined4 ***)local_38[0];
    }
    piVar5 = (int *)FUN_10268ffd();
    iVar1 = *piVar5;
    *piVar5 = 0;
    fVar7 = (float10)FUN_1027093b(pppuVar6,&local_3c);
    iVar2 = *piVar5;
    *piVar5 = iVar1;
    if (((undefined4 ***)local_3c == pppuVar6) || (iVar2 != 0)) {
      *puVar3 = *puVar3 | 2;
    }
    else {
      *pdVar4 = (double)fVar7;
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_10004e60();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

