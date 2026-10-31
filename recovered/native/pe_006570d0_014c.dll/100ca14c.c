/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca14c */

void __fastcall FUN_100ca14c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_54 [24];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc3e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  iVar1 = FUN_1026d698(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    ExceptionList = local_1c;
    return;
  }
  puVar2 = (undefined4 *)FUN_10268ffd();
  local_24 = *puVar2;
  FUN_1000334a(param_1 + 0x4c);
  local_14 = 0;
  FUN_10012eed(local_3c,"Failed flush to file ",local_54);
  local_14 = 1;
                    /* WARNING: Subroutine does not return */
  FUN_100ca6b3(local_3c,local_24);
}

