/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f2918 */

void FUN_1800f2918(undefined8 *param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  float fVar8;
  int local_f0;
  int local_ec;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 ***local_a8 [3];
  ulonglong local_90;
  char *local_88;
  undefined8 local_80;
  int local_74 [13];
  
  local_74[1] = -2;
  local_74[2] = -1;
  FUN_1801003f2(&local_f0);
  fVar8 = (float)FUN_180116c08();
  lVar6 = FUN_18010128e();
  fVar1 = *(float *)(lVar6 + 0x60);
  uVar4 = FUN_18005b5ea(DAT_180402aa8);
  FUN_1801004b6(&local_f0,uVar4,fVar8 + fVar1);
  while (cVar3 = FUN_180100a32(&local_f0), iVar5 = local_f0, cVar3 != '\0') {
    while (local_74[0] = iVar5, iVar5 < local_ec) {
      FUN_18005b509(local_b8,DAT_180402aa8,(longlong)iVar5);
      iVar2 = local_74[0];
      iVar5 = *(int *)*param_1;
      local_88 = "{}:{}";
      local_80 = 5;
      FUN_1800f2b14(local_a8,&local_88,local_74,local_b8);
      ppppuVar7 = local_a8;
      if (0xf < local_90) {
        ppppuVar7 = (undefined8 ****)local_a8[0];
      }
      cVar3 = FUN_180159e6b(local_74[0],ppppuVar7,iVar5 == iVar2,0x40,0);
      FUN_180001ef2(local_a8);
      if (cVar3 != '\0') {
        *(int *)*param_1 = local_74[0];
        *(undefined8 *)param_1[1] = local_b0;
      }
      iVar5 = local_74[0] + 1;
    }
  }
  thunk_FUN_180100412(&local_f0);
  return;
}

