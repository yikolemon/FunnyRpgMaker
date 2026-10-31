/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018adc */

undefined4 FUN_10018adc(void)

{
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [20];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_98;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058df0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10012c2d(local_98);
  local_14 = 0;
  FUN_10012eed(local_50,"\\\\\\\\.\\\\pipe\\\\",local_98);
  local_14 = 1;
  FUN_10018956("NAMED_PIPE_LISTENER",1);
  local_14 = 2;
  FUN_1002088c(local_68,&DAT_1034eade,local_38,local_50,0);
  local_14 = 3;
  FUN_10012eed(local_80,";",local_68);
  local_14 = 4;
  FUN_10020842(local_24,local_80,";");
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  FUN_10018a12();
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_1c;
  return local_24;
}

