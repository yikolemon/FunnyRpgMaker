/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801716f8 */

void FUN_1801716f8(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  longlong lVar7;
  char *local_68;
  undefined8 local_60;
  undefined8 **local_58 [3];
  ulonglong local_40;
  undefined8 local_38;
  
  puVar2 = DAT_1804195d0;
  local_38 = 0xfffffffffffffffe;
  lVar7 = *(longlong *)(param_1 + 10);
  lVar1 = *(longlong *)(param_1 + 0xc);
  FUN_180118054();
  local_68 = "{:03d}: {}";
  local_60 = 10;
  FUN_180173713(local_58,&local_68,param_1,param_1 + 2);
  uVar6 = 0x810e0;
  if (lVar7 == lVar1) {
    uVar6 = 0x813e8;
  }
  cVar3 = FUN_18014cfb6("##DrawTreeNodes",uVar6 | puVar2 == param_1);
  cVar4 = FUN_18011aab1();
  if (cVar4 != '\0') {
    pppuVar5 = (undefined8 ***)local_58[0];
    if (local_40 < 0x10) {
      pppuVar5 = local_58;
    }
    FUN_18013309a(pppuVar5,0);
    thunk_FUN_18010f900();
  }
  cVar4 = FUN_180110bfd(0);
  if (cVar4 != '\0') {
    DAT_1804195d0 = param_1;
    FUN_18018033d(*param_1);
  }
  FUN_180119893(0,0);
  pppuVar5 = local_58;
  if (0xf < local_40) {
    pppuVar5 = (undefined8 ***)local_58[0];
  }
  FUN_18013309a(pppuVar5,0);
  if (cVar3 != '\0') {
    lVar7 = *(longlong *)(param_1 + 10);
    lVar1 = *(longlong *)(param_1 + 0xc);
    if (lVar7 != lVar1) {
      for (; lVar7 != lVar1; lVar7 = lVar7 + 0x40) {
        FUN_1801716f8(lVar7);
      }
      FUN_18014d7a9();
    }
  }
  FUN_18011834f();
  FUN_180001ef2(local_58);
  return;
}

