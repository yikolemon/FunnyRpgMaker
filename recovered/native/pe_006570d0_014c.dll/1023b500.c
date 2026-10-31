/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023b500 */

void FUN_1023b500(int *param_1,int param_2,int param_3,int param_4,char param_5,undefined4 param_6,
                 undefined4 param_7,uint *param_8,double *param_9)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  double *pdVar4;
  int *piVar5;
  undefined4 ***pppuVar6;
  float10 fVar7;
  undefined4 **local_48;
  undefined4 **local_44 [4];
  int local_34;
  uint local_30;
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pdVar4 = param_9;
  puVar3 = param_8;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289d2d;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_1023b790(local_44,&param_2,&param_4,param_6,param_7,local_2c,local_14);
  local_8 = 0;
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if (param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_1023b593;
  }
  else if (param_4 == 0) goto LAB_1023b593;
  *puVar3 = *puVar3 | 1;
LAB_1023b593:
  if (local_34 == 0) {
    *puVar3 = *puVar3 | 2;
  }
  else {
    pppuVar6 = local_44;
    if (0xf < local_30) {
      pppuVar6 = (undefined4 ***)local_44[0];
    }
    piVar5 = (int *)FUN_10268ffd();
    iVar1 = *piVar5;
    *piVar5 = 0;
    fVar7 = (float10)FUN_1027093b(pppuVar6,&local_48);
    iVar2 = *piVar5;
    *piVar5 = iVar1;
    if (((undefined4 ***)local_48 == pppuVar6) || (iVar2 != 0)) {
      *puVar3 = *puVar3 | 2;
    }
    else {
      *pdVar4 = (double)fVar7;
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_10001fee();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

