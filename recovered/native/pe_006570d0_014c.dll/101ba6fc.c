/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ba6fc */

void FUN_101ba6fc(int param_1)

{
  char cVar1;
  int local_60 [2];
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)local_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_101bcfc0;
  local_20 = ExceptionList;
  local_60[0] = **(int **)(param_1 + 0x2c);
  ExceptionList = &local_20;
  FUN_100fbc78();
  local_18 = 0;
  FUN_100fbd22(0x7fffffff,0xbf800000);
  while( true ) {
    cVar1 = FUN_100fc2ca();
    if (cVar1 == '\0') break;
    for (; (local_50 < local_54 && (local_60[0] != 0));
        local_60[0] = FUN_101ba84e(local_58,local_60[0])) {
    }
  }
  for (; local_60[0] != 0; local_60[0] = FUN_101ba84e(local_58,local_60[0])) {
  }
  FUN_100fc06e(local_50);
  local_18 = 0xffffffff;
  thunk_FUN_100fbc90();
  ExceptionList = local_20;
  return;
}

