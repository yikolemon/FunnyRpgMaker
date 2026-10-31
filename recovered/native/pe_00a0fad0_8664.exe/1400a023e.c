/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a023e */

undefined1 * FUN_1400a023e(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 local_c8 [56];
  undefined8 local_90;
  char *local_88;
  char *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = 0;
  *(int *)(param_1 + 4) = *param_2;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  local_38 = param_1 + 0x10;
  local_30 = param_1 + 0x58;
  local_28 = param_1;
  FUN_140088b70();
  if (*param_2 != 0) {
    return param_1;
  }
  local_90 = 0x1b000000a1;
  local_88 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG\\FileCoder.hpp"
  ;
  local_80 = "__cdecl FileCoder::FileCoder(const Mode &, const WolfFileType &)";
  FUN_140087f79(local_58);
  FUN_14000ed8c(local_78,local_58,"FileCoder: READ mode requires a filename or buffer.");
  FUN_1400886d4(local_c8,local_78);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_c8,&DAT_1401a5720);
}

