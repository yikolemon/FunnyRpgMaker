/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f2be6 */

void FUN_1800f2be6(undefined8 *param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  int iVar7;
  float fVar8;
  int local_e8;
  int local_e4;
  undefined8 ***local_b0 [3];
  ulonglong local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74 [13];
  
  local_74[1] = -2;
  local_74[2] = -1;
  FUN_1801003f2(&local_e8);
  fVar8 = (float)FUN_180116c08();
  lVar5 = FUN_18010128e();
  fVar1 = *(float *)(lVar5 + 0x60);
  uVar4 = FUN_18005b68d(DAT_180402aa8,(longlong)*(int *)*param_1);
  FUN_1801004b6(&local_e8,uVar4,fVar8 + fVar1);
  while (cVar3 = FUN_180100a32(&local_e8), iVar7 = local_e8, cVar3 != '\0') {
    while (local_74[0] = iVar7, iVar7 < local_e4) {
      iVar2 = *(int *)param_1[1];
      local_80 = FUN_18005b224(DAT_180402aa8,(longlong)*(int *)*param_1,(longlong)iVar7);
      local_90 = "{}:{}";
      local_88 = 5;
      FUN_1800f2b14(local_b0,&local_90,local_74,&local_80);
      ppppuVar6 = local_b0;
      if (0xf < local_98) {
        ppppuVar6 = (undefined8 ****)local_b0[0];
      }
      cVar3 = FUN_180159e6b(local_74[0],ppppuVar6,iVar2 == iVar7,0x40,0);
      FUN_180001ef2(local_b0);
      if (cVar3 != '\0') {
        *(int *)param_1[1] = local_74[0];
      }
      iVar7 = local_74[0] + 1;
    }
  }
  thunk_FUN_180100412(&local_e8);
  return;
}

