/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800efd6f */

undefined8 FUN_1800efd6f(undefined8 param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  longlong lVar3;
  undefined8 **local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_40 = param_3;
  local_3c = param_2;
  local_38 = param_1;
  FUN_1800f02ec();
  lVar1 = DAT_180418ce8;
  for (lVar3 = DAT_180418ce0; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    if ((*(int *)(lVar3 + 0x20) == local_3c) && (*(int *)(lVar3 + 0x24) == local_40)) {
      FUN_180015c27(local_60,&DAT_18035f4ee,lVar3);
      pppuVar2 = local_60;
      if (0xf < local_48) {
        pppuVar2 = (undefined8 ***)local_60[0];
      }
      FUN_180003300(local_38,pppuVar2,local_50);
      FUN_180001ef2(local_60);
    }
  }
  return local_38;
}

