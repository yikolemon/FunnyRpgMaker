/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e85a8 */

void FUN_1800e85a8(void)

{
  undefined8 *puVar1;
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1800ee6d6(&DAT_180418c90);
  FUN_1800e5981();
  puVar1 = DAT_180418c48;
  local_40 = (undefined8 *)*DAT_180418c48;
  while (local_40 != puVar1) {
    FUN_1800c9080(local_60,local_40 + 4);
    FUN_1800ee798(&DAT_180418c90,local_70,local_60);
    FUN_180001ef2(local_60);
    FUN_180016c4c(&local_40);
  }
  return;
}

