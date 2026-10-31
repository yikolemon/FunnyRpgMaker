/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100efa08 */

void FUN_100efa08(void)

{
  int iVar1;
  int iVar2;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f52e0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_100446d6();
  iVar2 = local_20;
  local_10 = 0;
  *(undefined1 *)(local_20 + 0xb1) = 1;
  if (*(int *)(local_20 + 0xa0) != 0 || *(int *)(local_20 + 0xa4) != 0) {
    iVar1 = local_20 + 0x60;
    do {
      FUN_1022c750(iVar1,iVar2);
    } while (*(int *)(iVar2 + 0xa0) != 0 || *(int *)(iVar2 + 0xa4) != 0);
  }
  *(undefined1 *)(iVar2 + 0xb1) = 0;
  local_10 = 0xffffffff;
  FUN_1022c200(local_20);
  ExceptionList = local_18;
  return;
}

